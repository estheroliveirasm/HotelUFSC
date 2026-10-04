#include "hospede.h"

const double Hospede::PRECO_MANOBRISTA = 30.00;
const double Hospede::PRECO_SPA = 50.00;
const double Hospede::PRECO_BUFFET = 45.00;
const double Hospede::PRECO_WIFI = 15.00;
const double Hospede::PRECO_LATE_CHECKOUT = 40.00;
const double Hospede::PRECO_ACADEMIA = 25.00;
const double Hospede::PRECO_SALA_REUNIAO = 70.00;
const double Hospede::PRECO_SALA_JOGOS = 20.00;
const double Hospede::PRECO_PISCINA = 35.00;
const double Hospede::PRECO_RECREACAO = 25.00;

Hospede::Hospede()
    : nomeCompleto(""), cpf(""), telefone(""),
      possuiVeiculo(false), placaVeiculo(""),
      categoriaQuarto("Standard Simples"), numeroQuarto(0), duracaoEstadia(1),
      manobrista(false), acessoSpa(false), buffetCompleto(false),
      wifiPremium(false), lateCheckout(false),
      academia(false), salaReuniao(false), salaJogos(false),
      piscina(false), recreacao(false),
      precoTotal(0.0)
{
}

QString Hospede::getNomeCompleto() const { return nomeCompleto; }
QString Hospede::getCpf() const { return cpf; }
QString Hospede::getTelefone() const { return telefone; }
bool Hospede::getPossuiVeiculo() const { return possuiVeiculo; }
QString Hospede::getPlacaVeiculo() const { return placaVeiculo; }
QString Hospede::getCategoriaQuarto() const { return categoriaQuarto; }
int Hospede::getNumeroQuarto() const { return numeroQuarto; }
int Hospede::getDuracaoEstadia() const { return duracaoEstadia; }
bool Hospede::getManobrista() const { return manobrista; }
bool Hospede::getAcessoSpa() const { return acessoSpa; }
bool Hospede::getBuffetCompleto() const { return buffetCompleto; }
bool Hospede::getWifiPremium() const { return wifiPremium; }
bool Hospede::getLateCheckout() const { return lateCheckout; }
bool Hospede::getAcademia() const { return academia; }
bool Hospede::getSalaReuniao() const { return salaReuniao; }
bool Hospede::getSalaJogos() const { return salaJogos; }
bool Hospede::getPiscina() const { return piscina; }
bool Hospede::getRecreacao() const { return recreacao; }
double Hospede::getPrecoTotal() const { return precoTotal; }

void Hospede::setNomeCompleto(const QString &valor) { nomeCompleto = valor; }
void Hospede::setCpf(const QString &valor) { cpf = valor; }
void Hospede::setTelefone(const QString &valor) { telefone = valor; }
void Hospede::setPossuiVeiculo(bool valor) { possuiVeiculo = valor; }
void Hospede::setPlacaVeiculo(const QString &valor) { placaVeiculo = valor; }
void Hospede::setCategoriaQuarto(const QString &valor) { categoriaQuarto = valor; }
void Hospede::setNumeroQuarto(int valor) { numeroQuarto = valor; }
void Hospede::setDuracaoEstadia(int valor) { duracaoEstadia = valor; }
void Hospede::setManobrista(bool valor) { manobrista = valor; }
void Hospede::setAcessoSpa(bool valor) { acessoSpa = valor; }
void Hospede::setBuffetCompleto(bool valor) { buffetCompleto = valor; }
void Hospede::setWifiPremium(bool valor) { wifiPremium = valor; }
void Hospede::setLateCheckout(bool valor) { lateCheckout = valor; }
void Hospede::setAcademia(bool valor) { academia = valor; }
void Hospede::setSalaReuniao(bool valor) { salaReuniao = valor; }
void Hospede::setSalaJogos(bool valor) { salaJogos = valor; }
void Hospede::setPiscina(bool valor) { piscina = valor; }
void Hospede::setRecreacao(bool valor) { recreacao = valor; }

double Hospede::calcularPrecoTotal()
{
    double custoQuarto = precoDiaria(categoriaQuarto) * duracaoEstadia;

    double custoExtras = 0.0;
    if (manobrista) custoExtras += PRECO_MANOBRISTA;
    if (acessoSpa) custoExtras += PRECO_SPA;
    if (buffetCompleto) custoExtras += PRECO_BUFFET;
    if (wifiPremium) custoExtras += PRECO_WIFI;
    if (lateCheckout) custoExtras += PRECO_LATE_CHECKOUT;
    if (academia) custoExtras += PRECO_ACADEMIA;
    if (salaReuniao) custoExtras += PRECO_SALA_REUNIAO;
    if (salaJogos) custoExtras += PRECO_SALA_JOGOS;
    if (piscina) custoExtras += PRECO_PISCINA;
    if (recreacao) custoExtras += PRECO_RECREACAO;

    precoTotal = custoQuarto + custoExtras;
    return precoTotal;
}

QString Hospede::descricaoExtras() const
{
    QStringList extras;

    if (manobrista) extras << "Manobrista";
    if (acessoSpa) extras << "Acesso ao Spa";
    if (buffetCompleto) extras << "Buffet Completo";
    if (wifiPremium) extras << "Wi-Fi Premium";
    if (lateCheckout) extras << "Late Check-out";
    if (academia) extras << "Academia";
    if (salaReuniao) extras << "Sala de Reunião";
    if (salaJogos) extras << "Sala de Jogos";
    if (piscina) extras << "Piscina";
    if (recreacao) extras << "Recreação";

    if (extras.isEmpty())
        return "Nenhum";

    return extras.join(", ");
}

QString Hospede::paraLinhaArquivo() const
{
    return QString("%1|%2|%3|%4|%5|%6|%7|%8|%9|%10|%11|%12|%13|%14|%15|%16|%17|%18|%19")
        .arg(nomeCompleto)
        .arg(cpf)
        .arg(telefone)
        .arg(possuiVeiculo ? 1 : 0)
        .arg(placaVeiculo)
        .arg(categoriaQuarto)
        .arg(numeroQuarto)
        .arg(duracaoEstadia)
        .arg(manobrista ? 1 : 0)
        .arg(acessoSpa ? 1 : 0)
        .arg(buffetCompleto ? 1 : 0)
        .arg(wifiPremium ? 1 : 0)
        .arg(lateCheckout ? 1 : 0)
        .arg(academia ? 1 : 0)
        .arg(salaReuniao ? 1 : 0)
        .arg(salaJogos ? 1 : 0)
        .arg(piscina ? 1 : 0)
        .arg(recreacao ? 1 : 0)
        .arg(precoTotal, 0, 'f', 2);
}

Hospede Hospede::deLinhaArquivo(const QString &linha)
{
    const QStringList campos = linha.split('|');

    Hospede hospede;
    if (campos.size() != 19)
        return hospede;

    bool quartoOk = false;
    bool duracaoOk = false;
    const int quarto = campos[6].toInt(&quartoOk);
    const int duracao = campos[7].toInt(&duracaoOk);
    if (campos[0].trimmed().isEmpty() || !listaCategorias().contains(campos[5])
        || !quartoOk || !quartosDaCategoria(campos[5]).contains(quarto)
        || !duracaoOk || duracao < 1 || duracao > 60)
        return hospede;

    for (int i = 3; i <= 17; ++i) {
        if (campos[i] != "0" && campos[i] != "1")
            return hospede;
    }

    hospede.setNomeCompleto(campos[0]);
    hospede.setCpf(campos[1]);
    hospede.setTelefone(campos[2]);
    hospede.setPossuiVeiculo(campos[3].toInt() == 1);
    hospede.setPlacaVeiculo(campos[4]);
    hospede.setCategoriaQuarto(campos[5]);
    hospede.setNumeroQuarto(quarto);
    hospede.setDuracaoEstadia(duracao);
    hospede.setManobrista(campos[8].toInt() == 1);
    hospede.setAcessoSpa(campos[9].toInt() == 1);
    hospede.setBuffetCompleto(campos[10].toInt() == 1);
    hospede.setWifiPremium(campos[11].toInt() == 1);
    hospede.setLateCheckout(campos[12].toInt() == 1);
    hospede.setAcademia(campos[13].toInt() == 1);
    hospede.setSalaReuniao(campos[14].toInt() == 1);
    hospede.setSalaJogos(campos[15].toInt() == 1);
    hospede.setPiscina(campos[16].toInt() == 1);
    hospede.setRecreacao(campos[17].toInt() == 1);
    hospede.calcularPrecoTotal();

    return hospede;
}

QStringList Hospede::listaCategorias()
{
    return QStringList()
        << "Standard Simples"
        << "Standard Casal"
        << "Standard Família"
        << "Standard Superior"
        << "Standard Deluxe"
        << "Executive Suite"
        << "Presidential Penthouse";
}

double Hospede::precoDiaria(const QString &categoria)
{
    if (categoria == "Standard Simples") return 150.00;
    if (categoria == "Standard Casal") return 180.00;
    if (categoria == "Standard Família") return 220.00;
    if (categoria == "Standard Superior") return 260.00;
    if (categoria == "Standard Deluxe") return 300.00;
    if (categoria == "Executive Suite") return 450.00;
    else return 900.00;
}

QVector<int> Hospede::quartosDaCategoria(const QString &categoria)
{
    int andar = 1;

    if (categoria == "Standard Simples") andar = 1;
    else if (categoria == "Standard Casal") andar = 2;
    else if (categoria == "Standard Família") andar = 3;
    else if (categoria == "Standard Superior") andar = 4;
    else if (categoria == "Standard Deluxe") andar = 5;
    else if (categoria == "Executive Suite") andar = 6;
    else if (categoria == "Presidential Penthouse") andar = 7;

    int quartoBase = andar * 100;

    QVector<int> quartos;
    for (int i = 0; i <= 10; i++)
    {
        quartos.append(quartoBase + i);
    }

    return quartos;
}

QString Hospede::formatarMoeda(double valor)
{
    QString texto = QString::number(valor, 'f', 2);
    texto.replace('.', ',');
    return "R$ " + texto;
}
