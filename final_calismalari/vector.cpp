#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1; //bos
    vector<double> v2(10); //10 elemanli
    vector<int> v3(10,4); // 10 elemanli, degerleri 4
    vector<int> v4(v3); //v3'un kopyasi

    for(int i=0; i<5; i++) v1.push_back(i); // v1'in sonuna 0'dan 4'e kadar deger ekle
    for(int i=0; i<5; i++) cout << v1[i] << " ";

    for(int i=0; i<10; i++) v2[i] = i; //v2'ye 0'dan 9'a kadar deger yaz
    for(int i=0; i<5; i++){ //v2'nin sondan 5 elemanini yaz, sonra sil
        cout << v2.back();
        v2.pop_back();
    }

    cout << "size of v2: " << v2.size();
    return 0;
}