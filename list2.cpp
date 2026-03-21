#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    list<int> myList;
    list<int>::iterator iter;

    for(int i=1; i<=5; ++i) myList.push_back(i); // 1 2 3 4 5

    iter = myList.begin();
    ++iter; // iter '2'yi isaret eder
    
    myList.insert(iter,10); // 1 10 2 3 4 5

    //iter hala '2'yi isaret eder
    myList.insert(iter, 2, 20); // 1 10 20 20 2 3 4 5

    --iter; // iter '20'yi isaret ediyor

    vector<int> myVector(2,30);
    myList.insert(iter, myVector.begin(), myVector.end());
    // 1 10 20 30 30 20 2 3 4 5

    cout << "myList contains:";
    for(iter=myList.begin(); iter != myList.end(); ++iter) 
    cout<<" " <<*iter;
    cout<<"\n";
    return 0;
}