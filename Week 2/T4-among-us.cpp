#include<iostream>
using namespace std;
int main(){
    int i,p;
    cout<<"Enter the imposter count: ";
    cin>>i;
    cout<<"Enter the player count: ";
    cin>>p;
    
    cout<<"Chance of being imposter : "<<100*i/p<<"%";
    cin.get();
    return 0;
}