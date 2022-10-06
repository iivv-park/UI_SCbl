#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ConsoleSampleEventListener.h"
#include <QString>
#include <hx711/common.h>
#include <QTimer>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
using namespace std;
using namespace HX711;

typedef struct WEIGHT_VALUE
{
    double weight;
    double differ;
}WeightValue;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    void barcodeEvent();
    BcDataType m_barcodeData;
    SampleEventListener* sel;
    QTimer *timer;
    SimpleHX711 *hx; // -370, -267471
    double m_weightValue;
    double m_zeroOffset;
    vector<WeightValue> m_listWeight;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void checkWeight();
    void on_P_SetZero_clicked();
    void on_PB_WRegistration_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
