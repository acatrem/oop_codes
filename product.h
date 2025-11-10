#include <iostream>
#include <string>
using namespace std;

class Product{
private:
    const long id;
    long quantity;
    float price;
public:
    Product();
    Product(long, long, float);
    void display() const;
    bool merge(const Product& other);
    Product operator+(const Product& other) const;

};