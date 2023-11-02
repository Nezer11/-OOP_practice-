#include <iostream>
using namespace std;

#include <iostream>

class BaseClass {
public:
    virtual void abstractMethod() = 0;
};

class DerivedClass1 : public BaseClass {
public:
    void abstractMethod() override {
        cout << "1" << endl;
    }
};

class DerivedClass2 : public BaseClass {
public:
    void abstractMethod() override {
        cout << "2" << endl;
    }
};

int main() {
    setlocale(LC_CTYPE, "ukr");
    DerivedClass1 object1;
    DerivedClass2 object2;

    BaseClass* ptr1 = &object1;
    BaseClass* ptr2 = &object2;

    ptr1->abstractMethod();
    ptr2->abstractMethod();

    return 0;
}
