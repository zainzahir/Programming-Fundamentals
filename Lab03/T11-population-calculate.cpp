#include<iostream>
using namespace std;
int main(){
    int population,birth;
    cout<<"Enter the current population in world = ";
    cin>>population;
    cout<<"Enter the no of births per month = ";
    cin>>birth;

    cout<<"The population in three decades is: "<<(birth*12*30)+population;
    cin.get();
    return 0;
}