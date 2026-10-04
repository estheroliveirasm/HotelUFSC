#ifndef JANELAPRINCIPAL_H
#define JANELAPRINCIPAL_H

#include <QMainWindow>
#include <QVector>
#include "hospede.h"

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaPrincipal; }
QT_END_NAMESPACE

class JanelaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit JanelaPrincipal(QWidget *parent = nullptr);
    ~JanelaPrincipal();

    QVector<Hospede> getHospedesAtivos() const;
    void removerHospede(int indice);

private slots:
    void onCadastrarHospedeClicked();
    void onCategoriaAlterada();
    void atualizarValorTotal();
    void onFazerCheckInClicked();
    void onVerReservasClicked();
    void onSobreDesenvolvedorClicked();

private:
    Ui::JanelaPrincipal *ui;

    QVector<Hospede> hospedesAtivos;

    QString nomeCadastradoAtual;
    QString cpfCadastradoAtual;
    QString telefoneCadastradoAtual;
    bool possuiVeiculoCadastradoAtual;
    QString placaCadastradoAtual;

    QString caminhoArquivoDados;

    void carregarHospedesDoArquivo();
    void salvarHospedesNoArquivo();
};

#endif
