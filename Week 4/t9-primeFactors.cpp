#include<iostream>
using namespace std;
int main(){
    int n,i,j,np;
    cout<<"Enter the number = ";
    cin>>n;
    i = 2;
    np=0;


    while(i<=n){
        np=0;
        j=2;
    while(j<=(i-1)){
        if(i%j==0)
          np++;
        j = j + 1;
    }
    if(np==0){
        if(n%i==0)
       cout<<i<<endl;
       }
        i = i + 1;
    }
    return 0;
}