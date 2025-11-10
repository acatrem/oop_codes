#include "product.cpp"
int main(){
    Product prod1(101, 50, 19.99);
    Product prod2(101, 30, 19.99);
    Product prod3(102, 20, 29.99);

    cout << "Product 1 details:" << endl;
    prod1.display();
    cout << endl;

    cout << "Product 2 details:" << endl;
    prod2.display();
    cout << endl;

    cout << "Merging Product 2 into Product 1..." << endl;
    if(prod1.merge(prod2)){
        cout << "Merge successful!" << endl;
    } else {
        cout << "Merge failed!" << endl;
    }
    cout << "Updated Product 1 details:" << endl;
    prod1.display();
    cout << endl;

    cout << "Attempting to merge Product 3 into Product 1..." << endl;
    if(prod1.merge(prod3)){
        cout << "Merge successful!" << endl;
    } else {
        cout << "Merge failed!" << endl;
    }
    cout << "Final Product 1 details:" << endl;
    prod1.display();

    Product prod4 = prod1 + prod2;
    cout << endl << "Product 4 (sum of Product 1 and Product 2) details:" << endl;
    prod4.display();

    return 0;
}