#include <iostream>
using namespace std;
int main() {
int decimalNumber, octalNumber = 0, placeValue = 1;
cout << "Enter a decimal number: ";
cin >> decimalNumber;
int tempDecimalNumber = decimalNumber;  
while (tempDecimalNumber > 0) {
int remainder = tempDecimalNumber % 8;  
octalNumber += remainder * placeValue;
placeValue *= 10;  
tempDecimalNumber /= 8;  
}
cout << "The octal equivalent of " << decimalNumber << " is: " << octalNumber << endl;
return 0;
}

