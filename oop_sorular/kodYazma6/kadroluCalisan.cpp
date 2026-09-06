#include "kadroluCalisan.h"
using namespace std;
#include <iostream>

double KadroluCalisan::maasHesapla(){
    return this->aylikMaas;
}
KadroluCalisan::KadroluCalisan(string ad, string soyad, double maas){
    this->ad = ad;
    this->soyad = soyad;
    this->aylikMaas = maas;
}