#include <iostream>
#include <string>
using namespace std;

class MusicCD{
private:
    string singer;
    string type;

public:
    MusicCD();
    void printProperties() ;
    string getSinger();
    void setSinger(string);
    string getType();
    void setType(string);

};