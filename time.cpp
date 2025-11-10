#include <iostream>
#include "time.h"
using namespace std;

Time::Time(int,int,int) : hours(0), minutes(0), seconds(0) {};

void Time::setTime(int h, int m, int s){
    if(0<h && h<24) hours = h;
    if(0<m && m<60) minutes = m;
    if(0<s && s<60) seconds = s;
}

void Time::setHour(int h){
    if(0<h && h<24) hours = h;
}

void Time::setMinute(int m){
    if(0<m && m<60) minutes = m;
}

void Time::setSecond(int s){
    if(0<s && s<60) seconds = s;
}

int Time::getHour() const{
    return hours;
}

int Time::getMinute() const{
    return minutes;
}
int Time::getSecond() const{
    return seconds;
}

Time::~Time(){
    cout << "Destructor called" << endl;
};
