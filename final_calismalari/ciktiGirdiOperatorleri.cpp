#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class PhoneNumber
{
public:
    friend ostream& operator<<(ostream&, const PhoneNumber&);
    friend istream& operator>>(istream&, PhoneNumber&);
private:
    string areaCode;
    string exchange;
    string lineNumber;

};

ostream& operator<<(ostream& output, const PhoneNumber& number)
{
    output << "(" << number.areaCode << ") " << number.exchange << "-" << number.lineNumber;
    return output;
}
istream& operator>>(istream& input, PhoneNumber& number)
{
    input.ignore(); // '('
    input >> setw(3) >> number.areaCode;
    input.ignore(2); // ") "
    input >> setw(3) >> number.exchange;
    input.ignore(); // '-'
    input >> setw(4) >> number.lineNumber;
    return input;
}

int main()
{
    PhoneNumber phone;
    cout << "Enter phone number in the form (123) 456-7890: ";
    cin >> phone;
    cout << "The phone number entered is: " << phone << endl;
    return 0;
}