#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "Bike.h"
#include "Person.h"
#include "Car.h"
#include "CreateBike.h"
#include "CreateCar.h"
#include "ShowBike.h"
#include "ShowCar.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QSqlTableModel;
class DBManager;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(DBManager* dbManager, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createBikeButton_clicked();

    void on_createCarButton_clicked();

    void on_showBikeButton_clicked();

    void on_showCarButton_clicked();

    void on_exitButton_clicked();
private:
    Ui::MainWindow *ui;
    QString id, models, yearofManufacture, price, registrationNumber, vin, maximumSpeed, weight, numberofPassengerSeats,  numberofDoors;
    ShowBike *showBike;
    ShowCar *showCar;
    DBManager *db;
    QSqlTableModel  *model;
};
#endif // MAINWINDOW_H
