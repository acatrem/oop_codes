#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main(){
    list<int> v1; //bos
    int arr[] = {1,2,3,4};

    list<int> v2(arr,arr+4); // arr'daki degerler ile 4 elemanli
    list<int>::iterator iter;

    for(int i=0; i<5; i++){// v1'nin sonuna ve basina 0'dan 4'e kadar deger ekle
        v1.push_back(i);
        v1.push_front(i);
    }

    for(iter = v1.begin() ; iter!=v1.end(); iter++){//v1'nin degerlerini ekrana yazdir
        cout << (*iter) << " ";
    }
    cout<<endl;

    for(int i=0; i<5; i++){ // v2'nin bastan 5 elemanini yaz, sonra sil
        cout << v2.front();
        v2.pop_front();
    }
    cout<<endl;
    return 0;
}