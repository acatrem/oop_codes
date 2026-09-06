#pragma once
#include "calisan.h"
#include <iostream>
using namespace std;

class KadroluCalisan : public Calisan{
    private:
        double aylikMaas;
    public:
        KadroluCalisan(string ad, string soyad, double maas);
        ~KadroluCalisan() {}
        double maasHesapla() override;
        double getAylikMaas() const;
};