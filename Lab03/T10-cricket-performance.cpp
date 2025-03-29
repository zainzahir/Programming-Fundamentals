#include<iostream>
using namespace std;
int main(){
    int win,draw,loss,point;
    cout<<"Enter the number of wins = ";
    cin>>win;
    cout<<"Enter the number of draws = ";
    cin>>draw;
    cout<<"Enter the number of losses = ";
    cin>>loss;
    point = (win*3)+(draw*1)+(loss*0);
    cout<<"Pakistan has obtained "<<point<<" in the Asia cup tournament";
    cin.get();
    return 0;
}