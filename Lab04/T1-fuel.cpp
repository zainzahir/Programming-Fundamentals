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
    cout<<"Fuel needed : "<<fuel;
}
