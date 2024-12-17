#include<iostream>
using namespace std;
int main(){
    int s,c,a;
    cout<<"Enter the size of fertilizer bag in pounds: ";
    cin>>s;
    cout<<"Enter the cost of bag: ";
    cin>>c;
    cout<<"Enter the area in Sqr ft that can be covered: ";
    cin>>a;

    cout<<"Cost of fertilizer per pound: "<<c/s<<endl;
    cout<<"Cost the fertilizer per Sqr ft: "<<c/a;
    return 0;
}