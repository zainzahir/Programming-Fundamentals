#include<iostream>
using namespace std;
int main(){
    int n,i,j,np,sum;
    cout<<"Enter the number = ";
    cin>>n;
    i = 2;
    np=0;
    sum = 0;

    while(i<=n){
        np=0;
        j=2;
    while(j<=(i-1)){
        if(i%j==0)
          np++;
        j = j + 1;
    }
    if(np==0)
       sum += i;
        i = i + 1;
    }
    cout<<"SUM OF PRIME NUMBER IS:"<<sum;
    return 0;
}