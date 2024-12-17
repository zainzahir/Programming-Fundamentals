#include<iostream>
using namespace std;
int main(){
    float vi,t,a;
    cout<<"Enter the velocity (m/s): ";
    cin>>vi;
    cout<<"Enter Acceleration (m/s^2): ";
    cin>>a;
    cout<<"Enter the time (s): ";
    cin>>t;
    cout<<"Final velocity (m/s): "<<(a*t)+vi<<" m/s";
    cin.get();
    return 0;
}