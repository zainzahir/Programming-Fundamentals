#include<iostream>
using namespace std;
void nameLoop(string name);
int main(){
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    nameLoop(name);
    return 0;
}
void nameLoop(string name){
    while(true){
        cout<<" "<<name<<" ";
    }
}