#include <iostream>
using namespace std;

int main(){
    /*
    int x = 7;
    int* p = &x;
    int y = *p + 3; // y is now 10 , since *p dereferences to x which is 7
    cout << "Value of x: " << x << endl; // prints 7
    cout << "Value of y: " << y << endl; // prints 10

    int* z =  &y;
    int w = *z * 2; // w is now 20 , since *z dereferences to y which is 10
    cout << "Value of z (address of y): " << z << endl; // prints address of y
    cout << "Value of w: " << w << endl; // prints 20
    */
    

    /*
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr1 = &arr[2]; // points to the third element (30)  
    int* ptr2 = &arr[4]; // points to the fifth element (50)
    
    cout << ptr2 - ptr1 << endl ; // prints 2, the number of elements between ptr1 and ptr2
    cout << *ptr2 - *ptr1 << endl ; // prints 20, the difference between the values pointed to by ptr2 and ptr1
    */


    /*
    int n = 10;
    int* ptr1 = &n; // pointer to integer türkçe "n'nin adresini tutan bir pointer"
    int** ptr2 = &ptr1; // pointer to pointer türkçe "ptr1'in adresini tutan bir pointer"
    int* ptr3= *ptr2; // türkçe "ptr2'nin işaret ettiği değeri al ve ptr3'e ata", yani ptr3 artık n'nin adresini tutar
    
    cout << **ptr2 << endl; // prints 10, dereferencing ptr2 gives ptr1, dereferencing ptr1 gives n
    cout << *ptr3 << endl; // prints 10, ptr3 points to n
    cout << &n << endl; // prints address of n
    cout << ptr1 << endl; // prints address of n
    cout << ptr2 << endl; // prints address of ptr1
    cout << ptr3 << endl; // prints address of n
    */

    /*
    int arr[2][3] = { {10, 20, 30}, {40, 50, 60} };
    int* p = &arr[0][0];
    for ( int i = 0; i<6 ; i++){
        // cout << *p + i << " "; // prints 10 11 12 13 14 15
        cout << *(p + i) << " "; // prints 10 20 30 40 50 60
    }
    */

    
    int x = 10;

    int* p_int = &x;
    int** p_p_int = &p_int;
    
    cout << "Address of x: " << &x << endl;
    cout << "Value of p_int (Address of x): " << p_int << endl;
    cout << "Value of p_p_int (Address of p_int): " << p_p_int << endl;

    *p_int = 20;
    cout << "New value of x after *p_int = 20: " << x << endl;
    **p_p_int = 30; // dereference p_p_int to get p_int, then dereference p_int to set x
    cout << "New value of x after **p_p_int = 30: " << x << endl;

    

    return 0;
}