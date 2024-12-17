#include<iostream>
using namespace std;
int main(){
    int n1,n2,lcm;
    cout<<"Enter 1st number : ";
    cin>>n1;
    cout<<"Enter 2nd number : ";
    cin>>n2;
    if(n1>n2)
    lcm = n1;
    else 
    lcm = n2;
    while(!(lcm%n1==0 && lcm%n2==0)){
        lcm = lcm + 1;

    }
    cout<<"LCM of "<<n1<<" and "<<n2<<" = "<<lcm;



    return 0;
}