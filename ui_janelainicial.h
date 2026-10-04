/********************************************************************************
** Form generated from reading UI file 'janelainicial.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAINICIAL_H
#define UI_JANELAINICIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaInicial
{
public:
    QWidget *centralwidget;
    QVBoxLayout *outerLayout;
    QSpacerItem *topoSpacer;
    QHBoxLayout *cartaoCentralizadoLayout;
    QSpacerItem *cartaoEsquerdaSpacer;
    QFrame *cartaoBemVindoFrame;
    QVBoxLayout *cartaoLayout;
    QHBoxLayout *monogramaCentralizadoLayout;
    QSpacerItem *monogramaEsquerdaSpacer;
    QLabel *monogramaLabel;
    QSpacerItem *monogramaDireitaSpacer;
    QSpacerItem *posMonogramaSpacer;
    QLabel *hotelNomeLabel;
    QHBoxLayout *divisoriaCentralizadaLayout;
    QSpacerItem *divisoriaEsquerdaSpacer;
    QFrame *linhaDivisoriaFrame;
    QSpacerItem *divisoriaDireitaSpacer;
    QLabel *hotelSloganLabel;
    QSpacerItem *cartaoMeioSpacer;
    QPushButton *entrarSistemaButton;
    QSpacerItem *cartaoDireitaSpacer;
    QSpacerItem *baseSpacer;

    void setupUi(QMainWindow *JanelaInicial)
    {
        if (JanelaInicial->objectName().isEmpty())
            JanelaInicial->setObjectName("JanelaInicial");
        JanelaInicial->resize(640, 460);
        centralwidget = new QWidget(JanelaInicial);
        centralwidget->setObjectName("centralwidget");
        outerLayout = new QVBoxLayout(centralwidget);
        outerLayout->setSpacing(0);
        outerLayout->setObjectName("outerLayout");
        outerLayout->setContentsMargins(0, 0, 0, 0);
        topoSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        outerLayout->addItem(topoSpacer);

        cartaoCentralizadoLayout = new QHBoxLayout();
        cartaoCentralizadoLayout->setObjectName("cartaoCentralizadoLayout");
        cartaoEsquerdaSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        cartaoCentralizadoLayout->addItem(cartaoEsquerdaSpacer);

        cartaoBemVindoFrame = new QFrame(centralwidget);
        cartaoBemVindoFrame->setObjectName("cartaoBemVindoFrame");
        cartaoBemVindoFrame->setMinimumSize(QSize(380, 0));
        cartaoBemVindoFrame->setMaximumSize(QSize(380, 16777215));
        cartaoLayout = new QVBoxLayout(cartaoBemVindoFrame);
        cartaoLayout->setSpacing(10);
        cartaoLayout->setObjectName("cartaoLayout");
        cartaoLayout->setContentsMargins(36, 40, 36, 40);
        monogramaCentralizadoLayout = new QHBoxLayout();
        monogramaCentralizadoLayout->setObjectName("monogramaCentralizadoLayout");
        monogramaEsquerdaSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        monogramaCentralizadoLayout->addItem(monogramaEsquerdaSpacer);

        monogramaLabel = new QLabel(cartaoBemVindoFrame);
        monogramaLabel->setObjectName("monogramaLabel");
        monogramaLabel->setMinimumSize(QSize(64, 64));
        monogramaLabel->setMaximumSize(QSize(64, 64));
        monogramaLabel->setAlignment(Qt::AlignCenter);

        monogramaCentralizadoLayout->addWidget(monogramaLabel);

        monogramaDireitaSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        monogramaCentralizadoLayout->addItem(monogramaDireitaSpacer);


        cartaoLayout->addLayout(monogramaCentralizadoLayout);

        posMonogramaSpacer = new QSpacerItem(20, 8, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        cartaoLayout->addItem(posMonogramaSpacer);

        hotelNomeLabel = new QLabel(cartaoBemVindoFrame);
        hotelNomeLabel->setObjectName("hotelNomeLabel");
        hotelNomeLabel->setAlignment(Qt::AlignCenter);

        cartaoLayout->addWidget(hotelNomeLabel);

        divisoriaCentralizadaLayout = new QHBoxLayout();
        divisoriaCentralizadaLayout->setObjectName("divisoriaCentralizadaLayout");
        divisoriaEsquerdaSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        divisoriaCentralizadaLayout->addItem(divisoriaEsquerdaSpacer);

        linhaDivisoriaFrame = new QFrame(cartaoBemVindoFrame);
        linhaDivisoriaFrame->setObjectName("linhaDivisoriaFrame");
        linhaDivisoriaFrame->setMinimumSize(QSize(50, 3));
        linhaDivisoriaFrame->setMaximumSize(QSize(50, 3));

        divisoriaCentralizadaLayout->addWidget(linhaDivisoriaFrame);

        divisoriaDireitaSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        divisoriaCentralizadaLayout->addItem(divisoriaDireitaSpacer);


        cartaoLayout->addLayout(divisoriaCentralizadaLayout);

        hotelSloganLabel = new QLabel(cartaoBemVindoFrame);
        hotelSloganLabel->setObjectName("hotelSloganLabel");
        hotelSloganLabel->setAlignment(Qt::AlignCenter);

        cartaoLayout->addWidget(hotelSloganLabel);

        cartaoMeioSpacer = new QSpacerItem(20, 28, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        cartaoLayout->addItem(cartaoMeioSpacer);

        entrarSistemaButton = new QPushButton(cartaoBemVindoFrame);
        entrarSistemaButton->setObjectName("entrarSistemaButton");
        entrarSistemaButton->setMinimumSize(QSize(0, 46));

        cartaoLayout->addWidget(entrarSistemaButton);


        cartaoCentralizadoLayout->addWidget(cartaoBemVindoFrame);

        cartaoDireitaSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        cartaoCentralizadoLayout->addItem(cartaoDireitaSpacer);


        outerLayout->addLayout(cartaoCentralizadoLayout);

        baseSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        outerLayout->addItem(baseSpacer);

        JanelaInicial->setCentralWidget(centralwidget);

        retranslateUi(JanelaInicial);

        QMetaObject::connectSlotsByName(JanelaInicial);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaInicial)
    {
        JanelaInicial->setWindowTitle(QCoreApplication::translate("JanelaInicial", "HotelUFSC - Bem-vindo", nullptr));
        monogramaLabel->setText(QCoreApplication::translate("JanelaInicial", "H", nullptr));
        hotelNomeLabel->setText(QCoreApplication::translate("JanelaInicial", "HotelUFSC", nullptr));
        hotelSloganLabel->setText(QCoreApplication::translate("JanelaInicial", "Sistema de Gest\303\243o Hoteleira", nullptr));
        entrarSistemaButton->setText(QCoreApplication::translate("JanelaInicial", "Entrar no Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaInicial: public Ui_JanelaInicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAINICIAL_H
