#include "saatlikCalisan.h"
#include <iostream>
using namespace std;

double SaatlikCalisan::maasHesapla(){
    return this->calismaSaati * this->saatUcreti;
}

void SaatlikCalisan::bilgiYazdir(){
    cout << "Ad : " << this->ad;
    cout << "Soyad: " << this->soyad << endl;
    cout << "Saatlik Calisan Maas: " << this->maasHesapla() << endl;
}

SaatlikCalisan::~SaatlikCalisan(){
    cout<< "destructor \"saatlik calisan\" "<<endl;
}