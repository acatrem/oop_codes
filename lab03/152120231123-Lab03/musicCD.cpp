#include "musicCD.h"

MusicCD::MusicCD(){
    singer = "";
    type = "";
}

void MusicCD::printProperties(){
    cout << "Singer: " << singer << ", Type: " << type << endl;
}

string MusicCD::getSinger(){
    return singer;
}

void MusicCD::setSinger(string _singer){
    singer = _singer;
}

string MusicCD::getType(){
    return type;
}

void MusicCD::setType(string _type){
    type = _type;
}