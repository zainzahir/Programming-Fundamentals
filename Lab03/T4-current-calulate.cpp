#include<iostream>
using namespace std;
int main(){
    float q,t,i;
    cout<<"Enter the charge (Q) in coulombs = ";
    cin>>q;
    cout<<"Enter the time (t) in seconds = ";
    cin>>t;
    i=q/t;

    cout<<"Current = "<<i<<" amperes";
    cin.get();
    return 0;
}