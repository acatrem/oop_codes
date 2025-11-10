/*1’den 100’e kadar asal sayıları listeleyen program. Ama:

50’den sonra döngüyü kır
25’in katı olan sayıları atla (continue)*/

#include <iostream>
using namespace std;

int main(){
    for(int i = 2; i < 100; i++){
        if(i == 50) break;
        if(i % 25 == 0) continue;
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) cout << i << " ";
    }
    return 0;

}
