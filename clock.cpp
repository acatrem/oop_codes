#include <iostream>
#include "clock.h"
using namespace std;

Clock::Clock(){
	hour = 0;
	minute = 0;
	second = 0;
}

Clock::Clock(int h, int m, int s) {
	if (0 <= h && h < 24) {
		hour = h;
	}if (0 <= m && m < 60) {
		minute = m;
	}if (0 <= s && s < 60) {
		second = s;
	}
}

void Clock::setTime(int h, int m, int s) {
	hour = h;
	minute = m;
	second = s;
}

void Clock::getTime(int& h, int& m, int& s) const {
	h = hour;
	m = minute;
	s = second;
}

void Clock::printTime() const {
	cout << hour << " : " << minute << " : " << second;
}

void Clock::incrementSeconds() {
	if (0 <= second && second < 60) {
		second++;
	}
	else {
		second = 0;
	}
}
void Clock::incrementMinutes() {
	if (0 <= minute && minute < 60) {
		minute++;
	}
	else {
		minute = 0;
	}
}
void Clock::incrementHour() {
	if (0 <= hour && hour > 24) {
		hour++;
	}
	else {
		hour = 0;
	}
}
bool Clock::equalTime(const Clock& otherClock) const {
	return (hour == otherClock.hour && minute == otherClock.minute && second == otherClock.second);
}
Clock Clock::operator+(const Clock& otherClock) const {
	Clock sum;
	sum.second = second + otherClock.second;
	sum.minute = minute + otherClock.minute + sum.second / 60;
	sum.hour = hour + otherClock.hour + sum.minute / 60;
	sum.second %= 60;
	sum.minute %= 60;
	sum.hour %= 24;
	return sum;
}


