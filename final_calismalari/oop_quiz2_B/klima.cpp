#include <iostream>
#include "klima.h"
using namespace std;

Klima::Klima(bool d, int s){
    durum = d;
    if(s < 15) sicaklik = 15;
    if(s > 30) sicaklik = 30;
    sicaklik = s;
}

void Klima::operator+=(int artis){
    sicaklik += artis;
    if(sicaklik > 30) sicaklik = 30;
}

Klima& Klima::ac(){
    //durum = !durum;
    if(durum == 0) durum = 1;
    else durum = 0;
    return *this;
}

void Klima::ayar(int i){
    if(i < 15){
        i = 15;
        
    }
    if(i > 30){
        i = 30;
        
    }
    sicaklik = i;
}

void Klima::goster(){
    if(durum == 0) cout << "Klima: kapali, " << this->sicaklik << " derece\n";
    if(durum == 1) cout << "Klima: acik, " << this->sicaklik << " derece\n";
}