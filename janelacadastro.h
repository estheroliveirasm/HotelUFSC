#ifndef JANELACADASTRO_H
#define JANELACADASTRO_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaCadastro; }
QT_END_NAMESPACE

class JanelaCadastro : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaCadastro(QWidget *parent = nullptr);
    ~JanelaCadastro();

    QString getNomeCompleto() const;
    QString getCpf() const;
    QString getTelefone() const;
    bool getPossuiVeiculo() const;
    QString getPlacaVeiculo() const;

private slots:
    void onPossuiVeiculoToggled(bool marcado);
    void onConfirmarClicked();

private:
    Ui::JanelaCadastro *ui;
};

#endif
