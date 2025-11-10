#include <iostream>
#include "vehicle.h"
using namespace std;

Vehicle::Vehicle(string br, int spd, int i) : id(i) {
    brand = br;
    speed = spd;
}

void Vehicle::accelerate(int ivme){
    speed += ivme;
}
void Vehicle::brake(int kesme){
    speed -= kesme;
}
void Vehicle::displayInfo() const{
    cout<<"Brand: "<< brand<< ", Speed: "<< speed<< ", ID: "<< id;
}
int Vehicle::getID() const{
    return id;
}

