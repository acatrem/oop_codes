#include "apartment.h"
#include <iostream>
using namespace std;

Apartment :: Apartment(int flo, double daily, int d) : Rental(daily,d), floor(flo) {
    cout << "rental apartment created\n";
}

Apartment :: ~Apartment(){
    cout << " \"rental apartment\" removed\n";
}

void Apartment::print(){
    cout << "rental apartment, rental price: " << getRentalPrice() << ", floor : " << floor << endl;
}
