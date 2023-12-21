/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *CalcSumBtn;
    QLineEdit *ShowHexResultBox;
    QLabel *label;
    QLineEdit *ShowDecimalResultBox;
    QLabel *label_2;
    QTextEdit *HexInputBox;
    QLabel *InputTextLengthLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        CalcSumBtn = new QPushButton(centralwidget);
        CalcSumBtn->setObjectName("CalcSumBtn");
        CalcSumBtn->setGeometry(QRect(30, 190, 80, 24));
        ShowHexResultBox = new QLineEdit(centralwidget);
        ShowHexResultBox->setObjectName("ShowHexResultBox");
        ShowHexResultBox->setGeometry(QRect(30, 230, 113, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 240, 61, 16));
        ShowDecimalResultBox = new QLineEdit(centralwidget);
        ShowDecimalResultBox->setObjectName("ShowDecimalResultBox");
        ShowDecimalResultBox->setGeometry(QRect(30, 280, 113, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 290, 101, 16));
        HexInputBox = new QTextEdit(centralwidget);
        HexInputBox->setObjectName("HexInputBox");
        HexInputBox->setGeometry(QRect(30, 20, 711, 151));
        InputTextLengthLabel = new QLabel(centralwidget);
        InputTextLengthLabel->setObjectName("InputTextLengthLabel");
        InputTextLengthLabel->setGeometry(QRect(460, 190, 231, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "NHSCalc", nullptr));
        CalcSumBtn->setText(QCoreApplication::translate("MainWindow", "SUM", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Hex Value", nullptr));
        ShowDecimalResultBox->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Decimal Value", nullptr));
        InputTextLengthLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
