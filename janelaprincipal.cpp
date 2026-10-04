#include "janelaprincipal.h"
#include "ui_janelaprincipal.h"
#include "janelacadastro.h"
#include "janelareservas.h"
#include "janelasobre.h"

#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDir>
#include <QStandardPaths>
#include <QRegularExpression>

static QString somenteDigitos(const QString &texto)
{
    QString resultado = texto;
    resultado.remove(QRegularExpression("\\D"));
    return resultado;
}

JanelaPrincipal::JanelaPrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaPrincipal)
    , possuiVeiculoCadastradoAtual(false)
{
    ui->setupUi(this);

    const QString pastaDados = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir().mkpath(pastaDados);
    caminhoArquivoDados = pastaDados + "/hospedes.txt";
    if (!QFile::exists(caminhoArquivoDados) && QFile::exists("hospedes.txt"))
        QFile::copy("hospedes.txt", caminhoArquivoDados);

    ui->categoriaQuartoComboBox->addItems(Hospede::listaCategorias());

    ui->duracaoEstadiaSpinBox->setMinimum(1);
    ui->duracaoEstadiaSpinBox->setMaximum(60);
    ui->duracaoEstadiaSpinBox->setValue(1);

    connect(ui->categoriaQuartoComboBox, &QComboBox::currentTextChanged,
            this, &JanelaPrincipal::onCategoriaAlterada);

    connect(ui->duracaoEstadiaSpinBox, &QSpinBox::valueChanged,
            this, &JanelaPrincipal::atualizarValorTotal);

    connect(ui->manobristaCheckBox, &QCheckBox::toggled,
            this, &JanelaPrincipal::atualizarValorTotal);
    connect(ui->spaCheckBox, &QCheckBox::toggled,
            this, &JanelaPrincipal::atualizarValorTotal);
    connect(ui->buffetCheckBox, &QCheckBox::toggled,
            this, &JanelaPrincipal::atualizarValorTotal);
    connect(ui->wifiPremiumCheckBox, &QCheckBox::toggled,
            this, &JanelaPrincipal::atualizarValorTotal);
    connect(ui->lateCheckoutCheckBox, &QCheckBox::toggled,
            this, &JanelaPrincipal::atualizarValorTotal);
    connect(ui->academiaCheckBox, &QCheckBox::toggled,
            this, &JanelaPrincipal::atualizarValorTotal);
    connect(ui->salaReuniaoCheckBox, &QCheckBox::toggled,
            this, &JanelaPrincipal::atualizarValorTotal);
    connect(ui->salaJogosCheckBox, &QCheckBox::toggled,
            this, &JanelaPrincipal::atualizarValorTotal);
    connect(ui->piscinaCheckBox, &QCheckBox::toggled,
            this, &JanelaPrincipal::atualizarValorTotal);
    connect(ui->recreacaoCheckBox, &QCheckBox::toggled,
            this, &JanelaPrincipal::atualizarValorTotal);

    connect(ui->cadastrarHospedeButton, &QPushButton::clicked,
            this, &JanelaPrincipal::onCadastrarHospedeClicked);
    connect(ui->fazerCheckInButton, &QPushButton::clicked,
            this, &JanelaPrincipal::onFazerCheckInClicked);
    connect(ui->verReservasButton, &QPushButton::clicked,
            this, &JanelaPrincipal::onVerReservasClicked);
    connect(ui->sobreDesenvolvedorButton, &QPushButton::clicked,
            this, &JanelaPrincipal::onSobreDesenvolvedorClicked);

    carregarHospedesDoArquivo();

    onCategoriaAlterada();
}

JanelaPrincipal::~JanelaPrincipal()
{
    delete ui;
}

QVector<Hospede> JanelaPrincipal::getHospedesAtivos() const
{
    return hospedesAtivos;
}

void JanelaPrincipal::removerHospede(int indice)
{
    if (indice < 0 || indice >= hospedesAtivos.size())
        return;

    hospedesAtivos.remove(indice);
    salvarHospedesNoArquivo();
}

void JanelaPrincipal::onCategoriaAlterada()
{
    QString categoria = ui->categoriaQuartoComboBox->currentText();
    QVector<int> quartos = Hospede::quartosDaCategoria(categoria);

    ui->numeroQuartoComboBox->clear();

    for (int i = 0; i < quartos.size(); i++)
    {
        bool ocupado = false;
        for (const Hospede &hospede : hospedesAtivos) {
            if (hospede.getNumeroQuarto() == quartos[i]) {
                ocupado = true;
                break;
            }
        }
        if (!ocupado)
            ui->numeroQuartoComboBox->addItem(QString::number(quartos[i]));
    }

    ui->fazerCheckInButton->setEnabled(ui->numeroQuartoComboBox->count() > 0);
    if (ui->numeroQuartoComboBox->count() == 0)
        ui->numeroQuartoComboBox->addItem("Sem quartos disponíveis");

    atualizarValorTotal();
}

void JanelaPrincipal::atualizarValorTotal()
{
    Hospede hospedeTemporario;

    hospedeTemporario.setCategoriaQuarto(ui->categoriaQuartoComboBox->currentText());
    hospedeTemporario.setDuracaoEstadia(ui->duracaoEstadiaSpinBox->value());
    hospedeTemporario.setManobrista(ui->manobristaCheckBox->isChecked());
    hospedeTemporario.setAcessoSpa(ui->spaCheckBox->isChecked());
    hospedeTemporario.setBuffetCompleto(ui->buffetCheckBox->isChecked());
    hospedeTemporario.setWifiPremium(ui->wifiPremiumCheckBox->isChecked());
    hospedeTemporario.setLateCheckout(ui->lateCheckoutCheckBox->isChecked());
    hospedeTemporario.setAcademia(ui->academiaCheckBox->isChecked());
    hospedeTemporario.setSalaReuniao(ui->salaReuniaoCheckBox->isChecked());
    hospedeTemporario.setSalaJogos(ui->salaJogosCheckBox->isChecked());
    hospedeTemporario.setPiscina(ui->piscinaCheckBox->isChecked());
    hospedeTemporario.setRecreacao(ui->recreacaoCheckBox->isChecked());

    double total = hospedeTemporario.calcularPrecoTotal();

    ui->totalLabel->setText("Valor Total: " + Hospede::formatarMoeda(total));
}

void JanelaPrincipal::onCadastrarHospedeClicked()
{
    JanelaCadastro janela(this);

    if (janela.exec() == QDialog::Accepted)
    {
        nomeCadastradoAtual = janela.getNomeCompleto();
        cpfCadastradoAtual = janela.getCpf();
        telefoneCadastradoAtual = janela.getTelefone();
        possuiVeiculoCadastradoAtual = janela.getPossuiVeiculo();
        placaCadastradoAtual = janela.getPlacaVeiculo();

        QString resumo = "Hóspede pronto para o check-in: " + nomeCadastradoAtual +
                          " (CPF: " + cpfCadastradoAtual + ")";
        ui->hospedeAtualLabel->setText(resumo);

        ui->indicadorStatusLabel->setStyleSheet("background-color: #6FA83C; border-radius: 7px;");
    }
}

void JanelaPrincipal::onFazerCheckInClicked()
{
    if (nomeCadastradoAtual.isEmpty())
    {
        QMessageBox::warning(this, "Nenhum hóspede cadastrado",
                              "Cadastre um hóspede antes de realizar o check-in.");
        return;
    }

    for (const Hospede &existente : hospedesAtivos) {
        if (somenteDigitos(existente.getCpf()) == somenteDigitos(cpfCadastradoAtual)) {
            QMessageBox::warning(this, "CPF já cadastrado",
                                 "Este hóspede já possui uma reserva ativa.");
            return;
        }
    }

    int numeroQuarto = ui->numeroQuartoComboBox->currentText().toInt();

    Hospede novoHospede;
    novoHospede.setNomeCompleto(nomeCadastradoAtual);
    novoHospede.setCpf(cpfCadastradoAtual);
    novoHospede.setTelefone(telefoneCadastradoAtual);
    novoHospede.setPossuiVeiculo(possuiVeiculoCadastradoAtual);
    novoHospede.setPlacaVeiculo(placaCadastradoAtual);
    novoHospede.setCategoriaQuarto(ui->categoriaQuartoComboBox->currentText());
    novoHospede.setNumeroQuarto(numeroQuarto);
    novoHospede.setDuracaoEstadia(ui->duracaoEstadiaSpinBox->value());
    novoHospede.setManobrista(ui->manobristaCheckBox->isChecked());
    novoHospede.setAcessoSpa(ui->spaCheckBox->isChecked());
    novoHospede.setBuffetCompleto(ui->buffetCheckBox->isChecked());
    novoHospede.setWifiPremium(ui->wifiPremiumCheckBox->isChecked());
    novoHospede.setLateCheckout(ui->lateCheckoutCheckBox->isChecked());
    novoHospede.setAcademia(ui->academiaCheckBox->isChecked());
    novoHospede.setSalaReuniao(ui->salaReuniaoCheckBox->isChecked());
    novoHospede.setSalaJogos(ui->salaJogosCheckBox->isChecked());
    novoHospede.setPiscina(ui->piscinaCheckBox->isChecked());
    novoHospede.setRecreacao(ui->recreacaoCheckBox->isChecked());

    novoHospede.calcularPrecoTotal();

    hospedesAtivos.append(novoHospede);

    salvarHospedesNoArquivo();

    nomeCadastradoAtual.clear();
    cpfCadastradoAtual.clear();
    telefoneCadastradoAtual.clear();
    possuiVeiculoCadastradoAtual = false;
    placaCadastradoAtual.clear();
    ui->hospedeAtualLabel->setText("Nenhum hóspede cadastrado no momento.");

    ui->indicadorStatusLabel->setStyleSheet("background-color: #D9534F; border-radius: 7px;");

    ui->duracaoEstadiaSpinBox->setValue(1);
    ui->manobristaCheckBox->setChecked(false);
    ui->spaCheckBox->setChecked(false);
    ui->buffetCheckBox->setChecked(false);
    ui->wifiPremiumCheckBox->setChecked(false);
    ui->lateCheckoutCheckBox->setChecked(false);
    ui->academiaCheckBox->setChecked(false);
    ui->salaReuniaoCheckBox->setChecked(false);
    ui->salaJogosCheckBox->setChecked(false);
    ui->piscinaCheckBox->setChecked(false);
    ui->recreacaoCheckBox->setChecked(false);
}

void JanelaPrincipal::onVerReservasClicked()
{
    JanelaReservas janela(this, this);
    janela.exec();
    onCategoriaAlterada();
}

void JanelaPrincipal::onSobreDesenvolvedorClicked()
{
    JanelaSobre janela(this);
    janela.exec();
}

void JanelaPrincipal::carregarHospedesDoArquivo()
{
    QFile arquivo(caminhoArquivoDados);

    if (!arquivo.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream entrada(&arquivo);

    while (!entrada.atEnd())
    {
        QString linha = entrada.readLine();

        if (linha.trimmed().isEmpty())
            continue;

        Hospede hospede = Hospede::deLinhaArquivo(linha);
        if (!hospede.getNomeCompleto().isEmpty())
            hospedesAtivos.append(hospede);
    }

    arquivo.close();
}

void JanelaPrincipal::salvarHospedesNoArquivo()
{
    QFile arquivo(caminhoArquivoDados);

    if (!arquivo.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::critical(this, "Erro ao salvar",
                               "Não foi possível gravar os dados em hospedes.txt");
        return;
    }

    QTextStream saida(&arquivo);

    for (const Hospede &hospede : hospedesAtivos)
    {
        saida << hospede.paraLinhaArquivo() << "\n";
    }

    arquivo.close();
}
