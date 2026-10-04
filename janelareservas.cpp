#include "janelareservas.h"
#include "ui_janelareservas.h"
#include "janelaprincipal.h"
#include "janeladetalhes.h"

#include <QTableWidgetItem>
#include <QHeaderView>
#include <QMessageBox>
#include <QStringList>

JanelaReservas::JanelaReservas(JanelaPrincipal *painelPrincipal, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::JanelaReservas)
    , painelPrincipal(painelPrincipal)
{
    ui->setupUi(this);

    QStringList cabecalhos = {"Hóspede", "CPF", "Telefone", "Quarto",
                              "Categoria", "Extras", "Veículo", "Valor Total"};
    ui->reservasTableWidget->setColumnCount(cabecalhos.size());
    ui->reservasTableWidget->setHorizontalHeaderLabels(cabecalhos);
    ui->reservasTableWidget->horizontalHeader()->setStretchLastSection(true);

    ui->reservasTableWidget->setColumnWidth(0, 140);
    ui->reservasTableWidget->setColumnWidth(1, 110);
    ui->reservasTableWidget->setColumnWidth(2, 130);
    ui->reservasTableWidget->setColumnWidth(3, 70);
    ui->reservasTableWidget->setColumnWidth(4, 160);
    ui->reservasTableWidget->setColumnWidth(5, 260);
    ui->reservasTableWidget->setColumnWidth(6, 100);

    ui->reservasTableWidget->verticalHeader()->setVisible(false);
    ui->reservasTableWidget->verticalHeader()->setDefaultSectionSize(32);
    ui->reservasTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->reservasTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->reservasTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->reservasTableWidget->setAlternatingRowColors(true);

    connect(ui->fazerCheckOutButton, &QPushButton::clicked,
            this, &JanelaReservas::onFazerCheckOutClicked);
    connect(ui->verDetalhesButton, &QPushButton::clicked,
            this, &JanelaReservas::onVerDetalhesClicked);
    connect(ui->fecharButton, &QPushButton::clicked,
            this, &JanelaReservas::accept);

    atualizarTabela();
}

JanelaReservas::~JanelaReservas()
{
    delete ui;
}

void JanelaReservas::atualizarTabela()
{
    listaHospedes = painelPrincipal->getHospedesAtivos();

    ui->reservasTableWidget->setRowCount(0);

    for (int i = 0; i < listaHospedes.size(); i++)
    {
        const Hospede &hospede = listaHospedes.at(i);

        QString textoVeiculo = hospede.getPossuiVeiculo() ? hospede.getPlacaVeiculo() : "Não possui";

        int linha = ui->reservasTableWidget->rowCount();
        ui->reservasTableWidget->insertRow(linha);

        ui->reservasTableWidget->setItem(linha, 0, new QTableWidgetItem(hospede.getNomeCompleto()));
        ui->reservasTableWidget->setItem(linha, 1, new QTableWidgetItem(hospede.getCpf()));
        ui->reservasTableWidget->setItem(linha, 2, new QTableWidgetItem(hospede.getTelefone()));
        ui->reservasTableWidget->setItem(linha, 3, new QTableWidgetItem(QString::number(hospede.getNumeroQuarto())));
        ui->reservasTableWidget->setItem(linha, 4, new QTableWidgetItem(hospede.getCategoriaQuarto()));
        ui->reservasTableWidget->setItem(linha, 5, new QTableWidgetItem(hospede.descricaoExtras()));
        ui->reservasTableWidget->setItem(linha, 6, new QTableWidgetItem(textoVeiculo));
        ui->reservasTableWidget->setItem(linha, 7, new QTableWidgetItem(Hospede::formatarMoeda(hospede.getPrecoTotal())));
    }
}

void JanelaReservas::onFazerCheckOutClicked()
{
    int linhaSelecionada = ui->reservasTableWidget->currentRow();

    if (linhaSelecionada < 0)
    {
        QMessageBox::information(this, "Nenhuma seleção",
                                  "Selecione um hóspede na tabela para realizar o check-out.");
        return;
    }

    const QString nome = ui->reservasTableWidget->item(linhaSelecionada, 0)->text();
    const auto resposta = QMessageBox::question(
        this, "Confirmar check-out",
        QString("Deseja finalizar a hospedagem de %1?").arg(nome),
        QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
    if (resposta != QMessageBox::Yes)
        return;

    painelPrincipal->removerHospede(linhaSelecionada);

    atualizarTabela();
}

void JanelaReservas::onVerDetalhesClicked()
{
    int linhaSelecionada = ui->reservasTableWidget->currentRow();

    if (linhaSelecionada < 0 || linhaSelecionada >= listaHospedes.size())
    {
        QMessageBox::information(this, "Nenhuma seleção",
                                  "Selecione uma reserva na tabela para ver os detalhes.");
        return;
    }

    JanelaDetalhes janela(this);
    janela.exibirDados(listaHospedes.at(linhaSelecionada));
    janela.exec();
}
