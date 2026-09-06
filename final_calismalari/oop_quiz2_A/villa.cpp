#include "villa.h"
#include <iostream>
using namespace std;

Villa::Villa(double daily,int d) : Rental(daily, d) {
    cout << "rental villa created\n";
}

Villa::~Villa(){
    cout << "rental villa removed\n";
}

void Villa::print(){
    cout << "rental villa, " << "rental price: "<< this->getRentalPrice() << endl; 
}