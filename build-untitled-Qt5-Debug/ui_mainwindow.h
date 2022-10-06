/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *BarcodeDataType;
    QLabel *label_3;
    QLineEdit *BarcodeData;
    QPushButton *PB_WRegistration;
    QPushButton *P_SetZero;
    QListWidget *LW_RegWeight;
    QWidget *widget;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *LE_Weight;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 510, 91, 30));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(700, 510, 91, 30));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 781, 501));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 270, 779, 226));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 55, 621, 68));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        BarcodeDataType = new QLineEdit(layoutWidget1);
        BarcodeDataType->setObjectName(QString::fromUtf8("BarcodeDataType"));

        formLayout->setWidget(0, QFormLayout::FieldRole, BarcodeDataType);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        BarcodeData = new QLineEdit(layoutWidget1);
        BarcodeData->setObjectName(QString::fromUtf8("BarcodeData"));

        formLayout->setWidget(1, QFormLayout::FieldRole, BarcodeData);

        PB_WRegistration = new QPushButton(groupBox);
        PB_WRegistration->setObjectName(QString::fromUtf8("PB_WRegistration"));
        PB_WRegistration->setGeometry(QRect(270, 50, 91, 30));
        P_SetZero = new QPushButton(groupBox);
        P_SetZero->setObjectName(QString::fromUtf8("P_SetZero"));
        P_SetZero->setGeometry(QRect(160, 90, 91, 30));
        LW_RegWeight = new QListWidget(groupBox);
        LW_RegWeight->setObjectName(QString::fromUtf8("LW_RegWeight"));
        LW_RegWeight->setGeometry(QRect(380, 41, 256, 201));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 50, 231, 32));
        formLayout_2 = new QFormLayout(widget);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        LE_Weight = new QLineEdit(widget);
        LE_Weight->setObjectName(QString::fromUtf8("LE_Weight"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, LE_Weight);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Load Cell", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Barcode", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Barcode Data Type", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Barcode Data :", nullptr));
        PB_WRegistration->setText(QCoreApplication::translate("MainWindow", "Registartion", nullptr));
        P_SetZero->setText(QCoreApplication::translate("MainWindow", "Zero", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Weight :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
