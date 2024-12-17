#include<iostream>
using namespace std;
void pet(int holidays);
int main(){
    int holidays;
    cout<<"Enter Holidays: ";
    cin>>holidays;
    pet(holidays);
    return 0;
}
void pet(int holidays){
    int workingDay,diff,games;
    int hour,min;
    workingDay = 365-holidays;
    games = workingDay*63 + holidays *127;
    diff = 30000 - games;
    hour = diff/60;
    min = (diff)%60;
    if(diff>0){
        cout<<"Tom sleeps well\n"<<hour<<" hours "<<min<<" minutes less to play";
        }
    else 
    cout<<"Tom will run away\n"<<(hour*-1)<<" hours "<<(min*-1)<<" minutes for play";
}