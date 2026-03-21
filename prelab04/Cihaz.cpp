#include <iostream>
#include "Cihaz.h"
using namespace std;

Cihaz::Cihaz(string tip, bool durum){
    this->tip = tip;
    this->durum = durum;
}

void Cihaz::acKapat(){
    durum == 1 ? durum = 0 : durum = 1 ;
}

string Cihaz::bilgi(string x){
    if(x == "tip") return tip;
    else if(x == "durum"){
        if (durum == true) return "Acik";
        else return "Kapali";
    }
    else return "";
    
}