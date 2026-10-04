/********************************************************************************
** Form generated from reading UI file 'janelacadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELACADASTRO_H
#define UI_JANELACADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JanelaCadastro
{
public:
    QVBoxLayout *cadastroRootLayout;
    QFrame *cadastroBannerFrame;
    QVBoxLayout *cadastroBannerLayout;
    QLabel *cadastroTituloLabel;
    QVBoxLayout *cadastroFormOuterLayout;
    QFormLayout *cadastroFormLayout;
    QLabel *nomeCompletoFieldLabel;
    QLineEdit *nomeCompletoLineEdit;
    QLabel *cpfFieldLabel;
    QLineEdit *cpfLineEdit;
    QLabel *telefoneFieldLabel;
    QLineEdit *telefoneLineEdit;
    QFrame *veiculoFrame;
    QVBoxLayout *veiculoLayout;
    QCheckBox *possuiVeiculoCheckBox;
    QFormLayout *placaFormLayout;
    QLabel *placaFieldLabel;
    QLineEdit *placaLineEdit;
    QSpacerItem *cadastroSpacer;
    QHBoxLayout *cadastroBotoesLayout;
    QPushButton *cancelarButton;
    QPushButton *confirmarButton;

    void setupUi(QDialog *JanelaCadastro)
    {
        if (JanelaCadastro->objectName().isEmpty())
            JanelaCadastro->setObjectName("JanelaCadastro");
        JanelaCadastro->resize(420, 430);
        cadastroRootLayout = new QVBoxLayout(JanelaCadastro);
        cadastroRootLayout->setSpacing(0);
        cadastroRootLayout->setObjectName("cadastroRootLayout");
        cadastroRootLayout->setContentsMargins(0, 0, 0, 0);
        cadastroBannerFrame = new QFrame(JanelaCadastro);
        cadastroBannerFrame->setObjectName("cadastroBannerFrame");
        cadastroBannerFrame->setMinimumSize(QSize(0, 64));
        cadastroBannerLayout = new QVBoxLayout(cadastroBannerFrame);
        cadastroBannerLayout->setObjectName("cadastroBannerLayout");
        cadastroTituloLabel = new QLabel(cadastroBannerFrame);
        cadastroTituloLabel->setObjectName("cadastroTituloLabel");
        cadastroTituloLabel->setAlignment(Qt::AlignCenter);

        cadastroBannerLayout->addWidget(cadastroTituloLabel);


        cadastroRootLayout->addWidget(cadastroBannerFrame);

        cadastroFormOuterLayout = new QVBoxLayout();
        cadastroFormOuterLayout->setSpacing(14);
        cadastroFormOuterLayout->setObjectName("cadastroFormOuterLayout");
        cadastroFormOuterLayout->setContentsMargins(26, 22, 26, 22);
        cadastroFormLayout = new QFormLayout();
        cadastroFormLayout->setObjectName("cadastroFormLayout");
        nomeCompletoFieldLabel = new QLabel(JanelaCadastro);
        nomeCompletoFieldLabel->setObjectName("nomeCompletoFieldLabel");

        cadastroFormLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, nomeCompletoFieldLabel);

        nomeCompletoLineEdit = new QLineEdit(JanelaCadastro);
        nomeCompletoLineEdit->setObjectName("nomeCompletoLineEdit");

        cadastroFormLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, nomeCompletoLineEdit);

        cpfFieldLabel = new QLabel(JanelaCadastro);
        cpfFieldLabel->setObjectName("cpfFieldLabel");

        cadastroFormLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, cpfFieldLabel);

        cpfLineEdit = new QLineEdit(JanelaCadastro);
        cpfLineEdit->setObjectName("cpfLineEdit");

        cadastroFormLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, cpfLineEdit);

        telefoneFieldLabel = new QLabel(JanelaCadastro);
        telefoneFieldLabel->setObjectName("telefoneFieldLabel");

        cadastroFormLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, telefoneFieldLabel);

        telefoneLineEdit = new QLineEdit(JanelaCadastro);
        telefoneLineEdit->setObjectName("telefoneLineEdit");

        cadastroFormLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, telefoneLineEdit);


        cadastroFormOuterLayout->addLayout(cadastroFormLayout);

        veiculoFrame = new QFrame(JanelaCadastro);
        veiculoFrame->setObjectName("veiculoFrame");
        veiculoLayout = new QVBoxLayout(veiculoFrame);
        veiculoLayout->setObjectName("veiculoLayout");
        possuiVeiculoCheckBox = new QCheckBox(veiculoFrame);
        possuiVeiculoCheckBox->setObjectName("possuiVeiculoCheckBox");

        veiculoLayout->addWidget(possuiVeiculoCheckBox);

        placaFormLayout = new QFormLayout();
        placaFormLayout->setObjectName("placaFormLayout");
        placaFieldLabel = new QLabel(veiculoFrame);
        placaFieldLabel->setObjectName("placaFieldLabel");

        placaFormLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, placaFieldLabel);

        placaLineEdit = new QLineEdit(veiculoFrame);
        placaLineEdit->setObjectName("placaLineEdit");

        placaFormLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, placaLineEdit);


        veiculoLayout->addLayout(placaFormLayout);


        cadastroFormOuterLayout->addWidget(veiculoFrame);

        cadastroSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        cadastroFormOuterLayout->addItem(cadastroSpacer);

        cadastroBotoesLayout = new QHBoxLayout();
        cadastroBotoesLayout->setObjectName("cadastroBotoesLayout");
        cancelarButton = new QPushButton(JanelaCadastro);
        cancelarButton->setObjectName("cancelarButton");

        cadastroBotoesLayout->addWidget(cancelarButton);

        confirmarButton = new QPushButton(JanelaCadastro);
        confirmarButton->setObjectName("confirmarButton");

        cadastroBotoesLayout->addWidget(confirmarButton);


        cadastroFormOuterLayout->addLayout(cadastroBotoesLayout);


        cadastroRootLayout->addLayout(cadastroFormOuterLayout);


        retranslateUi(JanelaCadastro);

        QMetaObject::connectSlotsByName(JanelaCadastro);
    } // setupUi

    void retranslateUi(QDialog *JanelaCadastro)
    {
        JanelaCadastro->setWindowTitle(QCoreApplication::translate("JanelaCadastro", "Cadastro de H\303\263spede", nullptr));
        cadastroTituloLabel->setText(QCoreApplication::translate("JanelaCadastro", "Cadastro de H\303\263spede", nullptr));
        nomeCompletoFieldLabel->setText(QCoreApplication::translate("JanelaCadastro", "Nome completo:", nullptr));
        nomeCompletoLineEdit->setPlaceholderText(QCoreApplication::translate("JanelaCadastro", "Digite o nome completo do h\303\263spede", nullptr));
        cpfFieldLabel->setText(QCoreApplication::translate("JanelaCadastro", "CPF:", nullptr));
        cpfLineEdit->setPlaceholderText(QCoreApplication::translate("JanelaCadastro", "000.000.000-00", nullptr));
        telefoneFieldLabel->setText(QCoreApplication::translate("JanelaCadastro", "Telefone:", nullptr));
        telefoneLineEdit->setPlaceholderText(QCoreApplication::translate("JanelaCadastro", "(00) 00000-0000", nullptr));
        possuiVeiculoCheckBox->setText(QCoreApplication::translate("JanelaCadastro", "O h\303\263spede possui ve\303\255culo?", nullptr));
        placaFieldLabel->setText(QCoreApplication::translate("JanelaCadastro", "Placa do ve\303\255culo:", nullptr));
        placaLineEdit->setPlaceholderText(QCoreApplication::translate("JanelaCadastro", "ABC-1234", nullptr));
        cancelarButton->setText(QCoreApplication::translate("JanelaCadastro", "Cancelar", nullptr));
        confirmarButton->setText(QCoreApplication::translate("JanelaCadastro", "Confirmar Cadastro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaCadastro: public Ui_JanelaCadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELACADASTRO_H
