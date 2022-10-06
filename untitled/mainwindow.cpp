#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sel = new SampleEventListener(&m_barcodeData, bind(&MainWindow::barcodeEvent, this));
    if(STATUS_OK != sel->Open())
    {
        QMessageBox::critical(this,"Critical Error", "Barcode Scanner Open Error !!!", QMessageBox::Ok);
        exit(0);
    }
    hx = new SimpleHX711(5, 6, -370, 0); // -370, -267471
    hx->setUnit(Mass::Unit::G);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(checkWeight()));
    timer->start(1000);
    m_weightValue = 0.0;
    m_zeroOffset = 0.0;
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::barcodeEvent()
{
    ui->BarcodeDataType->setText("");
    ui->BarcodeData->setText("");
    QStringList barcodeList = m_barcodeData.barcodeData.split(" ");
    QString barcodeString ="";
    foreach(QString codeValue, barcodeList)
        barcodeString.append(codeValue[1]);

    ui->BarcodeDataType->setText(m_barcodeData.barcodeDataType);
    ui->BarcodeData->setText(barcodeString);
}

void MainWindow::on_pushButton_2_clicked()
{
    hx->powerDown();
    delete hx;
    exit(0);
}

void MainWindow::on_pushButton_clicked()
{
    ui->BarcodeDataType->setText("");
    ui->BarcodeData->setText("");
    ui->LW_RegWeight->clear();
    m_listWeight.clear();
    m_zeroOffset = 0.0;
}

void MainWindow::checkWeight()
{
    QString weightValue = QString(hx->weight(35).toString().c_str());
    weightValue.chop(2);
    m_weightValue =  weightValue.toDouble() - m_zeroOffset;
    ui->LE_Weight->setText("");
    ui->LE_Weight->setText(QString::number(m_weightValue));
}

void MainWindow::on_P_SetZero_clicked()
{
    m_zeroOffset += m_weightValue;
}

void MainWindow::on_PB_WRegistration_clicked()
{
    WeightValue tempValue;
    tempValue.weight = m_weightValue;
    if(m_listWeight.size() == 0)
        tempValue.differ = m_weightValue;
    else{
        tempValue.differ = m_weightValue - m_listWeight[m_listWeight.size()-1].weight;
    }

    m_listWeight.push_back(tempValue);
    ui->LW_RegWeight->clear();
    for(int i = m_listWeight.size() - 1; i >=0; i--)
    {
        QString tempString = QString::number(m_listWeight[i].weight) + " : " + QString::number(m_listWeight[i].differ);
        ui->LW_RegWeight->addItem(tempString);
    }
}
