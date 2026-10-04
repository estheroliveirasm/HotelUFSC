#include "janelainicial.h"
#include "ui_janelainicial.h"
#include "janelaprincipal.h"

JanelaInicial::JanelaInicial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaInicial)
{
    ui->setupUi(this);

    connect(ui->entrarSistemaButton, &QPushButton::clicked,
            this, &JanelaInicial::onEntrarSistemaClicked);
}

JanelaInicial::~JanelaInicial()
{
    delete ui;
}

void JanelaInicial::onEntrarSistemaClicked()
{
    JanelaPrincipal *painel = new JanelaPrincipal();
    painel->setAttribute(Qt::WA_DeleteOnClose);

    painel->show();
    this->close();
}
