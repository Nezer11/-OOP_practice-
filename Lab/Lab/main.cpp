#include "Car.h"

int main() {
    Car car1, car2, car3;

    cout << "Enter data for the first car:" << endl;
    cin >> car1;

    cout << "Enter data for the second car:" << endl;
    cin >> car2;

    cout << "Enter data for the third car:" << endl;
    cin >> car3;

    cout << "Data for the first car:" << endl;
    cout << car1;

    cout << "Data for the second car:" << endl;
    cout << car2;

    cout << "Data for the third car:" << endl;
    cout << car3;

    if (car1 == car2)
        cout << "Car 1 and Car 2 are the same" << endl;
    else
        cout << "Car 1 and Car 2 are not the same" << endl;

    return 0;
}
