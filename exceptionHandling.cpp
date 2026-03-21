#include <iostream>
#include <string>
using namespace std;

double divide(int a, int b){
    if(b == 0) throw string("divide by zero");
    return a/b;
}

int main(){
    int x = 1, y = 2;
    double result;

    try{
        result = divide(x, y);
        cout << "Result: " << result << endl;
        if (result < 1) throw string("result is less than 1");
    }catch(string s){
        cout << s << endl;
    }catch(int e){
        cout << "Caught integer exception: " << e << endl;
    }
    
    return 0;
}