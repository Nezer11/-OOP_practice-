#include "Car.h"
 Car:: Car() {
    this->numberofPassengerSeats = "";
    this->numberofDoors = "";

}
 Car:: Car(int id, string models, string yearofManufacture, string registrationNumber,string vin, string numberofPassengerSeats,  string numberofDoors,  string price):Person(id, models, yearofManufacture, registrationNumber, vin, price), numberofPassengerSeats(numberofPassengerSeats),  numberofDoors(numberofDoors) {}
 Car:: Car(const  Car&  car):Person( car){
    this->numberofPassengerSeats = car.numberofPassengerSeats;
    this->numberofDoors = car.numberofDoors;

}

void  Car::printData() {
    cout << "Кількість пасажирських місць = " << numberofPassengerSeats << endl;

                cout << "Кількість дверей = " << numberofDoors << endl;
}

void  Car::inputData() {
    cout << "Введіть кількість пасажирських місць : ";
    cin >> numberofPassengerSeats;
    cout << "Введіть кількість дверей: ";
    cin >> numberofDoors;
}
int  Car::getId() { return Person::getId(); }
string Car::getModel() { return Person::getModel(); }
string Car::getYearofManufacture() { return Person:: getYearofManufacture(); }
string Car::getRegistrationNumber() { return Person:: getRegistrationNumber(); }
string Car::getVIN() { return Person:: getVIN(); }
string Car::getPrice() { return Person:: getPrice(); }
string Car::getNumberofPassengerSeats(){return numberofPassengerSeats; }
string Car::getNumberofDoors(){return numberofDoors; }

void Car::setId(int id) {
    Person::setId(id);
}

void Car::setModel(std::string model) {
    Person::setModel(model);
}

void Car::setYearofManufacture(std::string yearofManufacture) {
    Person::setYearofManufacture(yearofManufacture);
}

void Car::setRegistrationNumber(std::string registrationNumber) {
    Person::setRegistrationNumber(registrationNumber);
}

void Car::setVIN(std::string vin) {
    Person::setVIN(vin);
}

void Car::setPrice(std::string price) {
    Person::setPrice(price);
}

void Car::setNumberofPassengerSeats(std::string numberofPassengerSeats) {
    this->numberofPassengerSeats = numberofPassengerSeats;
}


void Car::setNumberofDoors(std::string numberofDoors) {
    this->numberofDoors = numberofDoors;
}

istream& operator >> (istream& stream, Car& obj)
{
    stream >> static_cast<Person&>(obj);
    cout << "Введіть кількість пасажирських місць: ";
    stream >> obj.numberofPassengerSeats;
    cout << "Введіть кількість дверей: ";
    stream >> obj.numberofDoors;

    return stream;
}
ostream& operator <<(ostream& stream, Car& obj)
{
    stream << static_cast<Person&>(obj);
    stream << "Кількість пасажирських місць = " << obj.numberofPassengerSeats << endl;

                                                                                     stream << "Кількість дверей = " << obj.numberofDoors << endl;
                                                      return stream;
}
bool Car::operator ==(const Car& other) const {
    return(Person::operator==(other))&& numberofPassengerSeats == other.numberofPassengerSeats &&  numberofDoors == other.numberofDoors;
}
Car::~Car() {}
