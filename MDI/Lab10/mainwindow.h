// mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "newdialogcar.h"
#include "newdialogbook.h"
#include "listscar.h"
#include "listsBook.h"
#include <QMainWindow>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void openNewObjectDialogCar();
    void openNewObjectDialogBook();
    void handleCreateCar(int id, QString model, int year, float price,
                         QString registrationNumber, QString vinNumber,
                         int passengerSeats, int numberOfDoors);
    void handleCreateBook(int id, QString title, QString author, QString publisher,
                          int year, int pageCount, float price, bool hasHardcover);
    void displayCarsList();
    void displayBooksList();

private:
    Ui::MainWindow *ui;
    QList<ListCar*> carsList;  // Оголошуємо список автомобілів
    QList<ListBook*> booksList;  // Оголошуємо список книг
    newdialogcar* newDialogCar;
    newdialogbook* newDialogBook;

    // Додано два контейнера для зберігання вказівників на об'єкти
    QList<ListCar*> displayedCarsList;
    QList<ListBook*> displayedBooksList;
};

#endif // MAINWINDOW_H
