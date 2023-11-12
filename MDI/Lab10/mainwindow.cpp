// mainwindow.cpp
#include "listscar.h"
#include "listsBook.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newdialogcar.h"
#include "newdialogbook.h"
#include <QMessageBox>
#include <QListWidgetItem>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      newDialogCar(nullptr),
      newDialogBook(nullptr)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::openNewObjectDialogCar);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::openNewObjectDialogBook);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::displayCarsList);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::displayBooksList);
}

MainWindow::~MainWindow()
{
    qDeleteAll(carsList.begin(), carsList.end());
    qDeleteAll(booksList.begin(), booksList.end());
    delete ui;
}

void MainWindow::openNewObjectDialogCar()
{
    if (!newDialogCar) {
        newDialogCar = new newdialogcar(this);
        connect(newDialogCar, &newdialogcar::createCarRequested, this, &MainWindow::handleCreateCar);
    }
    newDialogCar->show();
}

void MainWindow::openNewObjectDialogBook()
{
    if (!newDialogBook) {
        newDialogBook = new newdialogbook(this);
        connect(newDialogBook, &newdialogbook::createBookRequested, this, &MainWindow::handleCreateBook);
    }
    newDialogBook->show();
}

void MainWindow::handleCreateCar(int id, QString model, int year, float price,
                                 QString registrationNumber, QString vinNumber,
                                 int passengerSeats, int numberOfDoors)
{
    qDebug() << "Creating Car with data:" << id << model << year << price << registrationNumber << vinNumber << passengerSeats << numberOfDoors;

    ListCar* newCar = new ListCar(id, model, year, price, registrationNumber, vinNumber, passengerSeats, numberOfDoors);
    if (newCar) {
        carsList.append(newCar);
        // Clear and then add to the displayed list
        displayedCarsList.clear();
        displayedCarsList.append(carsList);
        QMessageBox::information(this, "Інформація", "Автомобіль створено:\n" + newCar->toString());
    } else {
        QMessageBox::warning(this, "Помилка", "Не вдалося створити об'єкт Car.");
    }
}

void MainWindow::handleCreateBook(int id, QString title, QString author, QString publisher,
                                  int year, int pageCount, float price, bool hasHardcover)
{
    qDebug() << "Creating Book with data:" << id << title << author << publisher << year << pageCount << price << hasHardcover;

    ListBook* newBook = new ListBook(id, title, author, publisher, year, pageCount, price, hasHardcover);
    if (newBook) {
        booksList.append(newBook);
        // Clear and then add to the displayed list
        displayedBooksList.clear();
        displayedBooksList.append(booksList);
        QMessageBox::information(this, "Інформація", "Книга створена:\n" + newBook->toString());
    } else {
        QMessageBox::warning(this, "Помилка", "Не вдалося створити об'єкт Book.");
    }
}

void MainWindow::displayCarsList()
{
    qDebug() << "Displaying cars list. Current carsList size:" << displayedCarsList.size();

    QString carsInfo;
    for (const auto& car : displayedCarsList) {
        carsInfo += car->toString() + "\n\n";
    }
    if (!carsInfo.isEmpty()) {
        QMessageBox::information(this, "Автомобілі", carsInfo);
    } else {
        QMessageBox::information(this, "Автомобілі", "Список автомобілів порожній.");
    }
}

void MainWindow::displayBooksList()
{
    qDebug() << "Displaying books list. Current booksList size:" << displayedBooksList.size();

    QString booksInfo;
    for (const auto& book : displayedBooksList) {
        booksInfo += book->toString() + "\n\n";
    }
    if (!booksInfo.isEmpty()) {
        QMessageBox::information(this, "Книги", booksInfo);
    } else {
        QMessageBox::information(this, "Книги", "Список книг порожній.");
    }
}
