#include "janelacadastro.h"
#include "ui_janelacadastro.h"

#include <QMessageBox>
#include <QRegularExpression>

static QString somenteDigitos(const QString &texto)
{
    QString resultado = texto;
    resultado.remove(QRegularExpression("\\D"));
    return resultado;
}

static bool cpfValido(const QString &texto)
{
    const QString cpf = somenteDigitos(texto);
    if (cpf.size() != 11 || cpf == QString(11, cpf.isEmpty() ? QChar('0') : cpf.at(0)))
        return false;

    auto digito = [&cpf](int tamanho) {
        int soma = 0;
        for (int i = 0; i < tamanho; ++i)
            soma += cpf.at(i).digitValue() * (tamanho + 1 - i);
        const int resto = (soma * 10) % 11;
        return resto == 10 ? 0 : resto;
    };
    return cpf.at(9).digitValue() == digito(9) && cpf.at(10).digitValue() == digito(10);
}

JanelaCadastro::JanelaCadastro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::JanelaCadastro)
{
    ui->setupUi(this);

    ui->placaLineEdit->setEnabled(false);

    connect(ui->possuiVeiculoCheckBox, &QCheckBox::toggled,
            this, &JanelaCadastro::onPossuiVeiculoToggled);

    connect(ui->confirmarButton, &QPushButton::clicked,
            this, &JanelaCadastro::onConfirmarClicked);

    connect(ui->cancelarButton, &QPushButton::clicked,
            this, &JanelaCadastro::reject);
}

JanelaCadastro::~JanelaCadastro()
{
    delete ui;
}

void JanelaCadastro::onPossuiVeiculoToggled(bool marcado)
{
    ui->placaLineEdit->setEnabled(marcado);

    if (!marcado)
        ui->placaLineEdit->clear();
}

void JanelaCadastro::onConfirmarClicked()
{
    if (ui->nomeCompletoLineEdit->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this, "Dados incompletos", "Por favor, informe o nome completo do hóspede.");
        return;
    }

    if (!cpfValido(ui->cpfLineEdit->text()))
    {
        QMessageBox::warning(this, "CPF inválido", "Informe um CPF válido com 11 dígitos.");
        return;
    }

    const int quantidadeDigitosTelefone = somenteDigitos(ui->telefoneLineEdit->text()).size();
    if (quantidadeDigitosTelefone < 10 || quantidadeDigitosTelefone > 11) {
        QMessageBox::warning(this, "Telefone inválido", "Informe um telefone com DDD e 10 ou 11 dígitos.");
        return;
    }

    if (ui->telefoneLineEdit->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this, "Dados incompletos", "Por favor, informe o telefone do hóspede.");
        return;
    }

    if (ui->possuiVeiculoCheckBox->isChecked() && ui->placaLineEdit->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this, "Dados incompletos", "Por favor, informe a placa do veículo.");
        return;
    }

    if (ui->possuiVeiculoCheckBox->isChecked()) {
        const QString placa = ui->placaLineEdit->text().trimmed().toUpper();
        static const QRegularExpression formatoPlaca("^[A-Z]{3}-?[0-9][A-Z0-9][0-9]{2}$");
        if (!formatoPlaca.match(placa).hasMatch()) {
            QMessageBox::warning(this, "Placa inválida", "Informe uma placa válida (padrão antigo ou Mercosul).");
            return;
        }
        ui->placaLineEdit->setText(placa);
    }

    accept();
}

QString JanelaCadastro::getNomeCompleto() const
{
    return ui->nomeCompletoLineEdit->text().trimmed();
}

QString JanelaCadastro::getCpf() const
{
    return ui->cpfLineEdit->text().trimmed();
}

QString JanelaCadastro::getTelefone() const
{
    return ui->telefoneLineEdit->text().trimmed();
}

bool JanelaCadastro::getPossuiVeiculo() const
{
    return ui->possuiVeiculoCheckBox->isChecked();
}

QString JanelaCadastro::getPlacaVeiculo() const
{
    return ui->placaLineEdit->text().trimmed();
}
