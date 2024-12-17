#include<iostream>
using namespace std;
int main(){
    int n,test,i;
    cout<<"Enter the number = ";
    cin>>n;
    test = 0;
    i = 2;
    while(i<=(n-1)){
        if(n%i==0)
        test = test + 1;
        i = i + 1;
    }
    if(test==0)
    cout<<n<<" is a prime number";
    else 
    cout<<n<<" is not a prime number";
    return 0;
}