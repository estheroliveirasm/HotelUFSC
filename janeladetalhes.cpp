#include "janeladetalhes.h"
#include "ui_janeladetalhes.h"

JanelaDetalhes::JanelaDetalhes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::JanelaDetalhes)
{
    ui->setupUi(this);

    connect(ui->fecharButton, &QPushButton::clicked, this, &JanelaDetalhes::accept);
}

JanelaDetalhes::~JanelaDetalhes()
{
    delete ui;
}

void JanelaDetalhes::exibirDados(const Hospede &hospede)
{
    ui->nomeValorLabel->setText(hospede.getNomeCompleto());
    ui->cpfValorLabel->setText(hospede.getCpf());
    ui->telefoneValorLabel->setText(hospede.getTelefone());

    if (hospede.getPossuiVeiculo())
        ui->veiculoValorLabel->setText("Sim — Placa: " + hospede.getPlacaVeiculo());
    else
        ui->veiculoValorLabel->setText("Não");

    ui->categoriaValorLabel->setText(hospede.getCategoriaQuarto());
    ui->quartoValorLabel->setText(QString::number(hospede.getNumeroQuarto()));
    ui->duracaoValorLabel->setText(QString("%1 diária(s)").arg(hospede.getDuracaoEstadia()));
    ui->extrasValorLabel->setText(hospede.descricaoExtras());
    ui->totalValorLabel->setText(Hospede::formatarMoeda(hospede.getPrecoTotal()));
}
