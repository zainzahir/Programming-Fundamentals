#include<iostream>
using namespace std;
int main(){
int sqr,w,h;
cout<<"Number of Sqr meters you can paint: ";
cin>>sqr; 
cout<<"Width of single wall (in meters): ";
cin>>w;
cout<<"Height of single wall (in meters): ";
cin>>h;

cout<<"Number of walls you can paint: "<<sqr/(w*h);
return 0;
}