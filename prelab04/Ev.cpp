#include <iostream>
#include "Ev.h"
using namespace std;

Ev::Ev(Oda o){
    odalar.push_back(o);
}

void Ev::odaEkle(Oda o){
    odalar.push_back(o);
}

int Ev::bilgi(){
    return odalar.size();
}

Oda Ev::getOda(int index){
    return odalar[index];
}

void Ev::odaSil(){
    odalar.pop_back();
}