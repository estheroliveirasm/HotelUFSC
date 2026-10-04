/********************************************************************************
** Form generated from reading UI file 'janelareservas.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELARESERVAS_H
#define UI_JANELARESERVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JanelaReservas
{
public:
    QVBoxLayout *reservasRootLayout;
    QFrame *reservasBannerFrame;
    QVBoxLayout *reservasBannerLayout;
    QLabel *reservasTituloLabel;
    QVBoxLayout *reservasConteudoLayout;
    QTableWidget *reservasTableWidget;
    QHBoxLayout *reservasBotoesLayout;
    QPushButton *fazerCheckOutButton;
    QPushButton *verDetalhesButton;
    QSpacerItem *reservasBotoesSpacer;
    QPushButton *fecharButton;

    void setupUi(QDialog *JanelaReservas)
    {
        if (JanelaReservas->objectName().isEmpty())
            JanelaReservas->setObjectName("JanelaReservas");
        JanelaReservas->resize(950, 500);
        reservasRootLayout = new QVBoxLayout(JanelaReservas);
        reservasRootLayout->setSpacing(0);
        reservasRootLayout->setObjectName("reservasRootLayout");
        reservasRootLayout->setContentsMargins(0, 0, 0, 0);
        reservasBannerFrame = new QFrame(JanelaReservas);
        reservasBannerFrame->setObjectName("reservasBannerFrame");
        reservasBannerFrame->setMinimumSize(QSize(0, 64));
        reservasBannerLayout = new QVBoxLayout(reservasBannerFrame);
        reservasBannerLayout->setObjectName("reservasBannerLayout");
        reservasTituloLabel = new QLabel(reservasBannerFrame);
        reservasTituloLabel->setObjectName("reservasTituloLabel");
        reservasTituloLabel->setAlignment(Qt::AlignCenter);

        reservasBannerLayout->addWidget(reservasTituloLabel);


        reservasRootLayout->addWidget(reservasBannerFrame);

        reservasConteudoLayout = new QVBoxLayout();
        reservasConteudoLayout->setSpacing(12);
        reservasConteudoLayout->setObjectName("reservasConteudoLayout");
        reservasConteudoLayout->setContentsMargins(20, 18, 20, 18);
        reservasTableWidget = new QTableWidget(JanelaReservas);
        reservasTableWidget->setObjectName("reservasTableWidget");

        reservasConteudoLayout->addWidget(reservasTableWidget);

        reservasBotoesLayout = new QHBoxLayout();
        reservasBotoesLayout->setObjectName("reservasBotoesLayout");
        fazerCheckOutButton = new QPushButton(JanelaReservas);
        fazerCheckOutButton->setObjectName("fazerCheckOutButton");

        reservasBotoesLayout->addWidget(fazerCheckOutButton);

        verDetalhesButton = new QPushButton(JanelaReservas);
        verDetalhesButton->setObjectName("verDetalhesButton");

        reservasBotoesLayout->addWidget(verDetalhesButton);

        reservasBotoesSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        reservasBotoesLayout->addItem(reservasBotoesSpacer);

        fecharButton = new QPushButton(JanelaReservas);
        fecharButton->setObjectName("fecharButton");

        reservasBotoesLayout->addWidget(fecharButton);


        reservasConteudoLayout->addLayout(reservasBotoesLayout);


        reservasRootLayout->addLayout(reservasConteudoLayout);


        retranslateUi(JanelaReservas);

        QMetaObject::connectSlotsByName(JanelaReservas);
    } // setupUi

    void retranslateUi(QDialog *JanelaReservas)
    {
        JanelaReservas->setWindowTitle(QCoreApplication::translate("JanelaReservas", "Reservas Ativas - HotelUFSC", nullptr));
        reservasTituloLabel->setText(QCoreApplication::translate("JanelaReservas", "Reservas Ativas", nullptr));
        fazerCheckOutButton->setText(QCoreApplication::translate("JanelaReservas", "Fazer Check-out", nullptr));
        verDetalhesButton->setText(QCoreApplication::translate("JanelaReservas", "Ver Detalhes", nullptr));
        fecharButton->setText(QCoreApplication::translate("JanelaReservas", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaReservas: public Ui_JanelaReservas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELARESERVAS_H
