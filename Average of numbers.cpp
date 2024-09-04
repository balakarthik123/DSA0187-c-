#include <iostream>
using namespace std;
int main() {
int n;
double sum = 0;
cout << "Enter the number of elements: ";
cin >> n;
if (n <= 0) {
cout << "Number of elements should be a positive integer." << endl;
return 1;
}
double numbers[n];
cout << "Enter the numbers: ";
for (int i = 0; i < n; i++) {
cin >> numbers[i];
sum += numbers[i]; 
}
double average = sum / n;
cout << "The average of the entered numbers is: " << average << endl;
return 0;
}

