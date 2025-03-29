#include<iostream>
using namespace std;
void evenOrOdd(int num);
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    evenOrOdd(num);
    return 0;
}
void evenOrOdd(int num){
    if(num%2==0)
    cout<<num<<" is even";
    else
    cout<<num<<" is odd";
}