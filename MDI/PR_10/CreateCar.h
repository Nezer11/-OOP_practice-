#ifndef CREATECAR_H
#define CREATECAR_H

#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "mainwindow.h"
#include "Bike.h"
#include "Person.h"
#include "Car.h"
#include "CreateBike.h"
#include "CreateCar.h"
#include "ShowBike.h"
#include "ShowCar.h"
#include "sqlite.h"
namespace Ui {
class CreateCar;
}

class CreateCar : public QDialog
{
    Q_OBJECT

public:
    explicit CreateCar(QWidget *parent = nullptr);
    ~CreateCar();

private slots:
    void on_confirmCarButton_clicked();

private:
    Ui::CreateCar *ui;
    QString id, models, yearofManufacture, price, registrationNumber,  vin, numberofPassengerSeats,numberofDoors;
    DBManager *db;
    QSqlTableModel  *model;
};
#endif // CREATECAR_H
