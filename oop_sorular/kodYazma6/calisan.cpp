#include "calisan.h"
#include <iostream>
#include <string>
using namespace std;

void Calisan::bilgiYazdir(){
    cout << "Ad : " << this->ad;
    cout << "Soyad: " << this->soyad << endl;
}

Calisan::~Calisan(){
    cout<< "destructor \"calisan\" "<<endl;
}