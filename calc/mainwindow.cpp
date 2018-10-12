#include "mainwindow.h"
#include "ui_mainwindow.h"
double firstNumber;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_0, SIGNAL(released()),this, SLOT(press()));
    connect(ui->pushButton_1, SIGNAL(released()),this, SLOT(press()));
    connect(ui->pushButton_2, SIGNAL(released()),this, SLOT(press()));
    connect(ui->pushButton_3, SIGNAL(released()),this, SLOT(press()));
    connect(ui->pushButton_4, SIGNAL(released()),this, SLOT(press()));
    connect(ui->pushButton_5, SIGNAL(released()),this, SLOT(press()));
    connect(ui->pushButton_6, SIGNAL(released()),this, SLOT(press()));
    connect(ui->pushButton_7, SIGNAL(released()),this, SLOT(press()));
    connect(ui->pushButton_8, SIGNAL(released()),this, SLOT(press()));
    connect(ui->pushButton_9, SIGNAL(released()),this, SLOT(press()));

    connect(ui->pushButton_plus, SIGNAL(released()),this, SLOT(basic_operation()));
    connect(ui->pushButton_minus, SIGNAL(released()),this, SLOT(basic_operation()));
    connect(ui->pushButton_div, SIGNAL(released()),this, SLOT(basic_operation()));
    connect(ui->pushButton_mult, SIGNAL(released()),this, SLOT(basic_operation()));

    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_div->setCheckable(true);
    ui->pushButton_mult->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::press()
{
QPushButton * button= (QPushButton*)sender();
double labelNumber;
QString newLabel;
if(ui->pushButton_plus->isChecked()||ui->pushButton_minus->isChecked()||ui->pushButton_div->isChecked()||ui->pushButton_mult->isChecked())
{
   labelNumber=(button->text()).toDouble();
}

else
{
    labelNumber=(ui->label->text()+button->text()).toDouble();

}
newLabel= QString::number(labelNumber);
ui->label->setText(newLabel);
}

void MainWindow::operation_eqv()
{
}
void MainWindow::basic_operation()
{
    QPushButton * button= (QPushButton*)sender();
    firstNumber= ui->label->text().toDouble();
      button->setChecked(true);

}

void MainWindow::on_pushButton_18_released()
{
    double labelNumber,secondNumber;
        QString newLabel;
       secondNumber= ui->label->text().toDouble();
        if(ui->pushButton_plus->isChecked())
        {
            labelNumber= firstNumber+ secondNumber;
            newLabel= QString::number(labelNumber,'g','15');
            ui->label->setText(newLabel);
            ui->pushButton_plus->setChecked(false);
        }
        else if(ui->pushButton_minus->isChecked())
        {
            labelNumber= firstNumber-secondNumber;
            newLabel= QString::number(labelNumber);
            ui->label->setText(newLabel);
            ui->pushButton_minus->setChecked(false);
        }
        else if(ui->pushButton_div->isChecked())
        {
            labelNumber= firstNumber/secondNumber;
            newLabel= QString::number(labelNumber);
            ui->label->setText(newLabel);
            ui->pushButton_div->setChecked(false);
        }
        else if(ui->pushButton_mult->isChecked())
        {
            labelNumber= firstNumber*secondNumber;
            newLabel= QString::number(labelNumber);
            ui->label->setText(newLabel);
            ui->pushButton_mult->setChecked(false);

        }
}
