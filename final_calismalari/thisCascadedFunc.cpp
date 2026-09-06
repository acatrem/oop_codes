#include <iostream>
#include <iomanip>
using namespace std;
// Birden çok fonksiyon çağrısı, tek bir komut içinde yapılabilmektedir

class Time{
    public:
        Time(int hr = 0, int min = 0, int sec = 0){
            setTime(hr, min, sec);
        }
        Time &setTime(int h, int m, int s){
            setHour(h);
            setMinute(m);
            setSecond(s);
            return *this; // cascading'i etkinleştirir
        }
        Time &setHour(int h){
            hour = ( h >= 0 && h < 24 ) ? h : 0;
            return *this; // cascading'i etkinleştirir
        }
        Time &setMinute(int m){
            minute = ( m >= 0 && m < 60 ) ? m : 0;
            return *this; // cascading'i etkinleştirir
        }
        Time &setSecond(int s){
            second = ( s >= 0 && s < 60 ) ? s : 0;
            return *this; // cascading'i etkinleştirir
        }

        int getHour() const{
            return hour;
        }
        int getMinute() const{
            return minute;
        }
        int getSecond() const{
            return second;
        }

        void printUniversal() const{
            cout << setfill( '0' ) << setw( 2 ) << hour << ":" << setw( 2 ) << minute << ":" << setw( 2 ) << second;
        }
        void printStandard() const{
            cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
            << ":" << setfill( '0' ) << setw( 2 ) << minute
            <<":"<< setw( 2 ) << second << (hour<12 ? " AM":" PM" );
        }
    private:
        int hour;
        int minute;
        int second;
};

int main(){
    Time t; // create Time object
    // cascaded function calls
    t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );
    // output time in universal and standard formats
    cout << "Universal time: ";
    t.printUniversal();
    cout << "\nStandard time: ";
    t.printStandard();
    cout << "\n\nNew standard time: ";
    // cascaded function calls
    t.setTime( 20, 20, 20 ).printStandard();
    cout << endl;
    return 0;
}