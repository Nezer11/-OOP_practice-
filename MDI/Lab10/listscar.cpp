
#include "listscar.h"

ListCar::ListCar(int id, const QString& model, int year, float price,
                 const QString& registrationNumber, const QString& vinNumber,
                 int passengerSeats, int numberOfDoors)
    : id(id),
    model(model),
    year(year),
    price(price),
    registrationNumber(registrationNumber),
    vinNumber(vinNumber),
    passengerSeats(passengerSeats),
    numberOfDoors(numberOfDoors)
{}

QString ListCar::toString() const
{
    // Форматування рядка для виведення
    return QString("ID: %1\nModel: %2\nYear: %3\nPrice: %4\nRegistration Number: %5\nVIN Number: %6\nPassenger Seats: %7\nNumber of Doors: %8")
        .arg(id)
        .arg(model)
        .arg(year)
        .arg(price)
        .arg(registrationNumber)
        .arg(vinNumber)
        .arg(passengerSeats)
        .arg(numberOfDoors);
}
