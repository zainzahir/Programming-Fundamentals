#include<iostream>
using namespace std;
void reverse(string value);
int main(){
    string value;
    cout<<"Enter 'true' or 'false': ";
    cin>>value;
    reverse(value);
    return 0;
}
void reverse(string value){
    if(value =="true")
    cout<<"false";
    else if(value =="false")
    cout<<"true";
    else
    cout<<"Invalid input";
}