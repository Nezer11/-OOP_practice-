// mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "car.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::createCarObject);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::displayCreatedObjects);
}

MainWindow::~MainWindow()
{
    qDeleteAll(carList);
    delete ui;
}

void MainWindow::createCarObject()
{
    QString id = ui->lineEdit->text();
    QString model = ui->lineEdit_2->text();
    QString year = ui->lineEdit_3->text();
    QString price = ui->lineEdit_4->text();
    QString registrationNumber = ui->lineEdit_5->text();
    QString vinNumber = ui->lineEdit_6->text();
    QString passengerSeats = ui->lineEdit_7->text();
    QString numberOfDoors = ui->lineEdit_8->text();

    // Перевірка на заповненість обов'язкових полів
    if (model.isEmpty() || registrationNumber.isEmpty() || vinNumber.isEmpty())
    {
        QMessageBox::critical(this, "Помилка", "Заповніть усі обов'язкові поля!");
        return;
    }

    // Конвертація стрічкових значень в числа
    int yearValue = year.toInt();
    float priceValue = price.toFloat();
    int passengerSeatsValue = passengerSeats.toInt();
    int numberOfDoorsValue = numberOfDoors.toInt();

    // Створення об'єкта класу Car
    Car* newCar = new Car(id.toInt(), model, yearValue, priceValue, registrationNumber, vinNumber, passengerSeatsValue, numberOfDoorsValue);

    // Додавання об'єкта до списку
    carList.append(newCar);

    // Виведення інформації про успішно створений об'єкт за допомогою QMessageBox
    QString successMessage = "Успішно створено новий об'єкт:\n" + newCar->toString();
    QMessageBox::information(this, "Інформація", successMessage);
}


void MainWindow::displayCreatedObjects()
{
    QString message = "Створені об'єкти:\n";
    if (carList.isEmpty()) {
        message += "Немає створених об'єктів.";
    } else {
        for (Car* car : carList)
        {
            message += car->toString() + "\n\n";
        }
    }
    QMessageBox::information(this, "Інформація", message);
}



