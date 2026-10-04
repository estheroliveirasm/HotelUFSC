#ifndef HOSPEDE_H
#define HOSPEDE_H

#include <QString>
#include <QStringList>
#include <QVector>

class Hospede
{
public:
    Hospede();

    QString getNomeCompleto() const;
    QString getCpf() const;
    QString getTelefone() const;
    bool getPossuiVeiculo() const;
    QString getPlacaVeiculo() const;
    QString getCategoriaQuarto() const;
    int getNumeroQuarto() const;
    int getDuracaoEstadia() const;
    bool getManobrista() const;
    bool getAcessoSpa() const;
    bool getBuffetCompleto() const;
    bool getWifiPremium() const;
    bool getLateCheckout() const;
    bool getAcademia() const;
    bool getSalaReuniao() const;
    bool getSalaJogos() const;
    bool getPiscina() const;
    bool getRecreacao() const;
    double getPrecoTotal() const;

    void setNomeCompleto(const QString &valor);
    void setCpf(const QString &valor);
    void setTelefone(const QString &valor);
    void setPossuiVeiculo(bool valor);
    void setPlacaVeiculo(const QString &valor);
    void setCategoriaQuarto(const QString &valor);
    void setNumeroQuarto(int valor);
    void setDuracaoEstadia(int valor);
    void setManobrista(bool valor);
    void setAcessoSpa(bool valor);
    void setBuffetCompleto(bool valor);
    void setWifiPremium(bool valor);
    void setLateCheckout(bool valor);
    void setAcademia(bool valor);
    void setSalaReuniao(bool valor);
    void setSalaJogos(bool valor);
    void setPiscina(bool valor);
    void setRecreacao(bool valor);

    double calcularPrecoTotal();
    QString descricaoExtras() const;

    QString paraLinhaArquivo() const;
    static Hospede deLinhaArquivo(const QString &linha);

    static QStringList listaCategorias();
    static double precoDiaria(const QString &categoria);
    static QVector<int> quartosDaCategoria(const QString &categoria);
    static QString formatarMoeda(double valor);

private:
    QString nomeCompleto;
    QString cpf;
    QString telefone;
    bool possuiVeiculo;
    QString placaVeiculo;

    QString categoriaQuarto;
    int numeroQuarto;
    int duracaoEstadia;

    bool manobrista;
    bool acessoSpa;
    bool buffetCompleto;
    bool wifiPremium;
    bool lateCheckout;
    bool academia;
    bool salaReuniao;
    bool salaJogos;
    bool piscina;
    bool recreacao;

    double precoTotal;

    static const double PRECO_MANOBRISTA;
    static const double PRECO_SPA;
    static const double PRECO_BUFFET;
    static const double PRECO_WIFI;
    static const double PRECO_LATE_CHECKOUT;
    static const double PRECO_ACADEMIA;
    static const double PRECO_SALA_REUNIAO;
    static const double PRECO_SALA_JOGOS;
    static const double PRECO_PISCINA;
    static const double PRECO_RECREACAO;
};

#endif
