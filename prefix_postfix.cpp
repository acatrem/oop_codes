#include <iostream>
using namespace std;
void show(int x){
    ++x;    
    cout << "Value: " << x << endl;
        
}

int main(){
    int i = 5;
    cout << i++ << endl; // prints 5 , then i becomes 6
    cout << ++i << endl; // i becomes 7 , then prints 7

    int a = 3;
    int b = ++a + a++; // a is incremented to 4, then used in the expression (4 + 4), then a is incremented to 5
    cout << "a: " << a << ", b: " << b << endl; // prints a: 5, b: 8


    // döngüde kullanımı
    for(int i = 0; i < 5; i++) cout << "Postfix i: " << i << endl; // prints 0 to 4
    for(int j = 0; j < 5; ++j) cout << "Prefix j: " << j << endl; // prints 0 to 4
    // döngüde fark etmez çünkü artış döngü sonunda gerçekleşir

    
    show(i++); // prints 10 , then i becomes 11
    show(++i); // i becomes 12 , then prints 12


    return 0;
}