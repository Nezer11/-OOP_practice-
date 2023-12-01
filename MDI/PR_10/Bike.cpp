#include "Bike.h"
Bike::Bike() {
    this->maximumSpeed = "";
    this->weight = "";
}
Bike::Bike(int id, string model, string yearofManufacture, string price, string registrationNumber, string vin, string maximumSpeed, string weight)
    :Person(id, model, yearofManufacture, price, registrationNumber, vin), maximumSpeed(maximumSpeed), weight(weight) {}
Bike::Bike(const Bike& Bike):Person(Bike){
    this->maximumSpeed = Bike.maximumSpeed;
    this->weight = Bike.weight;
}

void Bike::printData() {
    cout << "Максимальна швидкість = " << maximumSpeed << endl;
            cout << "Вага = " << weight << endl;
}

void Bike::inputData() {
    cout << "Введіть максимальну швидкість: ";
    cin >> maximumSpeed;
    cout << "Введіть Вагу: ";
    cin >> weight;
}
int Bike::getId() { return Person::getId(); }
string Bike::getModel() { return Person::getModel(); }
string Bike::getYearofManufacture() { return Person:: getYearofManufacture(); }
string Bike::getPrice() { return Person:: getPrice(); }
string Bike::getRegistrationNumber() { return Person:: getRegistrationNumber(); }
string Bike::getVIN() { return Person:: getVIN(); }
string Bike::getMaximumSpeed(){return maximumSpeed; }
string Bike::getWeight(){return weight; }

void Bike::setId(int id) {
    Person::setId(id);
}

void Bike::setModel(std::string model) {
    Person::setModel(model);
}

void Bike::setYearofManufacture(std::string yearofManufacture) {
    Person::setYearofManufacture(yearofManufacture);
}

void Bike::setPrice(std::string price) {
    Person::setPrice(price);
}

void Bike::setRegistrationNumber(std::string registrationNumber) {
    Person::setRegistrationNumber(registrationNumber);
}

void Bike::setVIN(std::string vin) {
    Person::setVIN(vin);
}

void Bike::setMaximumSpeed(std::string maximumSpeed) {
    this->maximumSpeed = maximumSpeed;
}

void Bike::setWeight(std::string weight) {
    this->weight = weight;
}
istream& operator >> (istream& stream, Bike& obj)
{
    stream >> static_cast<Person&>(obj);
    cout << "Введіть максимальну швидкість: ";
    stream >> obj.maximumSpeed;
    cout << "Введіть вагу: ";
    stream >> obj.weight;

    return stream;
}
ostream& operator <<(ostream& stream, Bike& obj)
{
    stream << static_cast<Person&>(obj);
    stream << "Максимальну швидкість = " << obj.maximumSpeed << endl;
                                                        stream << "Вага = " << obj.weight << endl;
                                                          return stream;
}
bool Bike::operator ==(const Bike& other) const {
    return (Person::operator==(other)) && maximumSpeed == other.maximumSpeed && weight == other.weight;
}
Bike::~Bike() {}
