// newdialogcar.h
#ifndef NEWDIALOGCAR_H
#define NEWDIALOGCAR_H

#include <QLabel>
#include <QDialog>
#include <QLineEdit>


namespace Ui {
class newdialogcar;
}

class newdialogcar : public QDialog
{
    Q_OBJECT

public:
     newdialogcar(QWidget *parent = nullptr);
    ~newdialogcar();  // Add the destructor declaration



signals:
    void createCarRequested(int id, QString model,
                            int year,
                            float price,
                            QString registrationNumber,
                            QString vinNumber,
                            int passengerSeats,
                             int numberOfDoors);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::newdialogcar *ui;
    QLineEdit *idLineEdit;
    QLineEdit *modelLineEdit;
    QLineEdit *yearLineEdit;
    QLineEdit *priceLineEdit;
    QLineEdit *registrationNumberLineEdit;
    QLineEdit *vinNumberLineEdit;
    QLineEdit *passengerSeatsLineEdit;
    QLineEdit *numberOfDoorsLineEdit;
    QPushButton *createButton;

    QLabel *createLabel(const QString &text);
    void clearFields();
};

#endif // NEWDIALOGCAR_H

