#include<iostream>
using namespace std;
int main() {
int num, count = 0;
cout << "Enter a number: ";
cin >> num;
while(num != 0) {
num /= 10;
count++;
}
cout << "Number of digits: " << count << endl;
return 0;
}

