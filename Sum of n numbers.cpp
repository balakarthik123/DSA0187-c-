#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter a positive integer: ";
cin >> n;
int sum = (n * (n + 1)) / 2;
cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
return 0;
}

