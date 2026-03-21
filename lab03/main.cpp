#include "musicCD.cpp"

int main(){
    string singerName, typeName;
    cout<<"Enter singer name: ";
    getline(cin, singerName);
    cout<<"\nEnter type of music: ";
    getline(cin, typeName);

    MusicCD cd1;
    cd1.setSinger(singerName);
    cd1.setType(typeName);
    cd1.printProperties();

    return 0;
}