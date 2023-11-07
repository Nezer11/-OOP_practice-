#include <iostream>
#include <list>
#include <map>
#include <iterator>
#include <algorithm>
#include <random>

using namespace std;

class Car {
public:
    Car(int id, const string& make, const string& model)
        : id(id), make(make), model(model) {
    }

    void print() {
        cout << "Car ID: " << id << ", Make: " << make << ", Model: " << model << endl;
    }

    int getId() const {
        return id;
    }

    string getMake() const {
        return make;
    }

    string getModel() const {
        return model;
    }

private:
    int id;
    string make;
    string model;
};

class DerivedCar : public Car {
public:
    DerivedCar(int id, const string& make, const string& model, const string& feature)
        : Car(id, make, model), feature(feature) {
    }

    void print() {
        cout << "Derived Car ID: " << getId() << ", Make: " << getMake() << ", Model: " << getModel() << ", Feature: " << feature << endl;
    }

private:
    string feature;
};

int main() {
    setlocale(LC_ALL, "ukr");
    list<int> oddNumbers;
    list<int> evenNumbers;
    list<int> mergedNumbers;

    
    for (int i = 1; i <= 19; i += 2) {
        oddNumbers.push_back(i);
    }

  
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 100);

    for (int i = 0; i < 10; i++) {
        evenNumbers.push_back(dist(gen) * 2);
    }

   
    oddNumbers.sort();
    evenNumbers.sort();

  
    merge(oddNumbers.begin(), oddNumbers.end(), evenNumbers.begin(), evenNumbers.end(), back_inserter(mergedNumbers));

    map<int, Car*> carMap;

    
    carMap[1] = new Car(1, "Toyota", "Camry");
    carMap[2] = new DerivedCar(2, "Ford", "Focus", "Sport");
    carMap[3] = new Car(3, "Honda", "Civic");
    carMap[4] = new DerivedCar(4, "Chevrolet", "Malibu", "Luxury");

    int choice;
    do {
        cout << "Оберіть опцію:" << endl;
        cout << "1. Додати об'єкт класу Car до контейнера" << endl;
        cout << "2. Додати об'єкт класу DerivedCar до контейнера" << endl;
        cout << "3. Вивести об'єкт з контейнера за Id" << endl;
        cout << "4. Вийти" << endl;
        cin >> choice;

        if (choice == 1) {
            int id;
            string make, model;
            cout << "Введіть ID: ";
            cin >> id;
            cout << "Введіть виробника: ";
            cin >> make;
            cout << "Введіть модель: ";
            cin >> model;
            carMap[id] = new Car(id, make, model);
        }
        else if (choice == 2) {
            int id;
            string make, model, feature;
            cout << "Введіть ID: ";
            cin >> id;
            cout << "Введіть виробника: ";
            cin >> make;
            cout << "Введіть модель: ";
            cin >> model;
            cout << "Введіть особливість: ";
            cin >> feature;
            carMap[id] = new DerivedCar(id, make, model, feature);
        }
        else if (choice == 3) {
            int idToFind;
            cout << "Введіть ID для пошуку: ";
            cin >> idToFind;

            // Пошук та виведення об'єкта за Id
            auto it = carMap.find(idToFind);
            if (it != carMap.end()) {
                it->second->print();
            }
            else {
                cout << "Об'єкт з таким ID не знайдено." << endl;
            }
        }

    } while (choice != 4);

    // Звільнимо пам'ять від вказівників
    for (const auto& pair : carMap) {
        delete pair.second;
    }

    return 0;
}
