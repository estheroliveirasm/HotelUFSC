#ifndef JANELASOBRE_H
#define JANELASOBRE_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaSobre; }
QT_END_NAMESPACE

class JanelaSobre : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaSobre(QWidget *parent = nullptr);
    ~JanelaSobre();

private:
    Ui::JanelaSobre *ui;
};

#endif
