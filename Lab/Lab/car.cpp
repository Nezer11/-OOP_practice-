#include "Car.h"
int Car::id_s = 0;

Car::Car(const Car& other) {
    this->id = other.id;
    this->model = other.model;
    this->releaseDate = other.releaseDate;
    this->price = other.price;
    this->registrationNumber = other.registrationNumber;
    this->vinCode = other.vinCode;
    this->numberOfPassengerSeats = other.numberOfPassengerSeats;
    this->numberOfDoors = other.numberOfDoors;
}

istream& operator>>(istream& is, Car& car) {
    cout << "Enter car model: ";
    getline(is, car.model);
    cout << "Enter release year: ";
    is >> car.releaseDate;
    cout << "Enter price: ";
    is >> car.price;
    is.ignore();
    cout << "Enter registration number: ";
    getline(is, car.registrationNumber);
    cout << "Enter VIN code: ";
    getline(is, car.vinCode);
    cout << "Enter number of passenger seats: ";
    is >> car.numberOfPassengerSeats;
    cout << "Enter number of doors: ";
    is >> car.numberOfDoors;
    is.ignore();
    cout << endl;
    return is;
}

ostream& operator<<(ostream& os, Car& car) {
    os << "Car ID: " << car.id << endl;
    os << "Model: " << car.model << endl;
    os << "Release Year: " << car.releaseDate << endl;
    os << "Price: " << car.price << endl;
    os << "Registration Number: " << car.registrationNumber << endl;
    os << "VIN Code: " << car.vinCode << endl;
    os << "Passenger Seats: " << car.numberOfPassengerSeats << endl;
    os << "Doors: " << car.numberOfDoors << endl << endl;
    return os;
}

bool operator==(Car& car1, Car car2) {
    if (car1.model == car2.model && car1.releaseDate == car2.releaseDate && car1.price == car2.price &&
        car1.registrationNumber == car2.registrationNumber && car1.vinCode == car2.vinCode &&
        car1.numberOfPassengerSeats == car2.numberOfPassengerSeats && car1.numberOfDoors == car2.numberOfDoors)
        return true;
    else
        return false;
}//