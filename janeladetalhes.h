#ifndef JANELADETALHES_H
#define JANELADETALHES_H

#include <QDialog>
#include "hospede.h"

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaDetalhes; }
QT_END_NAMESPACE

class JanelaDetalhes : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaDetalhes(QWidget *parent = nullptr);
    ~JanelaDetalhes();

    void exibirDados(const Hospede &hospede);

private:
    Ui::JanelaDetalhes *ui;
};

#endif
