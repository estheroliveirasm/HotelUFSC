#include "janelasobre.h"
#include "ui_janelasobre.h"

#include <QPixmap>

JanelaSobre::JanelaSobre(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::JanelaSobre)
{
    ui->setupUi(this);

    ui->projetoLabel->setText("Projeto: Trabalho Final T2 - Gerenciador de Rede Hoteleira");
    ui->nomeDesenvolvedorLabel->setText("Nome da Desenvolvedora: Esther de Oliveira");
    ui->matriculaLabel->setText("Matrícula: 25205467");
    ui->cursoLabel->setText("Curso: Engenharia da Computação / LP2");

    QPixmap foto(":/images/Me.jpg");

    if (!foto.isNull())
    {
        QPixmap fotoQuadrada = foto.scaled(
            ui->fotoDesenvolvedorLabel->size(),
            Qt::KeepAspectRatioByExpanding,
            Qt::SmoothTransformation);

        ui->fotoDesenvolvedorLabel->setPixmap(fotoQuadrada);
        ui->fotoDesenvolvedorLabel->setScaledContents(true);
    }
}

JanelaSobre::~JanelaSobre()
{
    delete ui;
}
