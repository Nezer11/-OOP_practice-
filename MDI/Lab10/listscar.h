#ifndef LISTSCAR_H
#define LISTSCAR_H
#include <QString>

class ListCar
{
public:
    ListCar(int id, const QString& model, int year, float price,
            const QString& registrationNumber, const QString& vinNumber,
            int passengerSeats, int numberOfDoors);

    QString toString() const;

    int getId() const { return id; }
    QString getModel() const { return model; }
    int getYear() const { return year; }
    float getPrice() const { return price; }
    QString getRegistrationNumber() const { return registrationNumber; }
    QString getVinNumber() const { return vinNumber; }
    int getPassengerSeats() const { return passengerSeats; }
    int getNumberOfDoors() const { return numberOfDoors; }

private:
    int id;
    QString model;
    int year;
    float price;
    QString registrationNumber;
    QString vinNumber;
    int passengerSeats;
    int numberOfDoors;
};
#endif // LISTSCAR_H
