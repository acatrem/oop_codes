#include <iostream>
using namespace std;

class Box{
    private:
        int genislik, yukseklik, derinlik;
        static int kutuSayisi;
    public:
        Box(int g, int y, int d) : genislik(g), yukseklik(y), derinlik(d){
            kutuSayisi++;
        }
        ~Box(){
            kutuSayisi--;
        }
        Box& boyutAyarla(int g, int y, int d){
            genislik = g;
            yukseklik = y;
            derinlik = d;
            return *this;
        }
        int hacimHesapla() const{
            return genislik * yukseklik * derinlik;
        }
        static int getKutuSayisi(){
            return kutuSayisi;
        }
};

int Box::kutuSayisi = 0; // !!!!!!!!!!!!!!!!!!!!!!!!!!!

int main(){
    Box k1(10, 20, 30);
    Box k2(5, 5, 5);
    k1.boyutAyarla(1, 1, 1).boyutAyarla(2, 3, 4); // Zincirleme çağrı
    cout << Box::getKutuSayisi(); // Çıktı: 2 olmalı
    cout << "\nKutu 1 Hacmi: " << k1.hacimHesapla(); // Çıktı: 24
    cout << "\nKutu 2 Hacmi: " << k2.hacimHesapla(); // Çıktı: 125
    {
        Box k3(2, 2, 2);
        cout << "\nKutu Sayisi (k3 içinde): " << Box::getKutuSayisi(); // Çıktı: 3
    }
    cout << "\nKutu Sayisi (k3 dışında): " << Box::getKutuSayisi(); // Çıktı: 2
    return 0;
}