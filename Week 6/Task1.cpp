#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        cout<<"Enter Array element "<<i+1<<" : ";
        cin>>arr[i];
    }


    for(int i=0; i<10; i++){
        if(arr[i]>0)
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<10; i++){
        if(arr[i]<0)
        cout<<arr[i]<<" ";
    }

    return 0;
}
