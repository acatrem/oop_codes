#include "rental.h"
#include "apartment.h"
#include "villa.h"
#include <iostream>
using namespace std;

int main(){
    Rental *rent;
    rent = new Apartment(3,200,3);
    rent->print();
    delete rent;

    rent = new Villa(500,2);
    rent->print();
    delete rent;

    return 0;
}
//derlemek icin: g++ -std=c++17 main.cpp apartment.cpp villa.cpp rental.cpp -o main.exe
//calistirmak icin: ./main.exe