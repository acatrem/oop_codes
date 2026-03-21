#include <iostream>
#include <string>
using namespace std;
class Date{
    friend ostream &operator<<(ostream &, const Date &);
public:
    Date(int m=1, int d=1, int y=1900);
    void setDate(int, int, int);
    Date &operator++();//prefix
    Date operator++(int);//postfix
    const Date &operator+=(int); //add days, modify object
    static bool leapYear(int); // is date in a leap year?
    bool endOfMonth( int ) const; // is date at the end of month?
private:
    int month;
    int day;
    int year;
    static const int days[];
    void helpIncrement();
};
