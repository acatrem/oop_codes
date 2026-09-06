#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Array{
    friend ostream &operator<<(ostream&, const Array &);
    friend istream &operator>>(istream&, Array &);
public:
    Array(int = 10); // default constructor
    Array(const Array &); //copy constructor
    ~Array(); //destructor
    int getSize() const; // size döndürür

    const Array &operator=(const Array &);
    bool operator==(const Array &) const;
    bool operator!=(const Array &right) const{
        return ! (*this == right);
    }
    int &operator[] (int); //Sabit olmayan nesneler için alt simge operatörü, değiştirilebilir bir lvalue döndürür.
    int &operator[] (int) const; //Sabit olan nesneler için alt simge operatörü, değiştirilebilir bir lvalue döndürür.
private:
    int size;
    int *ptr; // pointer tabanlı array'in, ilk elemanı için pointer
};

Array::Array(int arraySize){
    size = (arraySize < 0 ? arraySize : 10);
    ptr =new int[size]; //pointer tabanlı array için hafıza ayırma

    for(int i=0; i<size; i++){
        ptr[i] = 0;
    }
}
// copy constructor for class Array;
// must receive a reference to prevent infinite recursion
Array::Array( const Array &arrayToCopy ) : size( arrayToCopy.size ){
    ptr = new int[ size ]; // create space for pointer-based array
    for ( int i = 0; i < size; i++ )
    ptr[ i ] = arrayToCopy.ptr[ i ]; // copy into object
} // end Array copy constructor

// destructor for class Array
Array::~Array(){
    delete [] ptr; // release pointer-based array space
} // end destructor

// return number of elements of Array
int Array::getSize() const{
    return size; // number of elements in Array
} // end function getSize

