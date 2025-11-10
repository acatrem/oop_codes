#include <iostream>
#include "vehicle.cpp"
using namespace std;

int main(){
    Vehicle car1("Toyota", 0, 1);
    Vehicle const car2("Honda", 0, 2);

    car1.accelerate(50); // non-const - non-const member function can be called
    // car2.accelerate(60);  // const - non-const member function cannot be called on const object
 
    cout << "Car 1 Info: ";
    car1.displayInfo(); // non-const - const member function can be called
    cout << endl;

    cout << "Car 2 Info: ";
    car2.displayInfo(); // const - const member function can be called
    cout << endl;

    car1.brake(20);
    // car2.brake(30);  // This line would cause a compilation error since car2 is const

    cout << "After braking:" << endl;

    cout << "Car 1 Info: ";
    car1.displayInfo();
    cout << endl;

    cout << "Car 2 Info: ";
    car2.displayInfo();
    cout << endl;

    return 0;

}