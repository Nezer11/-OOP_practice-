#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(int id, const string& lastName, const string& firstName, const string& middleName, const string& address, const string& phone)
        : id(id), lastName(lastName), firstName(firstName), middleName(middleName), address(address), phone(phone) {}

    void display() {
        cout << "ID: " << id << "\n";
        cout << "Name: " << lastName << " " << firstName << " " << middleName << "\n";
        cout << "Address: " << address << "\n";
        cout << "Phone: " << phone << "\n";
    }

protected:
    int id;
    string lastName;
    string firstName;
    string middleName;
    string address;
    string phone;
};

class Student : public Person {
public:
    Student(int id, const string& lastName, const string& firstName, const string& middleName,
        const string& address, const string& phone, const string& faculty, int course, const string& group)
        : Person(id, lastName, firstName, middleName, address, phone), faculty(faculty), course(course), group(group) {}

    void display() {
        Person::display();
        cout << "Faculty: " << faculty << "\n";
        cout << "Course: " << course << "\n";
        cout << "Group: " << group << "\n";
    }

private:
    string faculty;
    int course;
    string group;
};

int main() {
    Student student(1, "Doe", "John", "Robert", "123 Main St", "555-1234", "Computer Science", 2, "CS101");
    student.display();

    return 0;
}
