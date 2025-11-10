#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    getline(cin, name);
    int length = name.length();
    cout << "Length of the input string: " << length << endl;
    cout << "First character: " << name.at(0) << endl;
    cout << name << endl;
    name.append("BJK");
    cout << name << endl;
    cout << "Substring (2,4): " << name.substr(2, 4) << endl; // starting at index 2, length 4 , prints "JKBJ"
    cout << "Index of 'BJK': " << name.find("BJK") << endl; // prints index where "BJK" starts
    name.erase(0, 3);
    cout << "After erasing first 3 characters: " << name << endl;
    name.insert(0, "XYZ");
    cout << "After inserting 'XYZ' at the beginning: " << name << endl;
    name.replace(0, 3, "123");
    cout << "After replacing first 3 characters with '123': " << name << endl;
    return 0;
}