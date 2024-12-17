#include<iostream>
using namespace std;
void discount(string country, float price);
int main(){
    string country;
    float price;
    while(true){
    cout<<"Enter the country's name (Pakistan,Ireland,India,Englan,Canada): ";
    cin>>country;
    cout<<"Enter the ticket price in dollars: $";
    cin>>price;
    discount(country,price);
    cout<<endl;
    }


    return 0;
}
void discount(string country, float price){
    float discount;
    if(country== "Pakistan"){
        discount = price - (price * 0.05);
        cout<<"Final ticket price after discount: $"<<discount;        
    }
    else if(country=="Ireland"){
        discount = price - (price * 0.1);
        cout<<"Final ticket price after discount: $"<<discount;
    }
    else if(country=="India"){
        discount = price - (price * 0.2);
        cout<<"Final ticket price after discount: $"<<discount;
    }
    else if(country=="England"){
        discount = price - (price * 0.3);
        cout<<"Final ticket price after discount: $"<<discount;
    }
    else if(country=="Canada"){
        discount = price - (price * 0.45);
        cout<<"Final ticket price after discount: $"<<discount;
    }
    else 
    cout<<"Invalid input";
}