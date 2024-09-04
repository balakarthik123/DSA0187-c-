#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter the number of rows (odd number): ";
cin >> n;
if (n % 2 == 0) {
cout << "Please enter an odd number." << endl;
return 1;
}
int mid = n / 2; 
for (int i = 0; i <= mid; i++) {
for (int j = 0; j < mid - i; j++) {
cout << " "; 
}
for (int j = 0; j < 2 * i + 1; j++) {
if (j == 0 || j == 2 * i) {
cout << "*"; 
} else {
cout << " "; 
}
}
cout << endl;
}
for (int i = mid - 1; i >= 0; i--) {
for (int j = 0; j < mid - i; j++) {
cout << " "; 
}
for (int j = 0; j < 2 * i + 1; j++) {
if (j == 0 || j == 2 * i) {
cout << "*"; 
} else {
cout << " "; 
}
}
cout << endl;
}
return 0;
}

