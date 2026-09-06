#include <iostream>
using namespace std;

template <typename K, typename D>
class Table{
    K key;
    D data;
    public:
        Table(K _key, D _data ) : key(_key), data(_data) {}
        bool getData(K _key, D &_data);
};

template <typename K, typename D>
bool Table<K, D>::getData(K _key, D &_data){
    if(key == _key){
        _data = data;
        return true;
    }else{
        return false;
    }
}


int main(){
    int k=1;
    string d = "test";

    Table<int, string> table1(k, d);

    return 0;
}