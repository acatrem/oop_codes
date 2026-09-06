#include <iostream>
#include <iomanip>
using namespace std;

class Time{
    friend ostream &operator<<(ostream&, const Time&);
    private:
        int saat, dakika;
    public:
        Time(int s=0, int d=0):saat(s), dakika(d){}
        Time& operator++(){
            dakika++;
            if(dakika>=60){
                dakika=0;
                saat++;
                if(saat>=24){
                    saat=0;
                }
            }
            return *this;
        }
};
/*
Bu fonksiyon, nesneyi SS:DD formatında (örneğin 09:05 veya 14:30) ekrana basmalı.

Eğer dakika 10'dan küçükse başına '0' koymalı (örn: 9:5 değil, 9:05).
*/
ostream &operator<<(ostream& out, const Time &t){
    // 2 karakterlik yer ayır, boşluk kalırsa '0' ile doldur , !!!!!!!!
    out << setfill('0') << setw(2) << t.saat << ":" 
        << setw(2) << t.dakika;
    return out;
}

int main(){
    Time t1(9,58);
    

    cout<<t1<<endl; // 09:58

    ++t1;
    cout<<t1<<endl; // 09:59

    ++t1;
    cout<<t1<<endl; // 10:00

    return 0;
}