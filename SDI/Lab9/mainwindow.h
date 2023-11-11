#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "car.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void createCarObject();
    void displayCreatedObjects();


private:
    Ui::MainWindow *ui;
    QList<Car*> carList;

};
#endif // MAINWINDOW_H
