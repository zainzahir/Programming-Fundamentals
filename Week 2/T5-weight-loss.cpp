#include<iostream>
using namespace std;
int main(){
    string name;
    float kg;
    cout<<"Enter your name :";
    cin>>name;
    cout<<"Enter the target (Weight loss in kgs): ";
    cin>>kg;
    cout<<name<<" will required "<<kg*15<<" days to weight loss of "<<kg<<" kgs";
    cin.get();
    return 0;
}