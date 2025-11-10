#include <iostream>
#include <string>
using namespace std;

class Vehicle{
private:
    string brand;
    int speed;
    int const id;
public:
    Vehicle(string,int,int);
    void accelerate(int);
    void brake(int);
    void displayInfo() const;
    int getID() const;
};