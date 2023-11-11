// car.h
#ifndef CAR_H
#define CAR_H

#include <QString>

class Car
{
public:
    Car(int id, const QString& model, int year, float price, const QString& registrationNumber,
        const QString& vinNumber, int passengerSeats, int numberOfDoors);

    int getId() const;
    QString getModel() const;
    int getYear() const;
    float getPrice() const;
    QString getRegistrationNumber() const;
    QString getVinNumber() const;
    int getPassengerSeats() const;
    int getNumberOfDoors() const;

    QString toString() const;

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

#endif // CAR_H
