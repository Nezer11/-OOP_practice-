#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Bike : public Person {
private:
    string maximumSpeed;
    string weight;
public:
    void printData() override;
    void inputData() override;
    friend std::istream& operator >>(std::istream& in, Bike& obj);
    friend std::ostream& operator << (std::ostream& stream, Bike& obj);
    bool operator ==(const Bike& other) const;
    int getId()override;
    string getModel() override;
    string getYearofManufacture() override;
    string getPrice() override;
    string getRegistrationNumber() override;
    string getVIN() override;
    string getMaximumSpeed();
    string getWeight();
    void setId(int id) override;
    void setModel(std::string  model) override;
    void setYearofManufacture(std::string yearofManufacture) override;
    void setPrice(std::string  price) override;
    void setRegistrationNumber(std::string registrationNumber) override;
    void setVIN(std::string vin) override;
    void setMaximumSpeed(std::string maximumSpeed);
    void setWeight(std::string weight);
    Bike();
    Bike(int id, string model, string yearofManufacture, string price, string registrationNumber, string vin, string maximumSpeed, string weight);
    Bike(const Bike& abiturient);
    ~Bike();
};
