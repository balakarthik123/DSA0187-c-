#include <iostream>
using namespace std;
int main() {
int n;
long long sum = 0;  
cout << "Enter the number of terms: ";
cin >> n;
for (int i = 1; i <= n; i++) {
sum += static_cast<long long>(i) * i * i;
}
cout << "The sum of the cubes of the first " << n << " natural numbers is: " << sum << endl;
return 0;
}

