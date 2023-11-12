#ifndef CAR_H
#define CAR_H

#include <QString>

class Car
{
public:
    Car(int id, QString model, int year, float price,
        QString registrationNumber, QString vinNumber,
        int passengerSeats, int numberOfDoors);
    virtual ~Car();

    virtual QString toString() const = 0;

    int getId() const;
    QString getModel() const;
    int getYear() const;
    float getPrice() const;
    QString getRegistrationNumber() const;
    QString getVinNumber() const;
    int getPassengerSeats() const;
    int getNumberOfDoors() const;

protected:  // Змінено на protected
    int id;
    QString model;
    int year;
    float price;
    QString registrationNumber;
    QString vinNumber;
    int passengerSeats;
    int numberOfDoors;
};

class ConcreteCar : public Car
{
public:
    ConcreteCar(int id, QString model, int year, float price,
                QString registrationNumber, QString vinNumber,
                int passengerSeats, int numberOfDoors);
    ~ConcreteCar() override;

    QString toString() const override;
};

#endif // CAR_H
