#include <iostream>
#include "clock.cpp"
using namespace std;

int main(){
	Clock clock1(10, 30, 45);
	Clock clock2(0, 0, 0);
	cout << "Clock 1 time: ";
	clock1.printTime();
	cout << endl;
	cout << "Clock 2 time: ";
	clock2.printTime();
	cout << endl;
	clock2.setTime(10, 30, 45);
	cout << "After setting Clock 2 time to 10:30:45" << endl;
	cout << "Clock 2 time: ";
	clock2.printTime();
	cout << endl;
	if (clock1.equalTime(clock2)) {
		cout << "Clock 1 and Clock 2 show the same time." << endl;
	} else {
		cout << "Clock 1 and Clock 2 show different times." << endl;
	}
	clock1.incrementSeconds();
	cout << "After incrementing seconds of Clock 1:" << endl;
	cout << "Clock 1 time: ";
	clock1.printTime();

	Clock clock3 = clock1 + clock2;
	cout << "\nClock 3 time: ";
	clock3.printTime();

	cout << endl;
	return 0;


}