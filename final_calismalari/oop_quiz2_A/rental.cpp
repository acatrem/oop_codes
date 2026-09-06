#include "rental.h"
#include <iostream>
using namespace std;

Rental::Rental(double daily, int d) : dailyPrice(daily), day(d) {
    cout << "rental created\n";
}

Rental::~Rental(){
    cout << "rental removed \n";
}

double Rental::getRentalPrice(){
    return dailyPrice * day;
}

void Rental::print() {}