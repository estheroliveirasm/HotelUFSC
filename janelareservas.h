#ifndef JANELARESERVAS_H
#define JANELARESERVAS_H

#include <QDialog>
#include <QVector>
#include "hospede.h"

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaReservas; }
QT_END_NAMESPACE

class JanelaPrincipal;

class JanelaReservas : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaReservas(JanelaPrincipal *painelPrincipal, QWidget *parent = nullptr);
    ~JanelaReservas();

private slots:
    void onFazerCheckOutClicked();
    void onVerDetalhesClicked();

private:
    Ui::JanelaReservas *ui;
    JanelaPrincipal *painelPrincipal;
    QVector<Hospede> listaHospedes;

    void atualizarTabela();
};

#endif
