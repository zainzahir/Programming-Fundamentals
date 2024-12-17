#include<iostream>
using namespace std;
int main(){
    int arr[10];
    bool inc = false, dec = false, constant = true, incToDec = false, DecToinc = false;
    for(int i=0; i<10; i++){
        cout<<"Enter Array element "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=0; i<9; i++){
        if(arr[i]<arr[i+1]){
           inc = true;
           constant = false;
           if(dec){
            DecToinc = true;
           }
        }
        else if(arr[i]>arr[i+1]){
            dec = true;
            constant = false;
            if(inc){
                incToDec = true;
            }
        }

    }
    if(inc && !dec)
        cout<<"Array is increasing";
    else if(dec && !inc)
        cout<<"Array is decreasing";
    else if(constant)
        cout<<"Array is constant";
    else if(incToDec)
        cout<<"Array is increasing and decreasing";
    else if(DecToinc)
        cout<<"Array is decreasing and increasing";
    else 
        cout<<"Array is mixed";

    return 0;
}