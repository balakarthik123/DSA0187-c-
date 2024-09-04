#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
int decimalNumber;
cout << "Enter a decimal number: ";
cin >> decimalNumber;
cout << "The hexadecimal equivalent of " << decimalNumber << " is: ";
cout << hex << uppercase << decimalNumber << endl;
return 0;
}

