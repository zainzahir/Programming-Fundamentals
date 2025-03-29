#include<iostream>
using namespace std;
void inchToFeet(int inches);
int main(){
    float inches;
    cout<<"Enter the measurement in inches: ";
    cin>>inches;
    inchToFeet(inches);

    return 0;
}
void inchToFeet(int inches){
    float feet = inches/12.0;
    cout<<"Equivalent in feet: "<<feet;
}