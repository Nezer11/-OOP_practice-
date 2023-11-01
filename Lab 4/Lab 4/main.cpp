#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    // Конструктор за замовчуванням
    Person()
        : id(0), lastName(""), firstName(""), middleName(""), address(""), phone(""), faculty(""), course(0), group("") {}

    // Конструктор з параметрами
    Person(int id, const string& lastName, const string& firstName, const string& middleName, const string& address, const string& phone, const string& faculty, int course, const string& group)
        : id(id), lastName(lastName), firstName(firstName), middleName(middleName), address(address), phone(phone), faculty(faculty), course(course), group(group) {}

    void display() {
        cout << "ID: " << id << "\n";
        cout << "Name: " << lastName << " " << firstName << " " << middleName << "\n";
        cout << "Address: " << address << "\n";
        cout << "Phone: " << phone << "\n";
        cout << "Faculty: " << faculty << "\n";
        cout << "Course: " << course << "\n";
        cout << "Group: " << group << "\n";
    }

    // Функція для введення даних з клавіатури
    void inputFromKeyboard() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Last Name: ";
        cin >> lastName;
        cout << "Enter First Name: ";
        cin >> firstName;
        cout << "Enter Middle Name: ";
        cin >> middleName;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Phone: ";
        cin >> phone;
        cout << "Enter Faculty: ";
        cin >> faculty;
        cout << "Enter Course: ";
        cin >> course;
        cout << "Enter Group: ";
        cin >> group;
    }

protected:
    int id;
    string lastName;
    string firstName;
    string middleName;
    string address;
    string phone;
    string faculty;
    int course;
    string group;
};

class Student : public Person {
public:
    Student() = default;
};

int main() {
    Student student;
    student.inputFromKeyboard(); // Викликаємо функцію введення даних з клавіатури
    student.display(); // Виводимо дані студента

    return 0;
}
