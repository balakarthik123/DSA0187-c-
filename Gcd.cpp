#include<iostream>
using namespace std;
int gcd(int a,int b){
while(b != 0){
int temp = b;
b = a % b;
a = temp;
}
return a;
}
int main(){
int num1, num2;
cout<<"enter two intagers:";
cin>>num1>>num2;
int result = gcd(num1,num2);
cout<<"the gcd of"<<num1<<"and"<<num2<<"is:"<<result<<endl;
return 0;
}
