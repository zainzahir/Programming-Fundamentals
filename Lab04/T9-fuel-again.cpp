#include<iostream>
using namespace std;
void fuel(float distance);
int main(){
    float distance;
    cout<<"Enter the distance: ";
    cin>>distance;
    fuel(distance);

    return 0;
}
void fuel(float distance){
    float fuel;
    fuel= distance*10;
    if(fuel<100){
    cout<<"Fuel needed : 100";
    }
    else 
    cout<<"Fuel needed : "<<fuel;
}