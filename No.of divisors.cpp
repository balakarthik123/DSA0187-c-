#include <iostream>
using namespace std;
int main() {
int num, count = 0;
cout << "Enter a positive integer: ";
cin >> num;
if (num <= 0) {
cout << "Please enter a positive integer." << endl;
return 1;
}
for (int i = 1; i <= num; i++) {
if (num % i == 0) {
count++;
}
}
cout << "The number of divisors of " << num << " is: " << count << endl;
return 0;
}

