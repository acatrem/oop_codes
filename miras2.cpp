#include <iostream>
using namespace std;

class Vehicle{
protected:
    int wheelNum;
    float weight;
public:
    void setWheelNum(int w){
        wheelNum = w;
    }
};

class Car : public Vehicle{
    int passengerNum;
public:
    void setPassengerNum(int p){
        passengerNum = p;
    }
};

int main(){
    Vehicle vehicle1;
    Car car1;
    car1.setWheelNum(4);
    vehicle1.setWheelNum(0);
    car1.setPassengerNum(5);
    car1.wheelNum = 4; // Error: 'wheelNum' is protected within this context
    return 0;
}