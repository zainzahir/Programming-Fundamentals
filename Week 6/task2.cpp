#include<iostream>
using namespace std;
int main(){
    int size, key, index;
    bool found = false;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter Array element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter Element to Search: ";
    cin>>key;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
        index = i;
        found = true;
        break;
        }
    }
    if(found)
        cout<<"Location of searched number is "<<index<<" index of array";
    else
        cout<<"Element not found in this array";
    return 0;
}