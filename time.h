#include <iostream>
using namespace std;

class Time{
    private:
        int hours;
        int minutes;
        int seconds;

    public:
        Time(int,int,int);
        void setTime(int, int, int);
        void setHour(int);
        void setMinute(int);
        void setSecond(int);

        int getHour() const;
        int getMinute() const;
        int getSecond() const;
        ~Time(){};
};