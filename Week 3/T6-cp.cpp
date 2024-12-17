#include<iostream>
using namespace std;
void longestTime(float hour, float min);
int main(){
    float hour,min;
    cout<<"Enter hours: ";
    cin>>hour;
    cout<<"Enter the Minutes: ";
    cin>>min;
    longestTime (hour,min);

    return 0;
}
void longestTime(float hour, float min){
    float hourToMin = hour*60;
    if (hourToMin > min)
    cout<<hour;
    else if(hourToMin < min)
    cout<<min;
    else 
    cout<<"Both are equal";
}