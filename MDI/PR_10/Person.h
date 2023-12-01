#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    int id;
    string model;
    string yearofManufacture;
    string price;
    string registrationNumber;
    string vin;
public:
    virtual void printData() = 0;
    virtual void inputData() = 0;
    friend std::istream& operator >>(std::istream& in, Person& obj);
    friend std::ostream& operator << (std::ostream& stream, Person& obj);
    bool operator ==(const Person& other) const;
    virtual int getId();
    virtual string getModel();
    virtual string getYearofManufacture();
    virtual string getPrice();
    virtual string getRegistrationNumber();
    virtual string getVIN();
    virtual void setId(int id);
    virtual void setModel(std::string model);
    virtual void setYearofManufacture(std::string yearofManufacture);
    virtual void setPrice(std::string price);
    virtual void setRegistrationNumber(std::string registrationNumber);
    virtual void setVIN(std::string vin);
    Person();
    Person(int id, string model, string yearofManufacture, string price, string registrationNumber, string vin);
    Person(const Person& abiturient);
    ~Person();
};
