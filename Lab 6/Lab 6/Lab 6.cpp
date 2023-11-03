#include <iostream>
#include <string>

class Car {
private:
    int id;
    std::string model;
    int releaseDate;
    double price;
    std::string registrationNumber;
    std::string vinCode;
    int numberOfPassengerSeats;
    int numberOfDoors;

public:
    static int id_s;
    Car() : model(""), releaseDate(0), price(0.0), registrationNumber(""), vinCode(""),
        numberOfPassengerSeats(0), numberOfDoors(0) {
        id_s++;
        id = id_s;
    }

    Car(std::string model_, int releaseDate_, double price_, std::string registrationNumber_,
        std::string vinCode_, int numberOfPassengerSeats_, int numberOfDoors_) :
        model(model_), releaseDate(releaseDate_), price(price_), registrationNumber(registrationNumber_),
        vinCode(vinCode_), numberOfPassengerSeats(numberOfPassengerSeats_), numberOfDoors(numberOfDoors_) {
        id_s++;
        id = id_s;
    }

    friend std::istream& operator>>(std::istream& is, Car& car);
    friend std::ostream& operator<<(std::ostream& os, const Car& car);

    void enterCarData() {
        std::cout << "Enter Car Data:" << std::endl;
        std::cout << "Model: ";
        std::cin >> model;
        std::cout << "Release Date: ";
        std::cin >> releaseDate;
        std::cout << "Price: ";
        std::cin >> price;
        std::cout << "Registration Number: ";
        std::cin >> registrationNumber;
        std::cout << "VIN Code: ";
        std::cin >> vinCode;
        std::cout << "Number of Passenger Seats: ";
        std::cin >> numberOfPassengerSeats;
        std::cout << "Number of Doors: ";
        std::cin >> numberOfDoors;
    }
};

int Car::id_s = 0;

std::istream& operator>>(std::istream& is, Car& car) {
    is >> car.model >> car.releaseDate >> car.price >> car.registrationNumber >> car.vinCode
        >> car.numberOfPassengerSeats >> car.numberOfDoors;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Car& car) {
    os << "ID: " << car.id << ", Model: " << car.model << ", Release Date: " << car.releaseDate
        << ", Price: " << car.price << ", Registration Number: " << car.registrationNumber
        << ", VIN Code: " << car.vinCode << ", Passenger Seats: " << car.numberOfPassengerSeats
        << ", Doors: " << car.numberOfDoors;
    return os;
}

template <typename T>
class Vector {
private:
    T* array;
    int size;
    int capacity;

public:
    Vector() : size(0), capacity(10) {
        array = new T[capacity];
    }

    ~Vector() {
        delete[] array;
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return capacity;
    }

    void push_back(const T& element) {
        if (size >= capacity) {
            capacity *= 2;
            T* newArray = new T[capacity];
            for (int i = 0; i < size; i++) {
                newArray[i] = array[i];
            }
            delete[] array;
            array = newArray;
        }
        array[size++] = element;
    }

    void pop_back() {
        if (size > 0) {
            size--;
        }
    }

    T at(int index) const {
        if (index >= 0 && index < size) {
            return array[index];
        }
        
    }

    T operator[](int index) const {
        return at(index);
    }
};

int main() {
    using namespace std;
    Vector<Car> carVector;

    char addMore = 'y';

    while (addMore == 'y' || addMore == 'Y') {
        Car car;
        car.enterCarData();
        carVector.push_back(car);

        cout << "Do you want to add more cars? (y/n): ";
        cin >> addMore;
    }

    cout << "Car Vector Size: " << carVector.getSize() << endl;

    for (int i = 0; i < carVector.getSize(); i++) {
        cout << carVector[i] << endl;
    }

    return 0;
}
