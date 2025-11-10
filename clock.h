#pragma once
#include <iostream>
using namespace std;

class Clock {
private:
	int hour;
	int minute;
	int second;

public:

	Clock(); // 0, 0, 0
	Clock(int, int, int);
	void setTime(int, int, int);
	void getTime(int&, int&, int&) const;
	void printTime() const;
	void incrementSeconds();
	void incrementMinutes();
	void incrementHour();
	bool equalTime(const Clock&) const;
	Clock operator+(const Clock&) const;
};
