#include<iostream>
using namespace std;
int main(){
int n,a,b,c,sum;
cout<<"Enter a 4-digit number: ";
cin>>n;
a = n/1000;
n = n%1000;
b = n/100;
n = n%100;
c = n/10;
n = n%10;

sum = a+b+c+n;
cout<<"Sum of the individual digits: "<<sum; 
return 0;
}