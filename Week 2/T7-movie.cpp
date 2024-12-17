#include<iostream>
using namespace std;
int main(){
    string name;
    int aprice,cprice,asold,csold,per,total_price,charity;
    cout<<"Enter the movie name: ";
    cin>>name;
    cout<<"Enter the adult ticket price: ";
    cin>>aprice;
    cout<<"Enter the child ticket price: ";
    cin>>cprice;
    cout<<"Enter the number of adult ticket sold: ";
    cin>>asold;
    cout<<"Enter the number of child ticket sold: ";
    cin>>csold;
    cout<<"Enter the persentage of the amount to be denoted to charity:";
    cin>>per;
    cout<<endl;
    total_price = (aprice*asold)+(cprice*csold);
    charity = total_price*per/100;
    cout<<"Movie : "<<name<<endl;
    cout<<"Total amount generated from ticket sales: "<<total_price<<endl;
    cout<<"Donation to charity "<<per<<": "<<charity<<endl;
    cout<<"Remaining amount after donation:"<<total_price-charity<<endl;
    cin.get();
    return 0;
}