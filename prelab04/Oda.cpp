#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Oda.h"

Oda::Oda(string tip){
    this->tip = tip;
}

void Oda::cihazEkle(Cihaz c){
    cihazlar.push_back(c);
}

string Oda::bilgi(){
    return tip;
}

Cihaz Oda::getCihaz(int index){
    return cihazlar[index];
}