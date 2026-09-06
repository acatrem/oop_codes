#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    int num[] = {1,2,3,4};
    string str[]={"ali", "veli"};

    vector<int> vec(num, num+4); //initialize
    list<string> li(str, str+2);
    
    vector<int>::iterator vecIter;
    list<string>::reverse_iterator liIter;

    liIter=li.rbegin(); //iterate backwards
    while(liIter != li.rend()) cout<<*liIter++ << " ";
    return 0;
}