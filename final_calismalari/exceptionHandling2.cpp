#include <iostream>
#include <string>
using namespace std;

class Error{
    public:
        string getMsg(){
            return "divide by zero";
        }
};

double divide(int a, int b){
    if(b<0) throw (string)"Denominator is negative";
    if(b==0){
        Error e;
        throw e;
    }
    return a/b;
}

int main(){
    int x,y;
    double result;

    try{
        result = divide(1,0);
    }catch(string &s){
        cout << s << endl;
    }catch(Error &e){
        cout << e.getMsg() << endl;
    }
    return 0;
}