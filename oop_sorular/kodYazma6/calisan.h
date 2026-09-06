#pragma once
#include <iostream>
#include <string>
using namespace std;

class Calisan{
    protected:
        string ad;
        string soyad;
    public:
        virtual double maasHesapla()=0;
        virtual void bilgiYazdir();
        virtual ~Calisan();
        
};