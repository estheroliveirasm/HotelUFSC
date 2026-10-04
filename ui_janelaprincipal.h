/********************************************************************************
** Form generated from reading UI file 'janelaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAPRINCIPAL_H
#define UI_JANELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaPrincipal
{
public:
    QWidget *centralwidget;
    QVBoxLayout *rootLayout;
    QFrame *dashboardHeaderFrame;
    QVBoxLayout *dashboardHeaderLayout;
    QLabel *dashboardTituloLabel;
    QGroupBox *hospedeAtualGroupBox;
    QHBoxLayout *hospedeAtualLayout;
    QLabel *indicadorStatusLabel;
    QLabel *hospedeAtualLabel;
    QSpacerItem *hospedeAtualSpacer;
    QPushButton *cadastrarHospedeButton;
    QHBoxLayout *topSectionLayout;
    QGroupBox *reservaGroupBox;
    QFormLayout *reservaFormLayout;
    QLabel *categoriaFieldLabel;
    QComboBox *categoriaQuartoComboBox;
    QLabel *quartoFieldLabel;
    QComboBox *numeroQuartoComboBox;
    QLabel *duracaoFieldLabel;
    QSpinBox *duracaoEstadiaSpinBox;
    QGroupBox *extrasGroupBox;
    QVBoxLayout *extrasOuterLayout;
    QGridLayout *extrasGridLayout;
    QCheckBox *manobristaCheckBox;
    QCheckBox *spaCheckBox;
    QCheckBox *buffetCheckBox;
    QCheckBox *wifiPremiumCheckBox;
    QCheckBox *lateCheckoutCheckBox;
    QCheckBox *academiaCheckBox;
    QCheckBox *salaReuniaoCheckBox;
    QCheckBox *salaJogosCheckBox;
    QCheckBox *piscinaCheckBox;
    QCheckBox *recreacaoCheckBox;
    QLabel *totalLabel;
    QHBoxLayout *actionButtonsLayout;
    QPushButton *fazerCheckInButton;
    QPushButton *verReservasButton;
    QSpacerItem *actionButtonsSpacer;
    QPushButton *sobreDesenvolvedorButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JanelaPrincipal)
    {
        if (JanelaPrincipal->objectName().isEmpty())
            JanelaPrincipal->setObjectName("JanelaPrincipal");
        JanelaPrincipal->resize(1000, 560);
        centralwidget = new QWidget(JanelaPrincipal);
        centralwidget->setObjectName("centralwidget");
        rootLayout = new QVBoxLayout(centralwidget);
        rootLayout->setSpacing(12);
        rootLayout->setObjectName("rootLayout");
        rootLayout->setContentsMargins(16, 16, 16, 16);
        dashboardHeaderFrame = new QFrame(centralwidget);
        dashboardHeaderFrame->setObjectName("dashboardHeaderFrame");
        dashboardHeaderLayout = new QVBoxLayout(dashboardHeaderFrame);
        dashboardHeaderLayout->setObjectName("dashboardHeaderLayout");
        dashboardTituloLabel = new QLabel(dashboardHeaderFrame);
        dashboardTituloLabel->setObjectName("dashboardTituloLabel");

        dashboardHeaderLayout->addWidget(dashboardTituloLabel);


        rootLayout->addWidget(dashboardHeaderFrame);

        hospedeAtualGroupBox = new QGroupBox(centralwidget);
        hospedeAtualGroupBox->setObjectName("hospedeAtualGroupBox");
        hospedeAtualLayout = new QHBoxLayout(hospedeAtualGroupBox);
        hospedeAtualLayout->setObjectName("hospedeAtualLayout");
        indicadorStatusLabel = new QLabel(hospedeAtualGroupBox);
        indicadorStatusLabel->setObjectName("indicadorStatusLabel");
        indicadorStatusLabel->setMinimumSize(QSize(14, 14));
        indicadorStatusLabel->setMaximumSize(QSize(14, 14));

        hospedeAtualLayout->addWidget(indicadorStatusLabel);

        hospedeAtualLabel = new QLabel(hospedeAtualGroupBox);
        hospedeAtualLabel->setObjectName("hospedeAtualLabel");

        hospedeAtualLayout->addWidget(hospedeAtualLabel);

        hospedeAtualSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hospedeAtualLayout->addItem(hospedeAtualSpacer);

        cadastrarHospedeButton = new QPushButton(hospedeAtualGroupBox);
        cadastrarHospedeButton->setObjectName("cadastrarHospedeButton");

        hospedeAtualLayout->addWidget(cadastrarHospedeButton);


        rootLayout->addWidget(hospedeAtualGroupBox);

        topSectionLayout = new QHBoxLayout();
        topSectionLayout->setSpacing(16);
        topSectionLayout->setObjectName("topSectionLayout");
        reservaGroupBox = new QGroupBox(centralwidget);
        reservaGroupBox->setObjectName("reservaGroupBox");
        reservaFormLayout = new QFormLayout(reservaGroupBox);
        reservaFormLayout->setObjectName("reservaFormLayout");
        categoriaFieldLabel = new QLabel(reservaGroupBox);
        categoriaFieldLabel->setObjectName("categoriaFieldLabel");

        reservaFormLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, categoriaFieldLabel);

        categoriaQuartoComboBox = new QComboBox(reservaGroupBox);
        categoriaQuartoComboBox->setObjectName("categoriaQuartoComboBox");

        reservaFormLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, categoriaQuartoComboBox);

        quartoFieldLabel = new QLabel(reservaGroupBox);
        quartoFieldLabel->setObjectName("quartoFieldLabel");

        reservaFormLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, quartoFieldLabel);

        numeroQuartoComboBox = new QComboBox(reservaGroupBox);
        numeroQuartoComboBox->setObjectName("numeroQuartoComboBox");

        reservaFormLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, numeroQuartoComboBox);

        duracaoFieldLabel = new QLabel(reservaGroupBox);
        duracaoFieldLabel->setObjectName("duracaoFieldLabel");

        reservaFormLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, duracaoFieldLabel);

        duracaoEstadiaSpinBox = new QSpinBox(reservaGroupBox);
        duracaoEstadiaSpinBox->setObjectName("duracaoEstadiaSpinBox");

        reservaFormLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, duracaoEstadiaSpinBox);


        topSectionLayout->addWidget(reservaGroupBox);

        extrasGroupBox = new QGroupBox(centralwidget);
        extrasGroupBox->setObjectName("extrasGroupBox");
        extrasOuterLayout = new QVBoxLayout(extrasGroupBox);
        extrasOuterLayout->setObjectName("extrasOuterLayout");
        extrasGridLayout = new QGridLayout();
        extrasGridLayout->setObjectName("extrasGridLayout");
        manobristaCheckBox = new QCheckBox(extrasGroupBox);
        manobristaCheckBox->setObjectName("manobristaCheckBox");

        extrasGridLayout->addWidget(manobristaCheckBox, 0, 0, 1, 1);

        spaCheckBox = new QCheckBox(extrasGroupBox);
        spaCheckBox->setObjectName("spaCheckBox");

        extrasGridLayout->addWidget(spaCheckBox, 1, 0, 1, 1);

        buffetCheckBox = new QCheckBox(extrasGroupBox);
        buffetCheckBox->setObjectName("buffetCheckBox");

        extrasGridLayout->addWidget(buffetCheckBox, 2, 0, 1, 1);

        wifiPremiumCheckBox = new QCheckBox(extrasGroupBox);
        wifiPremiumCheckBox->setObjectName("wifiPremiumCheckBox");

        extrasGridLayout->addWidget(wifiPremiumCheckBox, 3, 0, 1, 1);

        lateCheckoutCheckBox = new QCheckBox(extrasGroupBox);
        lateCheckoutCheckBox->setObjectName("lateCheckoutCheckBox");

        extrasGridLayout->addWidget(lateCheckoutCheckBox, 4, 0, 1, 1);

        academiaCheckBox = new QCheckBox(extrasGroupBox);
        academiaCheckBox->setObjectName("academiaCheckBox");

        extrasGridLayout->addWidget(academiaCheckBox, 0, 1, 1, 1);

        salaReuniaoCheckBox = new QCheckBox(extrasGroupBox);
        salaReuniaoCheckBox->setObjectName("salaReuniaoCheckBox");

        extrasGridLayout->addWidget(salaReuniaoCheckBox, 1, 1, 1, 1);

        salaJogosCheckBox = new QCheckBox(extrasGroupBox);
        salaJogosCheckBox->setObjectName("salaJogosCheckBox");

        extrasGridLayout->addWidget(salaJogosCheckBox, 2, 1, 1, 1);

        piscinaCheckBox = new QCheckBox(extrasGroupBox);
        piscinaCheckBox->setObjectName("piscinaCheckBox");

        extrasGridLayout->addWidget(piscinaCheckBox, 3, 1, 1, 1);

        recreacaoCheckBox = new QCheckBox(extrasGroupBox);
        recreacaoCheckBox->setObjectName("recreacaoCheckBox");

        extrasGridLayout->addWidget(recreacaoCheckBox, 4, 1, 1, 1);


        extrasOuterLayout->addLayout(extrasGridLayout);

        totalLabel = new QLabel(extrasGroupBox);
        totalLabel->setObjectName("totalLabel");

        extrasOuterLayout->addWidget(totalLabel);


        topSectionLayout->addWidget(extrasGroupBox);


        rootLayout->addLayout(topSectionLayout);

        actionButtonsLayout = new QHBoxLayout();
        actionButtonsLayout->setObjectName("actionButtonsLayout");
        fazerCheckInButton = new QPushButton(centralwidget);
        fazerCheckInButton->setObjectName("fazerCheckInButton");

        actionButtonsLayout->addWidget(fazerCheckInButton);

        verReservasButton = new QPushButton(centralwidget);
        verReservasButton->setObjectName("verReservasButton");

        actionButtonsLayout->addWidget(verReservasButton);

        actionButtonsSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        actionButtonsLayout->addItem(actionButtonsSpacer);

        sobreDesenvolvedorButton = new QPushButton(centralwidget);
        sobreDesenvolvedorButton->setObjectName("sobreDesenvolvedorButton");

        actionButtonsLayout->addWidget(sobreDesenvolvedorButton);


        rootLayout->addLayout(actionButtonsLayout);

        JanelaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JanelaPrincipal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        JanelaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(JanelaPrincipal);
        statusbar->setObjectName("statusbar");
        JanelaPrincipal->setStatusBar(statusbar);

        retranslateUi(JanelaPrincipal);

        QMetaObject::connectSlotsByName(JanelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaPrincipal)
    {
        JanelaPrincipal->setWindowTitle(QCoreApplication::translate("JanelaPrincipal", "HotelUFSC - Painel de Controle", nullptr));
        dashboardTituloLabel->setText(QCoreApplication::translate("JanelaPrincipal", "HotelUFSC \342\200\224 Painel de Controle", nullptr));
        hospedeAtualGroupBox->setTitle(QCoreApplication::translate("JanelaPrincipal", "H\303\263spede Atual", nullptr));
        indicadorStatusLabel->setText(QString());
        hospedeAtualLabel->setText(QCoreApplication::translate("JanelaPrincipal", "Nenhum h\303\263spede cadastrado no momento.", nullptr));
        cadastrarHospedeButton->setText(QCoreApplication::translate("JanelaPrincipal", "Cadastrar H\303\263spede", nullptr));
        reservaGroupBox->setTitle(QCoreApplication::translate("JanelaPrincipal", "Dados da Reserva", nullptr));
        categoriaFieldLabel->setText(QCoreApplication::translate("JanelaPrincipal", "Categoria do quarto:", nullptr));
        quartoFieldLabel->setText(QCoreApplication::translate("JanelaPrincipal", "N\303\272mero do quarto:", nullptr));
        duracaoFieldLabel->setText(QCoreApplication::translate("JanelaPrincipal", "Dura\303\247\303\243o da estadia (di\303\241rias):", nullptr));
        extrasGroupBox->setTitle(QCoreApplication::translate("JanelaPrincipal", "Servi\303\247os Extras", nullptr));
        manobristaCheckBox->setText(QCoreApplication::translate("JanelaPrincipal", "Manobrista (R$ 30,00)", nullptr));
        spaCheckBox->setText(QCoreApplication::translate("JanelaPrincipal", "Acesso ao Spa (R$ 50,00)", nullptr));
        buffetCheckBox->setText(QCoreApplication::translate("JanelaPrincipal", "Buffet Completo (R$ 45,00)", nullptr));
        wifiPremiumCheckBox->setText(QCoreApplication::translate("JanelaPrincipal", "Wi-Fi Premium (R$ 15,00)", nullptr));
        lateCheckoutCheckBox->setText(QCoreApplication::translate("JanelaPrincipal", "Late Check-out (R$ 40,00)", nullptr));
        academiaCheckBox->setText(QCoreApplication::translate("JanelaPrincipal", "Academia (R$ 25,00)", nullptr));
        salaReuniaoCheckBox->setText(QCoreApplication::translate("JanelaPrincipal", "Sala de Reuni\303\243o (R$ 70,00)", nullptr));
        salaJogosCheckBox->setText(QCoreApplication::translate("JanelaPrincipal", "Sala de Jogos (R$ 20,00)", nullptr));
        piscinaCheckBox->setText(QCoreApplication::translate("JanelaPrincipal", "Piscina (R$ 35,00)", nullptr));
        recreacaoCheckBox->setText(QCoreApplication::translate("JanelaPrincipal", "Recrea\303\247\303\243o (R$ 25,00)", nullptr));
        totalLabel->setText(QCoreApplication::translate("JanelaPrincipal", "Valor Total: R$ 0,00", nullptr));
        fazerCheckInButton->setText(QCoreApplication::translate("JanelaPrincipal", "Fazer Check-in", nullptr));
        verReservasButton->setText(QCoreApplication::translate("JanelaPrincipal", "Ver Reservas Ativas", nullptr));
        sobreDesenvolvedorButton->setText(QCoreApplication::translate("JanelaPrincipal", "Sobre o Desenvolvedor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaPrincipal: public Ui_JanelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAPRINCIPAL_H
