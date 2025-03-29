#include<iostream>
using namespace std;
int main(){
    float mb;
    cout<<"Enter the size in MB = ";
    cin>>mb;

    cout<<mb<<" is equivalent to = "<<mb*1024*1024*8<<" bits";
    cin.get();
    return 0;
}