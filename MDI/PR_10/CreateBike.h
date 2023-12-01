#ifndef CREATEBIKE_H
#define CREATEBIKE_H

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
class CreateBike;
}

class CreateBike : public QDialog
{
    Q_OBJECT

public:
    explicit CreateBike(QWidget *parent = nullptr);
    ~CreateBike();

private slots:
    void on_confirmBikeButton_clicked();

private:
    Ui::CreateBike *ui;
    QString id, models, yearofManufacture , price, registrationNumber, vin, maximumSpeed, weight;
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // CREATEBIKE_H
