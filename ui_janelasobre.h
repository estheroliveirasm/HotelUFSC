/********************************************************************************
** Form generated from reading UI file 'janelasobre.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELASOBRE_H
#define UI_JANELASOBRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JanelaSobre
{
public:
    QVBoxLayout *sobreRootLayout;
    QFrame *sobreBannerFrame;
    QVBoxLayout *sobreBannerLayout;
    QLabel *sobreTituloLabel;
    QVBoxLayout *sobreConteudoLayout;
    QHBoxLayout *fotoCentralizadaLayout;
    QSpacerItem *fotoEsquerdaSpacer;
    QLabel *fotoDesenvolvedorLabel;
    QSpacerItem *fotoDireitaSpacer;
    QSpacerItem *posFotoSpacer;
    QFrame *infoCardFrame;
    QVBoxLayout *infoCardLayout;
    QLabel *projetoLabel;
    QLabel *nomeDesenvolvedorLabel;
    QLabel *matriculaLabel;
    QLabel *cursoLabel;
    QSpacerItem *preFecharSpacer;
    QPushButton *fecharButton;

    void setupUi(QDialog *JanelaSobre)
    {
        if (JanelaSobre->objectName().isEmpty())
            JanelaSobre->setObjectName("JanelaSobre");
        JanelaSobre->resize(440, 560);
        sobreRootLayout = new QVBoxLayout(JanelaSobre);
        sobreRootLayout->setSpacing(0);
        sobreRootLayout->setObjectName("sobreRootLayout");
        sobreRootLayout->setContentsMargins(0, 0, 0, 0);
        sobreBannerFrame = new QFrame(JanelaSobre);
        sobreBannerFrame->setObjectName("sobreBannerFrame");
        sobreBannerFrame->setMinimumSize(QSize(0, 90));
        sobreBannerLayout = new QVBoxLayout(sobreBannerFrame);
        sobreBannerLayout->setObjectName("sobreBannerLayout");
        sobreTituloLabel = new QLabel(sobreBannerFrame);
        sobreTituloLabel->setObjectName("sobreTituloLabel");
        sobreTituloLabel->setAlignment(Qt::AlignCenter);

        sobreBannerLayout->addWidget(sobreTituloLabel);


        sobreRootLayout->addWidget(sobreBannerFrame);

        sobreConteudoLayout = new QVBoxLayout();
        sobreConteudoLayout->setSpacing(10);
        sobreConteudoLayout->setObjectName("sobreConteudoLayout");
        sobreConteudoLayout->setContentsMargins(32, 26, 32, 26);
        fotoCentralizadaLayout = new QHBoxLayout();
        fotoCentralizadaLayout->setObjectName("fotoCentralizadaLayout");
        fotoEsquerdaSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        fotoCentralizadaLayout->addItem(fotoEsquerdaSpacer);

        fotoDesenvolvedorLabel = new QLabel(JanelaSobre);
        fotoDesenvolvedorLabel->setObjectName("fotoDesenvolvedorLabel");
        fotoDesenvolvedorLabel->setMinimumSize(QSize(150, 150));
        fotoDesenvolvedorLabel->setMaximumSize(QSize(150, 150));
        fotoDesenvolvedorLabel->setAlignment(Qt::AlignCenter);

        fotoCentralizadaLayout->addWidget(fotoDesenvolvedorLabel);

        fotoDireitaSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        fotoCentralizadaLayout->addItem(fotoDireitaSpacer);


        sobreConteudoLayout->addLayout(fotoCentralizadaLayout);

        posFotoSpacer = new QSpacerItem(20, 14, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        sobreConteudoLayout->addItem(posFotoSpacer);

        infoCardFrame = new QFrame(JanelaSobre);
        infoCardFrame->setObjectName("infoCardFrame");
        infoCardLayout = new QVBoxLayout(infoCardFrame);
        infoCardLayout->setSpacing(10);
        infoCardLayout->setObjectName("infoCardLayout");
        infoCardLayout->setContentsMargins(20, 18, 20, 18);
        projetoLabel = new QLabel(infoCardFrame);
        projetoLabel->setObjectName("projetoLabel");
        projetoLabel->setWordWrap(true);

        infoCardLayout->addWidget(projetoLabel);

        nomeDesenvolvedorLabel = new QLabel(infoCardFrame);
        nomeDesenvolvedorLabel->setObjectName("nomeDesenvolvedorLabel");
        nomeDesenvolvedorLabel->setWordWrap(true);

        infoCardLayout->addWidget(nomeDesenvolvedorLabel);

        matriculaLabel = new QLabel(infoCardFrame);
        matriculaLabel->setObjectName("matriculaLabel");

        infoCardLayout->addWidget(matriculaLabel);

        cursoLabel = new QLabel(infoCardFrame);
        cursoLabel->setObjectName("cursoLabel");

        infoCardLayout->addWidget(cursoLabel);


        sobreConteudoLayout->addWidget(infoCardFrame);

        preFecharSpacer = new QSpacerItem(20, 14, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        sobreConteudoLayout->addItem(preFecharSpacer);

        fecharButton = new QPushButton(JanelaSobre);
        fecharButton->setObjectName("fecharButton");

        sobreConteudoLayout->addWidget(fecharButton);


        sobreRootLayout->addLayout(sobreConteudoLayout);


        retranslateUi(JanelaSobre);
        QObject::connect(fecharButton, &QPushButton::clicked, JanelaSobre, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(JanelaSobre);
    } // setupUi

    void retranslateUi(QDialog *JanelaSobre)
    {
        JanelaSobre->setWindowTitle(QCoreApplication::translate("JanelaSobre", "Sobre o Desenvolvedor", nullptr));
        sobreTituloLabel->setText(QCoreApplication::translate("JanelaSobre", "Sobre o Desenvolvedor", nullptr));
        fotoDesenvolvedorLabel->setText(QCoreApplication::translate("JanelaSobre", "FOTO", nullptr));
        projetoLabel->setText(QCoreApplication::translate("JanelaSobre", "Projeto: Trabalho Final T2 - Gerenciador de Rede Hoteleira", nullptr));
        nomeDesenvolvedorLabel->setText(QCoreApplication::translate("JanelaSobre", "Nome do Desenvolvedor: [Insira Seu Nome Aqui]", nullptr));
        matriculaLabel->setText(QCoreApplication::translate("JanelaSobre", "Matr\303\255cula: [Insira Sua Matr\303\255cula Aqui]", nullptr));
        cursoLabel->setText(QCoreApplication::translate("JanelaSobre", "Curso: Engenharia da Computa\303\247\303\243o / LP2", nullptr));
        fecharButton->setText(QCoreApplication::translate("JanelaSobre", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaSobre: public Ui_JanelaSobre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELASOBRE_H
