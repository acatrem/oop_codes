#pragma once

#include <iostream>
#include <string>
using namespace std;
class Cihaz{
    private:
        string tip;
        bool durum;
    public:
        Cihaz(string tip, bool durum);
        void acKapat();
        string bilgi(string);
};

