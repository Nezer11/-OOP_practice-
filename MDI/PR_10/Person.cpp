#include "Person.h"
Person::Person() {
    this->id = 0;
    this-> model = "0";
    this->yearofManufacture = "0";
    this->price = "0";
    this->registrationNumber = "0";
    this->vin = "0";
}

Person::Person(int id, string model, string yearofManufacture, string price, string registrationNumber, string vin)
    :id(id), model(model), yearofManufacture(yearofManufacture), price (price ), registrationNumber(registrationNumber), vin(vin){}
Person::Person(const Person& Person) {
    this->id = Person.id;
    this->model = Person.model;
    this->yearofManufacture = Person.yearofManufacture;
    this->price = Person.price;
    this->registrationNumber = Person.registrationNumber;
    this-> vin= Person. vin;
}
int Person::getId() { return id; }
string Person::getModel() { return model; }
string Person::getYearofManufacture() { return yearofManufacture; }
string Person::getPrice() { return price; }
string Person::getRegistrationNumber() { return registrationNumber; }
string Person::getVIN() { return vin; }

void Person::setId(int id) {
    this->id = id;
}

void Person::setModel(std::string model) {
    this->model = model;
}

void Person::setYearofManufacture(std::string yearofManufacture) {
    this->yearofManufacture = yearofManufacture;
}

void Person::setPrice(std::string price) {
    this->price = price;
}

void Person::setRegistrationNumber(std::string registrationNumber) {
    this->registrationNumber = registrationNumber;
}

void Person::setVIN(std::string vin) {
    this->vin = vin;
}

istream& operator >> (istream& stream, Person& obj)
{
    cout << "Введіть ID: ";
    stream >> obj.id;
    cout << "Введіть модель: ";
    stream >> obj.model;
    cout << "Введіть рік випуску: ";
    stream >> obj.yearofManufacture;
    cout << "Введіть ціну: ";
    stream >> obj.price;
    cout << "Введіть реєстраційний номер: ";
    stream >> obj.registrationNumber;
    cout << "Введіть VIN-номер: ";
    stream >> obj.vin;
    return stream;
}
ostream& operator <<(ostream& stream, Person& obj)
{
    stream << "ID = " << obj.id << endl;
    stream << "Модель = " << obj.model << endl;
        stream << "Рік випуску = " << obj.yearofManufacture << endl;
                                                    stream << "Ціна = " << obj.price << endl;
                  stream << "Реєстраційний номер = " << obj.registrationNumber << endl;
                                                                stream << "VIN-номер = " << obj.vin << endl;
        return stream;
}
bool Person::operator ==(const Person& other) const {
    return id == other.id && model == other.model && yearofManufacture == other.yearofManufacture && price == other.price &&
           registrationNumber == other.registrationNumber && vin == other.vin;
}
Person::~Person() {}
