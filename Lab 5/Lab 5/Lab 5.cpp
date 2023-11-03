#include <iostream>
#include <string>

using namespace std;

class BaseClass {
public:
    virtual void abstractMethod() = 0;
    virtual void inputDetails() = 0;
};

class DerivedClass1 : public BaseClass {
public:
    string detail;

    void abstractMethod() override {
        cout << "Реалізація 1: " << detail << endl;
    }

    void inputDetails() override {
<<<<<<< HEAD
        cout << "Введіть деталі для DerivedClass1: ";
=======
        cout << "Введіть деталі для Реалізація 1: ";
>>>>>>> PR6
        cin >> detail;
    }
};

class DerivedClass2 : public BaseClass {
public:
    string detail;

    void abstractMethod() override {
        cout << "Реалізація 2: " << detail << endl;
    }

    void inputDetails() override {
<<<<<<< HEAD
        cout << "Введіть деталі для DerivedClass2: ";
=======
        cout << "Введіть деталі для Реалізація 2: ";
>>>>>>> PR6
        cin >> detail;
    }
};

void printMenu() {
    cout << "Меню:" << endl;
<<<<<<< HEAD
    cout << "1. Створити об'єкт DerivedClass1" << endl;
    cout << "2. Створити об'єкт DerivedClass2" << endl;
=======
    cout << "1. Створити об'єкт Реалізація 1" << endl;
    cout << "2. Створити об'єкт Реалізація 2" << endl;
>>>>>>> PR6
    cout << "3. Вийти" << endl;
    cout << "Виберіть опцію: ";
}

int main() {
    setlocale(LC_CTYPE, "ukr");
    BaseClass* objects[5] = { nullptr };
    int choice;
    int index = 0;

    while (index < 5) {
        printMenu();
        cin >> choice;

        if (choice == 1) {
            objects[index] = new DerivedClass1();
        }
        else if (choice == 2) {
            objects[index] = new DerivedClass2();
        }
        else if (choice == 3) {
            break;
        }
        else {
            cout << "Неправильний вибір. Спробуйте ще раз." << endl;
            continue;
        }

        objects[index]->inputDetails();
        index++;
    }

    cout << "Дані створених об'єктів:" << endl;
    for (int i = 0; i < index; i++) {
        objects[i]->abstractMethod();
        delete objects[i];
    }

    return 0;
}
<<<<<<< HEAD
<<<<<<< HEAD

=======

>>>>>>> PR5
=======

>>>>>>> PR6
