/********************************************************************************
** Form generated from reading UI file 'helpdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helpdialog
{
public:
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPlainTextEdit *plainTextEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPlainTextEdit *plainTextEdit_3;

    void setupUi(QDialog *helpdialog)
    {
        if (helpdialog->objectName().isEmpty())
            helpdialog->setObjectName("helpdialog");
        helpdialog->resize(650, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpdialog->sizePolicy().hasHeightForWidth());
        helpdialog->setSizePolicy(sizePolicy);
        helpdialog->setMinimumSize(QSize(650, 500));
        helpdialog->setMaximumSize(QSize(650, 500));
        label = new QLabel(helpdialog);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 361, 81));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setScaledContents(false);
        scrollArea = new QScrollArea(helpdialog);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 20, 391, 441));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 389, 439));
        plainTextEdit = new QPlainTextEdit(scrollAreaWidgetContents);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(10, 0, 341, 61));
        radioButton = new QRadioButton(scrollAreaWidgetContents);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 90, 41, 21));
        QFont font1;
        font1.setPointSize(12);
        radioButton->setFont(font1);
        radioButton_2 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(20, 120, 41, 21));
        radioButton_2->setFont(font1);
        plainTextEdit_2 = new QPlainTextEdit(scrollAreaWidgetContents);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(10, 150, 341, 61));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 230, 41, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_2->setFont(font2);
        lineEdit = new QLineEdit(scrollAreaWidgetContents);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(10, 230, 31, 21));
        lineEdit->setFont(font2);
        lineEdit_2 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(10, 260, 31, 21));
        lineEdit_2->setFont(font2);
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 260, 41, 21));
        label_3->setFont(font2);
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 230, 75, 24));
        plainTextEdit_4 = new QPlainTextEdit(scrollAreaWidgetContents);
        plainTextEdit_4->setObjectName("plainTextEdit_4");
        plainTextEdit_4->setGeometry(QRect(0, 290, 381, 71));
        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 390, 75, 24));
        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 390, 75, 24));
        lineEdit_3 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(100, 390, 41, 21));
        lineEdit_3->setFont(font2);
        lineEdit_4 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(280, 410, 41, 21));
        lineEdit_4->setFont(font2);
        lineEdit_5 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(280, 380, 41, 21));
        lineEdit_5->setFont(font2);
        lineEdit_6 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setEnabled(false);
        lineEdit_6->setGeometry(QRect(0, 360, 113, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font3.setBold(true);
        font3.setItalic(true);
        lineEdit_6->setFont(font3);
        lineEdit_7 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setEnabled(false);
        lineEdit_7->setGeometry(QRect(10, 210, 113, 21));
        lineEdit_7->setFont(font3);
        lineEdit_8 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setEnabled(false);
        lineEdit_8->setGeometry(QRect(10, 60, 113, 21));
        lineEdit_8->setFont(font3);
        scrollArea->setWidget(scrollAreaWidgetContents);
        plainTextEdit_3 = new QPlainTextEdit(helpdialog);
        plainTextEdit_3->setObjectName("plainTextEdit_3");
        plainTextEdit_3->setGeometry(QRect(450, 10, 131, 91));

        retranslateUi(helpdialog);

        QMetaObject::connectSlotsByName(helpdialog);
    } // setupUi

    void retranslateUi(QDialog *helpdialog)
    {
        helpdialog->setWindowTitle(QCoreApplication::translate("helpdialog", "helpdialog", nullptr));
        label->setText(QString());
        plainTextEdit->setPlainText(QCoreApplication::translate("helpdialog", "Utilizar las casillas de \"X\" y \"Y\" para poder digitar n\303\272meros en los espacios correspondientes. Si no los selecciona no podr\303\241 hacer las operaciones.", nullptr));
        radioButton->setText(QCoreApplication::translate("helpdialog", "X", nullptr));
        radioButton_2->setText(QCoreApplication::translate("helpdialog", "Y", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("helpdialog", "Para calcular alguna de las funciones trigometricas, hiperbolicas o inversas deben haber n\303\272meros agregados en los espacios de texto correspodientes a X y Y.", nullptr));
        label_2->setText(QCoreApplication::translate("helpdialog", "10", nullptr));
        lineEdit->setText(QCoreApplication::translate("helpdialog", "X =", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("helpdialog", "Y =", nullptr));
        label_3->setText(QCoreApplication::translate("helpdialog", "10", nullptr));
        pushButton->setText(QCoreApplication::translate("helpdialog", "tan (x)", nullptr));
        plainTextEdit_4->setPlainText(QCoreApplication::translate("helpdialog", "Adicional, si en el boton la funci\303\263n representada lleva ambas variables X y Y significa que se deben a\303\261adir valores a ambas variables pero si solo tiene un variable X entonces solo es necesario a\303\261adir un valor en X", nullptr));
        pushButton_2->setText(QCoreApplication::translate("helpdialog", "sen(x)", nullptr));
        pushButton_3->setText(QCoreApplication::translate("helpdialog", "logy(x)", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("helpdialog", "X = 2", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("helpdialog", "Y =9", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("helpdialog", "X = 2", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("helpdialog", "Por ejemplo:", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("helpdialog", "Por ejemplo:", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("helpdialog", "Por ejemplo:", nullptr));
        plainTextEdit_3->setPlainText(QCoreApplication::translate("helpdialog", "Integrantes: \n"
"\n"
"V\303\241lerin Calder\303\263n\n"
"Kevin Lobo \n"
"Kendall Martinez", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helpdialog: public Ui_helpdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
