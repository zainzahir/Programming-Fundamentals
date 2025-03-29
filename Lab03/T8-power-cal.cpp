#include<iostream>
using namespace std;
int main(){
    float v,i;
    cout<<"Enter voltage in (volts) = ";
    cin>>v;
    cout<<"Enter current in (ampers) = ";
    cin>>i;
    cout<<"Power = "<<v*i<<" watts";
    cin.get();
    return 0;
}