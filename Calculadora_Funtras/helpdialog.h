//
// Created by kevin on 20/3/2024.
//

#ifndef CALCULADORA_FUNTRAS_HELPDIALOG_H
#define CALCULADORA_FUNTRAS_HELPDIALOG_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class helpdialog; }
QT_END_NAMESPACE

class helpdialog : public QDialog {
Q_OBJECT

public:
    explicit helpdialog(QWidget *parent = nullptr);

    ~helpdialog() override;

private:
    Ui::helpdialog *ui;
};


#endif //CALCULADORA_FUNTRAS_HELPDIALOG_H
