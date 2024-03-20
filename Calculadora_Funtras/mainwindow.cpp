#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "funtras.h"
#include "math.h"
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>
#include <iomanip>
#include "helpdialog.h"


MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Conecta la señal clicked() del botón help_Btn al slot openHelpDialog()
    connect(ui->help_Btn, &QPushButton::clicked, this, &MainWindow::on_help_Btn_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

cpp_dec_float_50 MainWindow::getLineEditNum(){
    std::setprecision(50);
    num1 = ui->x_Field->text().toDouble();
    num2 = ui->y_Field->text().toDouble();
    return num1;
}



//Muestra el resultado de la operación en el espacio designado OuputText
void MainWindow::writeLabelResult(cpp_dec_float_50 tempResult){

    std::ostringstream oss;
    oss << std::fixed << std::setprecision(50) << resultOperacion;
    ui->lb_ResultOp->setText(QString::fromStdString(oss.str()));
    ui->lb_ResultOp->setFocus();

}

// Permite escrite un número al marcar en la casilla X o Y
void MainWindow::writeNumber(QString num){
    if(ui->x_Btn->isChecked()){
        QString text = ui->x_Field->text()+num;
        ui->x_Field->setText(text);
    }
    if(ui->y_Btn->isChecked()){
        QString text = ui->y_Field->text()+num;
        ui->y_Field->setText(text);
    }
}

// Boton de la funcion de senh_t(x)
void MainWindow::on_senh_Btn_clicked()
{

    getLineEditNum();

    resultOperacion = funtras::sinh_t(num1);

    writeLabelResult(resultOperacion);

}

// Boton de la funcion de cosh_t(x)
void MainWindow::on_cosh_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::cosh_t(num1);

    writeLabelResult(resultOperacion);

}

// Boton de la funcion de tanh_t(x)
void MainWindow::on_tanh_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::tanh_t(num1);

    writeLabelResult(resultOperacion);
}

// Botón de la funcion de asen_t(x)
void MainWindow::on_asen_Btn_clicked()
{
    getLineEditNum();

    if(num1 > -1 && num1 < 1){
        resultOperacion = funtras::asin_t(num1);
        writeLabelResult(resultOperacion);
    }else{
        ui->lb_ResultOp->setText(QString("La función arcoseno no se encuentra definida en ese valor"));
    }

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de acos_t(x)
void MainWindow::on_acos_Btn_clicked()
{
    getLineEditNum();

    if(num1 > -1 && num1 < 1){
        resultOperacion = funtras::acos_t(num1);
        writeLabelResult(resultOperacion);
    }else{
        ui->lb_ResultOp->setText(QString("La función arcocoseno no se encuentra definida en ese valor"));
    }
}

// Boton de la funcion de atan_t(x)
void MainWindow::on_atan_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::atan_t(num1);

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de sec_t(x)
void MainWindow::on_sec_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::sec_t(num1);

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de csc_t(x)
void MainWindow::on_csc_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::csc_t(num1);

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de cot_t(x)
void MainWindow::on_cot_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::cot_t(num1);

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de sen_t(x)
void MainWindow::on_sen_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::sin_t(num1);

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de cos_t(x)
void MainWindow::on_cos_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::cos_t(num1);

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de tan_t(x)
void MainWindow::on_tan_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::tan_t(num1);

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de ln_t(x)
void MainWindow::on_ln_Btn_clicked()
{
    getLineEditNum();
    if(num1<=0){
        ui->lb_ResultOp->setText("Error, x debe ser mayor a 0");
        return;
    }else{
        resultOperacion = funtras::ln_t(num1);

        writeLabelResult(resultOperacion);
    }
}

// Boton de la funcion de log10_t(x)
void MainWindow::on_log10_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::log_t(num1,10);

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de logy_t(x)
void MainWindow::on_logy_Btn_clicked()
{
    getLineEditNum();
    if(num1<=0 || num2<=0){
        ui->lb_ResultOp->setText("Error, x debe ser mayor a 0");
        return;
    }else{
        resultOperacion = funtras::log_t(num1,num2);

        writeLabelResult(resultOperacion);
    }
}

// Boton de la funcion de inv_t(x)
void MainWindow::on_invx_Btn_clicked()
{
    getLineEditNum();
    if(num1==0){
        ui->lb_ResultOp->setText("Error, x debe ser igual a 0");
        return;
    }else{
        if(num1<0){
            resultOperacion = -1*funtras::divi_t(-1*num1);
        }
        else
            resultOperacion = funtras::divi_t(num1);
        writeLabelResult(resultOperacion);
    }
}

// Boton de la funcion de sqrt_t(x)
void MainWindow::on_sqrtx_Btn_clicked()
{
    getLineEditNum();
    getLineEditNum();
    if(num1<0){
        ui->lb_ResultOp->setText("Error, el valor debe ser mayor o igual que 0");
        return;
    }else{
        resultOperacion = funtras::sqrt_t(num1);

        writeLabelResult(resultOperacion);
    }
}

// Boton de la funcion de yrt_t(x)
void MainWindow::on_yrtx_Btn_clicked()
{
    getLineEditNum();
    if(num1<0){
        ui->lb_ResultOp->setText("Error, el valor debe ser mayor o igual que 0");
        return;
    }else{
        resultOperacion = funtras::root_t(num1,num2);

        writeLabelResult(resultOperacion);
    }

}

// Boton de la funcion de exp_t(x)
void MainWindow::on_exp_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::exp_t(num1);

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de xpow_t(y)
void MainWindow::on_xpowy_Btn_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::power_t(num1,num2);

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de fact_t(x)
void MainWindow::on_xfact_Btn_clicked()
{

    getLineEditNum();
    int factorial = ui->x_Field->text().toInt();

    if(factorial<0){
        ui->lb_ResultOp->setText("Error, el valor debe ser mayor o igual que 0");
        return;
    }else{
        resultOperacion = funtras::fact_t(factorial);

        writeLabelResult(resultOperacion);
    }


}

// Boton de la funcion de eliminar números de las casillas X y Y
void MainWindow::on_pushButton_clicked()
{
    ui->x_Field->clear();
    ui->y_Field->clear();
}

// Boton de la funcion de calcular operación TestFuntras
void MainWindow::on_pushButton_2_clicked()
{
    getLineEditNum();

    resultOperacion = funtras::root_t(funtras::cos_t(3*funtras::divi_t(7))+funtras::ln_t(2),3)*funtras::divi_t(funtras::sinh_t(funtras::sqrt_t(2)))+funtras::atan_t(funtras::exp_t(-1));

    writeLabelResult(resultOperacion);
}

// Boton de la funcion de pi
void MainWindow::on_pi_Btn_clicked()
{
    std::ostringstream oss;
    result = funtras::pi_t;
    oss << std::fixed << std::setprecision(50) << result;
    writeNumber(QString::fromStdString(oss.str()));
}

// Boton del numero 0
void MainWindow::on_zero_Btn_clicked()
{
    writeNumber(ui->zero_Btn->text());
}

// Boton del numero 1
void MainWindow::on_one_Btn_clicked()
{
    writeNumber(ui->one_Btn->text());
}

// Boton del numero 2
void MainWindow::on_two_Btn_clicked()
{
    writeNumber(ui->two_Btn->text());
}

// Boton del numero 3
void MainWindow::on_three_Btn_clicked()
{
    writeNumber(ui->three_Btn->text());
}

// Boton del numero 4
void MainWindow::on_four_Btn_clicked()
{
    writeNumber(ui->four_Btn->text());
}

// Boton del numero 5
void MainWindow::on_five_Btn_clicked()
{
    writeNumber(ui->five_Btn->text());
}

// Boton del numero 6
void MainWindow::on_six_Btn_clicked()
{
    writeNumber(ui->six_Btn->text());
}

// Boton del numero 7
void MainWindow::on_seven_Btn_clicked()
{
    writeNumber(ui->seven_Btn->text());
}

// Boton del numero 8
void MainWindow::on_eight_Btn_clicked()
{
    writeNumber(ui->eight_Btn->text());
}

// Boton del numero 9
void MainWindow::on_nine_Btn_clicked()
{
    writeNumber(ui->nine_Btn->text());
}

// Boton del punto
void MainWindow::on_dot_Btn_clicked()
{
    writeNumber(ui->dot_Btn->text());
}

// Boton del negativo( - )
void MainWindow::on_negative_Btn_clicked()
{
    writeNumber(ui->negative_Btn->text());
}

// Boton de pi medios
void MainWindow::on_pi_half_Btn_clicked()
{
    std::ostringstream oss;
    result = funtras::pi_t*0.5;
    oss << std::fixed << std::setprecision(50) << result;
    writeNumber(QString::fromStdString(oss.str()));
}

//boton de ayuda
void MainWindow::on_help_Btn_clicked() {
    // Crea una instancia del diálogo de ayuda
    helpdialog *helpDialog = new helpdialog(this);

    // Muestra el diálogo de ayuda
    helpDialog->exec();

    // Libera la memoria del diálogo después de que se cierre
    delete helpDialog;
}