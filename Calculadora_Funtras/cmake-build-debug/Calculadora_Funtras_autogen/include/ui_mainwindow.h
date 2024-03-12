/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QPushButton *atan_Btn;
    QPushButton *sec_Btn;
    QPushButton *tanh_Btn;
    QPushButton *yrtx_Btn;
    QPushButton *logy_Btn;
    QPushButton *sqrtx_Btn;
    QPushButton *cosh_Btn;
    QPushButton *acos_Btn;
    QPushButton *xpowy_Btn;
    QPushButton *asen_Btn;
    QPushButton *invx_Btn;
    QPushButton *tan_Btn;
    QPushButton *xfact_Btn;
    QPushButton *exp_Btn;
    QPushButton *senh_Btn;
    QPushButton *sen_Btn;
    QPushButton *cot_Btn;
    QPushButton *csc_Btn;
    QPushButton *ln_Btn;
    QPushButton *log10_Btn;
    QPushButton *cos_Btn;
    QGridLayout *gridLayout;
    QPushButton *negative_Btn;
    QPushButton *five_Btn;
    QPushButton *nine_Btn;
    QPushButton *eight_Btn;
    QPushButton *one_Btn;
    QPushButton *pi_Btn;
    QPushButton *three_Btn;
    QPushButton *four_Btn;
    QPushButton *zero_Btn;
    QPushButton *two_Btn;
    QPushButton *six_Btn;
    QPushButton *pi_half_Btn;
    QPushButton *seven_Btn;
    QPushButton *dot_Btn;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLineEdit *x_Field;
    QPushButton *pushButton;
    QLineEdit *y_Field;
    QLabel *lb_X;
    QLabel *lb_Y;
    QRadioButton *x_Btn;
    QRadioButton *y_Btn;
    QPushButton *help_Btn;
    QLabel *lb_Answer;
    QLabel *Basic_Calculator;
    QLabel *lb_ResultOp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(600, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 600));
        MainWindow->setMaximumSize(QSize(600, 600));
        MainWindow->setIconSize(QSize(800, 600));
        MainWindow->setAnimated(true);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(406, 29, 151, 51));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(76, 219, 451, 330));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        atan_Btn = new QPushButton(layoutWidget);
        atan_Btn->setObjectName("atan_Btn");

        gridLayout_2->addWidget(atan_Btn, 1, 2, 1, 1);

        sec_Btn = new QPushButton(layoutWidget);
        sec_Btn->setObjectName("sec_Btn");

        gridLayout_2->addWidget(sec_Btn, 2, 0, 1, 1);

        tanh_Btn = new QPushButton(layoutWidget);
        tanh_Btn->setObjectName("tanh_Btn");

        gridLayout_2->addWidget(tanh_Btn, 0, 2, 1, 1);

        yrtx_Btn = new QPushButton(layoutWidget);
        yrtx_Btn->setObjectName("yrtx_Btn");

        gridLayout_2->addWidget(yrtx_Btn, 5, 2, 1, 1);

        logy_Btn = new QPushButton(layoutWidget);
        logy_Btn->setObjectName("logy_Btn");

        gridLayout_2->addWidget(logy_Btn, 4, 2, 1, 1);

        sqrtx_Btn = new QPushButton(layoutWidget);
        sqrtx_Btn->setObjectName("sqrtx_Btn");

        gridLayout_2->addWidget(sqrtx_Btn, 5, 1, 1, 1);

        cosh_Btn = new QPushButton(layoutWidget);
        cosh_Btn->setObjectName("cosh_Btn");

        gridLayout_2->addWidget(cosh_Btn, 0, 1, 1, 1);

        acos_Btn = new QPushButton(layoutWidget);
        acos_Btn->setObjectName("acos_Btn");

        gridLayout_2->addWidget(acos_Btn, 1, 1, 1, 1);

        xpowy_Btn = new QPushButton(layoutWidget);
        xpowy_Btn->setObjectName("xpowy_Btn");

        gridLayout_2->addWidget(xpowy_Btn, 6, 1, 1, 1);

        asen_Btn = new QPushButton(layoutWidget);
        asen_Btn->setObjectName("asen_Btn");

        gridLayout_2->addWidget(asen_Btn, 1, 0, 1, 1);

        invx_Btn = new QPushButton(layoutWidget);
        invx_Btn->setObjectName("invx_Btn");

        gridLayout_2->addWidget(invx_Btn, 5, 0, 1, 1);

        tan_Btn = new QPushButton(layoutWidget);
        tan_Btn->setObjectName("tan_Btn");

        gridLayout_2->addWidget(tan_Btn, 3, 2, 1, 1);

        xfact_Btn = new QPushButton(layoutWidget);
        xfact_Btn->setObjectName("xfact_Btn");

        gridLayout_2->addWidget(xfact_Btn, 6, 2, 1, 1);

        exp_Btn = new QPushButton(layoutWidget);
        exp_Btn->setObjectName("exp_Btn");

        gridLayout_2->addWidget(exp_Btn, 6, 0, 1, 1);

        senh_Btn = new QPushButton(layoutWidget);
        senh_Btn->setObjectName("senh_Btn");

        gridLayout_2->addWidget(senh_Btn, 0, 0, 1, 1);

        sen_Btn = new QPushButton(layoutWidget);
        sen_Btn->setObjectName("sen_Btn");

        gridLayout_2->addWidget(sen_Btn, 3, 0, 1, 1);

        cot_Btn = new QPushButton(layoutWidget);
        cot_Btn->setObjectName("cot_Btn");

        gridLayout_2->addWidget(cot_Btn, 2, 2, 1, 1);

        csc_Btn = new QPushButton(layoutWidget);
        csc_Btn->setObjectName("csc_Btn");

        gridLayout_2->addWidget(csc_Btn, 2, 1, 1, 1);

        ln_Btn = new QPushButton(layoutWidget);
        ln_Btn->setObjectName("ln_Btn");

        gridLayout_2->addWidget(ln_Btn, 4, 0, 1, 1);

        log10_Btn = new QPushButton(layoutWidget);
        log10_Btn->setObjectName("log10_Btn");

        gridLayout_2->addWidget(log10_Btn, 4, 1, 1, 1);

        cos_Btn = new QPushButton(layoutWidget);
        cos_Btn->setObjectName("cos_Btn");

        gridLayout_2->addWidget(cos_Btn, 3, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        negative_Btn = new QPushButton(layoutWidget);
        negative_Btn->setObjectName("negative_Btn");

        gridLayout->addWidget(negative_Btn, 3, 3, 1, 1);

        five_Btn = new QPushButton(layoutWidget);
        five_Btn->setObjectName("five_Btn");

        gridLayout->addWidget(five_Btn, 1, 2, 1, 1);

        nine_Btn = new QPushButton(layoutWidget);
        nine_Btn->setObjectName("nine_Btn");

        gridLayout->addWidget(nine_Btn, 0, 3, 1, 1);

        eight_Btn = new QPushButton(layoutWidget);
        eight_Btn->setObjectName("eight_Btn");

        gridLayout->addWidget(eight_Btn, 0, 2, 1, 1);

        one_Btn = new QPushButton(layoutWidget);
        one_Btn->setObjectName("one_Btn");

        gridLayout->addWidget(one_Btn, 2, 1, 1, 1);

        pi_Btn = new QPushButton(layoutWidget);
        pi_Btn->setObjectName("pi_Btn");

        gridLayout->addWidget(pi_Btn, 0, 0, 1, 1);

        three_Btn = new QPushButton(layoutWidget);
        three_Btn->setObjectName("three_Btn");

        gridLayout->addWidget(three_Btn, 2, 3, 1, 1);

        four_Btn = new QPushButton(layoutWidget);
        four_Btn->setObjectName("four_Btn");

        gridLayout->addWidget(four_Btn, 1, 1, 1, 1);

        zero_Btn = new QPushButton(layoutWidget);
        zero_Btn->setObjectName("zero_Btn");

        gridLayout->addWidget(zero_Btn, 3, 2, 1, 1);

        two_Btn = new QPushButton(layoutWidget);
        two_Btn->setObjectName("two_Btn");

        gridLayout->addWidget(two_Btn, 2, 2, 1, 1);

        six_Btn = new QPushButton(layoutWidget);
        six_Btn->setObjectName("six_Btn");

        gridLayout->addWidget(six_Btn, 1, 3, 1, 1);

        pi_half_Btn = new QPushButton(layoutWidget);
        pi_half_Btn->setObjectName("pi_half_Btn");

        gridLayout->addWidget(pi_half_Btn, 1, 0, 1, 1);

        seven_Btn = new QPushButton(layoutWidget);
        seven_Btn->setObjectName("seven_Btn");

        gridLayout->addWidget(seven_Btn, 0, 1, 1, 1);

        dot_Btn = new QPushButton(layoutWidget);
        dot_Btn->setObjectName("dot_Btn");

        gridLayout->addWidget(dot_Btn, 3, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(77, 72, 302, 94));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        x_Field = new QLineEdit(layoutWidget1);
        x_Field->setObjectName("x_Field");
        x_Field->setEnabled(false);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        x_Field->setFont(font);
        x_Field->setFrame(true);

        gridLayout_3->addWidget(x_Field, 0, 2, 1, 1);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");

        gridLayout_3->addWidget(pushButton, 0, 3, 2, 1);

        y_Field = new QLineEdit(layoutWidget1);
        y_Field->setObjectName("y_Field");
        y_Field->setEnabled(false);
        y_Field->setFont(font);

        gridLayout_3->addWidget(y_Field, 1, 2, 1, 1);

        lb_X = new QLabel(layoutWidget1);
        lb_X->setObjectName("lb_X");

        gridLayout_3->addWidget(lb_X, 0, 1, 1, 1);

        lb_Y = new QLabel(layoutWidget1);
        lb_Y->setObjectName("lb_Y");

        gridLayout_3->addWidget(lb_Y, 1, 1, 1, 1);

        x_Btn = new QRadioButton(layoutWidget1);
        x_Btn->setObjectName("x_Btn");

        gridLayout_3->addWidget(x_Btn, 0, 0, 1, 1);

        y_Btn = new QRadioButton(layoutWidget1);
        y_Btn->setObjectName("y_Btn");

        gridLayout_3->addWidget(y_Btn, 1, 0, 1, 1);

        help_Btn = new QPushButton(centralwidget);
        help_Btn->setObjectName("help_Btn");
        help_Btn->setGeometry(QRect(77, 36, 75, 24));
        lb_Answer = new QLabel(centralwidget);
        lb_Answer->setObjectName("lb_Answer");
        lb_Answer->setGeometry(QRect(20, 180, 94, 28));
        Basic_Calculator = new QLabel(centralwidget);
        Basic_Calculator->setObjectName("Basic_Calculator");
        Basic_Calculator->setEnabled(true);
        Basic_Calculator->setGeometry(QRect(190, 30, 206, 36));
        lb_ResultOp = new QLabel(centralwidget);
        lb_ResultOp->setObjectName("lb_ResultOp");
        lb_ResultOp->setGeometry(QRect(120, 180, 461, 26));
        lb_ResultOp->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Test Funtras", nullptr));
        atan_Btn->setText(QCoreApplication::translate("MainWindow", "atan(x)", nullptr));
        sec_Btn->setText(QCoreApplication::translate("MainWindow", "sec(x)", nullptr));
        tanh_Btn->setText(QCoreApplication::translate("MainWindow", "tanh(x)", nullptr));
        yrtx_Btn->setText(QCoreApplication::translate("MainWindow", "y\342\210\232x", nullptr));
        logy_Btn->setText(QCoreApplication::translate("MainWindow", "logy(x)", nullptr));
        sqrtx_Btn->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        cosh_Btn->setText(QCoreApplication::translate("MainWindow", "cosh(x)", nullptr));
        acos_Btn->setText(QCoreApplication::translate("MainWindow", "acos(x)", nullptr));
        xpowy_Btn->setText(QCoreApplication::translate("MainWindow", "x^y", nullptr));
        asen_Btn->setText(QCoreApplication::translate("MainWindow", "asen(x)", nullptr));
        invx_Btn->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        tan_Btn->setText(QCoreApplication::translate("MainWindow", "tan(x)", nullptr));
        xfact_Btn->setText(QCoreApplication::translate("MainWindow", "x!", nullptr));
        exp_Btn->setText(QCoreApplication::translate("MainWindow", "exp(x)", nullptr));
        senh_Btn->setText(QCoreApplication::translate("MainWindow", "senh(x)", nullptr));
        sen_Btn->setText(QCoreApplication::translate("MainWindow", "sen(x)", nullptr));
        cot_Btn->setText(QCoreApplication::translate("MainWindow", "cot(x)", nullptr));
        csc_Btn->setText(QCoreApplication::translate("MainWindow", "csc(x)", nullptr));
        ln_Btn->setText(QCoreApplication::translate("MainWindow", "ln(x)", nullptr));
        log10_Btn->setText(QCoreApplication::translate("MainWindow", "log10(x)", nullptr));
        cos_Btn->setText(QCoreApplication::translate("MainWindow", "cos(x)", nullptr));
        negative_Btn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        five_Btn->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        nine_Btn->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        eight_Btn->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        one_Btn->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pi_Btn->setText(QCoreApplication::translate("MainWindow", "PI", nullptr));
        three_Btn->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        four_Btn->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        zero_Btn->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        two_Btn->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        six_Btn->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pi_half_Btn->setText(QCoreApplication::translate("MainWindow", "PI/2", nullptr));
        seven_Btn->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        dot_Btn->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        x_Field->setInputMask(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        lb_X->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">X=</span></p></body></html>", nullptr));
        lb_Y->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">Y=</span></p></body></html>", nullptr));
        x_Btn->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        y_Btn->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        help_Btn->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        lb_Answer->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Answer =</span></p></body></html>", nullptr));
        Basic_Calculator->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700; font-style:italic;\">Basic Calculator</span></p></body></html>", nullptr));
        lb_ResultOp->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Output Field</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
