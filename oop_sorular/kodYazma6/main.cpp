#include "calisan.h"
#include "kadroluCalisan.h"
#include "saatlikCalisan.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<Calisan*> calisanlar;
    KadroluCalisan* kc2 = new KadroluCalisan("Ali", "Veli", 5000);
    SaatlikCalisan* sc1 = new SaatlikCalisan("Ayse", "Fatma", 50, 160);
    calisanlar.push_back(kc2);
    calisanlar.push_back(sc1);

    for(auto calisan : calisanlar){
        calisan->bilgiYazdir();
        cout << "Maas: " << calisan->maasHesapla() << endl;
        cout << "------------------------" << endl;
        delete calisan;
    }
    
    return 0;
}
// programi calistirmak icin terminale "g++ kodYazma6/main.cpp kodYazma6/calisan.cpp kodYazma6/kadroluCalisan.cpp kodYazma6/saatlikCalisan.cpp -o calisanlar -std=c++17" yazip enterlayiniz.