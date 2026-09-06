#pragma once
#include "calisan.h"
#include <iostream>
using namespace std;

class SaatlikCalisan : public Calisan{
    private:
        double saatUcreti;
        int calismaSaati;
    public:
        double maasHesapla() override;
        void bilgiYazdir() override;
        SaatlikCalisan(string ad, string soyad, double saatUcreti, int calismaSaati){
            this->ad = ad;
            this->soyad = soyad;
            this->saatUcreti = saatUcreti;
            this->calismaSaati = calismaSaati;
        }
        ~SaatlikCalisan();
};