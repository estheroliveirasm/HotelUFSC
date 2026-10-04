/********************************************************************************
** Form generated from reading UI file 'janeladetalhes.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELADETALHES_H
#define UI_JANELADETALHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JanelaDetalhes
{
public:
    QVBoxLayout *detalhesRootLayout;
    QFrame *detalhesBannerFrame;
    QVBoxLayout *detalhesBannerLayout;
    QLabel *detalhesTituloLabel;
    QVBoxLayout *detalhesConteudoLayout;
    QFrame *detalhesCardFrame;
    QFormLayout *detalhesFormLayout;
    QLabel *nomeRotuloLabel;
    QLabel *nomeValorLabel;
    QLabel *cpfRotuloLabel;
    QLabel *cpfValorLabel;
    QLabel *telefoneRotuloLabel;
    QLabel *telefoneValorLabel;
    QLabel *veiculoRotuloLabel;
    QLabel *veiculoValorLabel;
    QLabel *categoriaRotuloLabel;
    QLabel *categoriaValorLabel;
    QLabel *quartoRotuloLabel;
    QLabel *quartoValorLabel;
    QLabel *duracaoRotuloLabel;
    QLabel *duracaoValorLabel;
    QLabel *extrasRotuloLabel;
    QLabel *extrasValorLabel;
    QLabel *totalRotuloLabel;
    QLabel *totalValorLabel;
    QSpacerItem *detalhesSpacer;
    QPushButton *fecharButton;

    void setupUi(QDialog *JanelaDetalhes)
    {
        if (JanelaDetalhes->objectName().isEmpty())
            JanelaDetalhes->setObjectName("JanelaDetalhes");
        JanelaDetalhes->resize(420, 460);
        detalhesRootLayout = new QVBoxLayout(JanelaDetalhes);
        detalhesRootLayout->setSpacing(0);
        detalhesRootLayout->setObjectName("detalhesRootLayout");
        detalhesRootLayout->setContentsMargins(0, 0, 0, 0);
        detalhesBannerFrame = new QFrame(JanelaDetalhes);
        detalhesBannerFrame->setObjectName("detalhesBannerFrame");
        detalhesBannerFrame->setMinimumSize(QSize(0, 64));
        detalhesBannerLayout = new QVBoxLayout(detalhesBannerFrame);
        detalhesBannerLayout->setObjectName("detalhesBannerLayout");
        detalhesTituloLabel = new QLabel(detalhesBannerFrame);
        detalhesTituloLabel->setObjectName("detalhesTituloLabel");
        detalhesTituloLabel->setAlignment(Qt::AlignCenter);

        detalhesBannerLayout->addWidget(detalhesTituloLabel);


        detalhesRootLayout->addWidget(detalhesBannerFrame);

        detalhesConteudoLayout = new QVBoxLayout();
        detalhesConteudoLayout->setObjectName("detalhesConteudoLayout");
        detalhesConteudoLayout->setContentsMargins(26, 22, 26, 22);
        detalhesCardFrame = new QFrame(JanelaDetalhes);
        detalhesCardFrame->setObjectName("detalhesCardFrame");
        detalhesFormLayout = new QFormLayout(detalhesCardFrame);
        detalhesFormLayout->setObjectName("detalhesFormLayout");
        detalhesFormLayout->setVerticalSpacing(10);
        detalhesFormLayout->setContentsMargins(18, 16, 18, 16);
        nomeRotuloLabel = new QLabel(detalhesCardFrame);
        nomeRotuloLabel->setObjectName("nomeRotuloLabel");

        detalhesFormLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, nomeRotuloLabel);

        nomeValorLabel = new QLabel(detalhesCardFrame);
        nomeValorLabel->setObjectName("nomeValorLabel");
        nomeValorLabel->setWordWrap(true);

        detalhesFormLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, nomeValorLabel);

        cpfRotuloLabel = new QLabel(detalhesCardFrame);
        cpfRotuloLabel->setObjectName("cpfRotuloLabel");

        detalhesFormLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, cpfRotuloLabel);

        cpfValorLabel = new QLabel(detalhesCardFrame);
        cpfValorLabel->setObjectName("cpfValorLabel");

        detalhesFormLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, cpfValorLabel);

        telefoneRotuloLabel = new QLabel(detalhesCardFrame);
        telefoneRotuloLabel->setObjectName("telefoneRotuloLabel");

        detalhesFormLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, telefoneRotuloLabel);

        telefoneValorLabel = new QLabel(detalhesCardFrame);
        telefoneValorLabel->setObjectName("telefoneValorLabel");

        detalhesFormLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, telefoneValorLabel);

        veiculoRotuloLabel = new QLabel(detalhesCardFrame);
        veiculoRotuloLabel->setObjectName("veiculoRotuloLabel");

        detalhesFormLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, veiculoRotuloLabel);

        veiculoValorLabel = new QLabel(detalhesCardFrame);
        veiculoValorLabel->setObjectName("veiculoValorLabel");
        veiculoValorLabel->setWordWrap(true);

        detalhesFormLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, veiculoValorLabel);

        categoriaRotuloLabel = new QLabel(detalhesCardFrame);
        categoriaRotuloLabel->setObjectName("categoriaRotuloLabel");

        detalhesFormLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, categoriaRotuloLabel);

        categoriaValorLabel = new QLabel(detalhesCardFrame);
        categoriaValorLabel->setObjectName("categoriaValorLabel");

        detalhesFormLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, categoriaValorLabel);

        quartoRotuloLabel = new QLabel(detalhesCardFrame);
        quartoRotuloLabel->setObjectName("quartoRotuloLabel");

        detalhesFormLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, quartoRotuloLabel);

        quartoValorLabel = new QLabel(detalhesCardFrame);
        quartoValorLabel->setObjectName("quartoValorLabel");

        detalhesFormLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, quartoValorLabel);

        duracaoRotuloLabel = new QLabel(detalhesCardFrame);
        duracaoRotuloLabel->setObjectName("duracaoRotuloLabel");

        detalhesFormLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, duracaoRotuloLabel);

        duracaoValorLabel = new QLabel(detalhesCardFrame);
        duracaoValorLabel->setObjectName("duracaoValorLabel");

        detalhesFormLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, duracaoValorLabel);

        extrasRotuloLabel = new QLabel(detalhesCardFrame);
        extrasRotuloLabel->setObjectName("extrasRotuloLabel");

        detalhesFormLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, extrasRotuloLabel);

        extrasValorLabel = new QLabel(detalhesCardFrame);
        extrasValorLabel->setObjectName("extrasValorLabel");
        extrasValorLabel->setWordWrap(true);

        detalhesFormLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, extrasValorLabel);

        totalRotuloLabel = new QLabel(detalhesCardFrame);
        totalRotuloLabel->setObjectName("totalRotuloLabel");

        detalhesFormLayout->setWidget(8, QFormLayout::ItemRole::LabelRole, totalRotuloLabel);

        totalValorLabel = new QLabel(detalhesCardFrame);
        totalValorLabel->setObjectName("totalValorLabel");

        detalhesFormLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, totalValorLabel);


        detalhesConteudoLayout->addWidget(detalhesCardFrame);

        detalhesSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        detalhesConteudoLayout->addItem(detalhesSpacer);

        fecharButton = new QPushButton(JanelaDetalhes);
        fecharButton->setObjectName("fecharButton");

        detalhesConteudoLayout->addWidget(fecharButton);


        detalhesRootLayout->addLayout(detalhesConteudoLayout);


        retranslateUi(JanelaDetalhes);

        QMetaObject::connectSlotsByName(JanelaDetalhes);
    } // setupUi

    void retranslateUi(QDialog *JanelaDetalhes)
    {
        JanelaDetalhes->setWindowTitle(QCoreApplication::translate("JanelaDetalhes", "Detalhes da Reserva", nullptr));
        detalhesTituloLabel->setText(QCoreApplication::translate("JanelaDetalhes", "Detalhes da Reserva", nullptr));
        nomeRotuloLabel->setText(QCoreApplication::translate("JanelaDetalhes", "H\303\263spede:", nullptr));
        nomeValorLabel->setText(QCoreApplication::translate("JanelaDetalhes", "-", nullptr));
        cpfRotuloLabel->setText(QCoreApplication::translate("JanelaDetalhes", "CPF:", nullptr));
        cpfValorLabel->setText(QCoreApplication::translate("JanelaDetalhes", "-", nullptr));
        telefoneRotuloLabel->setText(QCoreApplication::translate("JanelaDetalhes", "Telefone:", nullptr));
        telefoneValorLabel->setText(QCoreApplication::translate("JanelaDetalhes", "-", nullptr));
        veiculoRotuloLabel->setText(QCoreApplication::translate("JanelaDetalhes", "Ve\303\255culo:", nullptr));
        veiculoValorLabel->setText(QCoreApplication::translate("JanelaDetalhes", "-", nullptr));
        categoriaRotuloLabel->setText(QCoreApplication::translate("JanelaDetalhes", "Categoria:", nullptr));
        categoriaValorLabel->setText(QCoreApplication::translate("JanelaDetalhes", "-", nullptr));
        quartoRotuloLabel->setText(QCoreApplication::translate("JanelaDetalhes", "N\303\272mero do quarto:", nullptr));
        quartoValorLabel->setText(QCoreApplication::translate("JanelaDetalhes", "-", nullptr));
        duracaoRotuloLabel->setText(QCoreApplication::translate("JanelaDetalhes", "Dura\303\247\303\243o da estadia:", nullptr));
        duracaoValorLabel->setText(QCoreApplication::translate("JanelaDetalhes", "-", nullptr));
        extrasRotuloLabel->setText(QCoreApplication::translate("JanelaDetalhes", "Servi\303\247os extras:", nullptr));
        extrasValorLabel->setText(QCoreApplication::translate("JanelaDetalhes", "-", nullptr));
        totalRotuloLabel->setText(QCoreApplication::translate("JanelaDetalhes", "Valor total:", nullptr));
        totalValorLabel->setText(QCoreApplication::translate("JanelaDetalhes", "-", nullptr));
        fecharButton->setText(QCoreApplication::translate("JanelaDetalhes", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaDetalhes: public Ui_JanelaDetalhes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELADETALHES_H
