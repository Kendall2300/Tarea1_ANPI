//
// Created by kevin on 20/3/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_helpdialog.h" resolved

#include "helpdialog.h"
#include "ui_helpdialog.h"


helpdialog::helpdialog(QWidget *parent) :
        QDialog(parent), ui(new Ui::helpdialog) {
    ui->setupUi(this);
}

helpdialog::~helpdialog() {
    delete ui;
}
