#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    int id;
    string model;
    int releaseDate;
    double price;
    string registrationNumber;
    string vinCode;
    int numberOfPassengerSeats;
    int numberOfDoors;

public:
    static int id_s;
    Car() : model(""), releaseDate(0), price(0.0), registrationNumber(""), vinCode(""),
        numberOfPassengerSeats(0), numberOfDoors(0) {
        id_s++;
        id = id_s;
    }
    Car(string model_, int releaseDate_, double price_, string registrationNumber_,
        string vinCode_, int numberOfPassengerSeats_, int numberOfDoors_) :
        model(model_), releaseDate(releaseDate_), price(price_), registrationNumber(registrationNumber_),
        vinCode(vinCode_), numberOfPassengerSeats(numberOfPassengerSeats_), numberOfDoors(numberOfDoors_) {
        id_s++;
        id = id_s;
    }
    Car(const Car& other);

    ~Car() {
        id_s--;
    }

    friend istream& operator>>(istream& is, Car& car);
    friend ostream& operator<<(ostream& os, Car& car);
    friend bool operator==(Car& car1, Car car2);
};
