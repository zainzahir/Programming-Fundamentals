#include<iostream>
using namespace std;
void possibleBonus(int position, int frndPosition);
int main(){
    int position, frndPosition;
    cout<<"Enter your position: ";
    cin>>position;
    cout<<"Enter your friend's position: ";
    cin>>frndPosition;
    possibleBonus(position,frndPosition);
    return 0;
}
void possibleBonus(int position, int frndPosition){
    if((frndPosition-position)<=6)
    cout<<"True";
    else 
    cout<<"False";
}