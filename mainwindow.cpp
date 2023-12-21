#include "mainwindow.h"
#include "./ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    //ui->textEdit->setLineWrapMode();
}

void MainWindow::on_CalcSumBtn_clicked()
{
    QString hexValue = ui->HexInputBox->toPlainText();

    int sum = 0x00;

    hexValue = hexValue.simplified();
    hexValue.replace(" " ,"");
    hexValue.replace("-" , "");

    QString hexPair;

    if(hexValue.length()%2 ==0)
    {

        for (int i = 0; i < hexValue.length(); i += 2)
        {
            hexPair = hexValue.mid(i, 2);
            bool ok = false;
            int value = hexPair.toInt(&ok, 16);
            if (ok)
            {
                sum += value;
            }
        }


        ui->ShowHexResultBox->setText(QString::number(sum,16));
        ui->ShowDecimalResultBox->setText(QString::number(sum,10));
        ui->InputTextLengthLabel->setText("Bytes entered : " + QString::number(hexValue.length()/2));
    }

    else
    {
        ui->InputTextLengthLabel->setText("Please Enter values in even pairs " );

    }

}

