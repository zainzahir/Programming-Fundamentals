#include<iostream>
using namespace std;
void voteEligible(int age);
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    voteEligible(age);
    return 0;
}
void voteEligible(int age){
    if(age>=18){
        cout<<"You are eligible to vote";
    }
    else{
        cout<<"You are not eligible to vote";
    }
}