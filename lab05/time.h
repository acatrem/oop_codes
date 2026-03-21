#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hour;   // 0-23
    int minute; // 0-59

    void normalize(); // dakika 0-59, saat 0-23 aralığına getirecek

public:
    Time(int h = 0, int m = 0);

    // Ortak kısım: her iki şube de bunları yapmak zorunda
    Time operator+(int minutes) const;          // Time + int
    friend Time operator+(int minutes, const Time& t); // int + Time

    Time& operator++();                         // prefix ++t

    friend ostream& operator<<(ostream& os, const Time& t);
    
    // Ekstra operatörler buranın devamına eklenecek

    int operator-(const Time& other) const;
    bool operator<(const Time& other) const;
    bool operator==(const Time& other) const;
};

Time::Time(int h, int m) : hour(h), minute(m) {
    normalize();
}

void Time::normalize(){
    if( minute >=60 ){
        hour += minute / 60;
        minute = minute % 60;
    }
    if( hour >= 24 ){
        hour = hour % 24;
    }

}

Time Time::operator+(int minutes) const {
    Time result(hour, minute + minutes);
    result.normalize();
    return result;
}

Time operator+(int minutes, const Time& t) {
    return t + minutes; 
}

Time& Time::operator++(){
    minute += 1;
    normalize();
    return *this;
}

ostream& operator<<(ostream& os, const Time& t){
    os << setfill('0') << setw(2) << t.hour << ":" << setfill('0') << setw(2) << t.minute;
    return os;

}

int Time::operator-(const Time& other) const {
    int totalMinutes1 = (this->hour * 60) + this->minute;
    int totalMinutes2 = (other.hour * 60) + other.minute;

    return totalMinutes1 - totalMinutes2;

}

bool Time::operator<(const Time& other) const{
    int totalMinutes1 = (this->hour * 60) + this->minute;
    int totalMinutes2 = (other.hour * 60) + other.minute;
    
    return totalMinutes1 < totalMinutes2;
}

bool Time::operator==(const Time& other) const{
    if(this->hour == other.hour && this->minute == other.minute){
        return true;
    }else{
        return false;
    }
}

