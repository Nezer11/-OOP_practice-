#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Car : public Person{
private:
    string numberofPassengerSeats;
    string numberofDoors;
public:
    void printData() override;

    void inputData() override;
    friend std::istream& operator >>(std::istream& in,  Car& obj);
    friend std::ostream& operator << (std::ostream& stream,  Car& obj);
    bool operator ==(const  Car& other) const;
    int getId()override;
    string getModel() override;
    string getYearofManufacture() override;
    string getPrice() override;
    string getRegistrationNumber() override;
    string getVIN() override;
    string getNumberofPassengerSeats();
    string getNumberofDoors();
    void setId(int id) override;
    void setModel(std::string model) override;
    void setYearofManufacture(std::string yearofManufacture) override;
    void setPrice(std::string price) override;
    void setRegistrationNumber(std::string registrationNumber) override;
    void setVIN(std::string vin) override;
    void setNumberofPassengerSeats(std::string numberofPassengerSeats);
    void setNumberofDoors(std::string numberofDoors);
    Car();
    Car(int id, string model, string  yearofManufacture, string price, string registrationNumber, string vin, string numberofPassengerSeats,  string numberofDoors);
    Car(const  Car&  car);
    ~ Car();
};
