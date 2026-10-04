#ifndef JANELAINICIAL_H
#define JANELAINICIAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaInicial; }
QT_END_NAMESPACE

class JanelaInicial : public QMainWindow
{
    Q_OBJECT

public:
    explicit JanelaInicial(QWidget *parent = nullptr);
    ~JanelaInicial();

private slots:
    void onEntrarSistemaClicked();

private:
    Ui::JanelaInicial *ui;
};

#endif
