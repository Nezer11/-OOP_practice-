// car.cpp
#include "car.h"

Car::Car(int id, const QString& model, int year, float price, const QString& registrationNumber,
         const QString& vinNumber, int passengerSeats, int numberOfDoors)
    : id(id), model(model), year(year), price(price), registrationNumber(registrationNumber),
      vinNumber(vinNumber), passengerSeats(passengerSeats), numberOfDoors(numberOfDoors)
{}

int Car::getId() const
{
    return id;
}

QString Car::getModel() const
{
    return model;
}

int Car::getYear() const
{
    return year;
}

float Car::getPrice() const
{
    return price;
}

QString Car::getRegistrationNumber() const
{
    return registrationNumber;
}

QString Car::getVinNumber() const
{
    return vinNumber;
}

int Car::getPassengerSeats() const
{
    return passengerSeats;
}

int Car::getNumberOfDoors() const
{
    return numberOfDoors;
}

QString Car::toString() const
{
    return "ID: " + QString::number(id) + "\nМодель: " + model + "\nРік: " + QString::number(year) +
           "\nЦіна: " + QString::number(price) + "\nРеєстраційний номер: " + registrationNumber +
           "\nVIN-номер: " + vinNumber + "\nКількість пасажирських місць: " +
           QString::number(passengerSeats) + "\nКількість дверей: " + QString::number(numberOfDoors);
}
