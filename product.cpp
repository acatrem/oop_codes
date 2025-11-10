#include "product.h"

Product::Product(): id(0), quantity(0), price(0.0){}

Product::Product(long ID, long kalite, float fiyat) : id(ID), quantity(kalite), price(fiyat){}

void Product::display() const{
    cout << "ID: "<< id << endl;
    cout << "Quantity: "<< quantity << endl;
    cout << "Price: " << price << endl;
}

bool Product::merge(const Product& other){
    if( id == other.id && price == other.price){
        quantity += other.quantity;
        return 1;
    }else{
        return 0;
    }
}

Product Product::operator+(const Product& other) const{
    if (id == other.id && price == other.price) {
        return Product(id, quantity + other.quantity, price);
    }
    return Product();
}