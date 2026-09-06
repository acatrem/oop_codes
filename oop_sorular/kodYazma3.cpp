#include <iostream>
#include <string>
using namespace std;

class Calisan{
    protected:
        string ad;
        double maas;
    public:
        Calisan(string isim, double maasDegeri){
            this->ad = isim;
            this->maas = maasDegeri;
        }
        void bilgileriGoster(){
            cout << "Calisan Adi: " << this->ad << endl;
            cout << "Calisan Maasi: " << this->maas << endl;
        }
};

class Yonetici : public Calisan{
    private:
        double bonus;
    public:
        Yonetici(string Ad, double Maas, double Bonus) : Calisan(Ad, Maas), bonus(Bonus) {}
        void bilgileriGoster(){
            
            cout << "Yonetici Bonusu: " << this->bonus << endl;
            cout << "Toplam Maas: " << (this->maas + this->bonus) << endl;
        }
};

int main(){
    Calisan calisan1("Mehmet", 3000);
    calisan1.bilgileriGoster();
    cout << "------------------------" << endl;
    Yonetici yonetici1("Ahmet", 5000, 1500);
    yonetici1.bilgileriGoster();
    return 0;
}