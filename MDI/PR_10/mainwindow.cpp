#include "mainwindow.h"
#include "db.h"
#include "sqlite.h"
#include <QtSql/QSqlTableModel>
#include <QDateTime>
#include "ui_mainwindow.h"
#include "ShowBike.h"
#include "ShowCar.h"

MainWindow::MainWindow(DBManager* dbManager, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dbManager->connectToDataBase();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_createBikeButton_clicked()
{
    CreateBike createbike;
    createbike.setModal(true);
    createbike.exec();
}


void MainWindow::on_createCarButton_clicked()
{
    CreateCar createcar;
    createcar.setModal(true);
    createcar.exec();
}


void MainWindow::on_showBikeButton_clicked()
{
    showBike = new ShowBike(this);
    showBike->show();
    showBike->setList();
}


void MainWindow::on_showCarButton_clicked()
{
    showCar = new ShowCar(this);
    showCar->show();
    showCar->setList();
}


void MainWindow::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exiting the program", "Are you sure you want to exit?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QCoreApplication::exit(0);
    }
}

