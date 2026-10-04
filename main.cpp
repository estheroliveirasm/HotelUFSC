#include "janelainicial.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName("UFSC");
    QCoreApplication::setApplicationName("HotelUFSC");

    QFile arquivoEstilo(":/style.qss");
    if (arquivoEstilo.open(QFile::ReadOnly | QFile::Text))
    {
        a.setStyleSheet(arquivoEstilo.readAll());
        arquivoEstilo.close();
    }

    JanelaInicial janelaInicial;
    janelaInicial.show();

    return a.exec();
}
