#include<iostream>
using namespace std;
int main(){
    float veg_price, fruit_price,earn;
    int veg_kg, fruit_kg;
    cout<<"Enter vegetable price per kilogram (in coins): ";
    cin>>veg_price;
    cout<<"Enter the fruit price per kilogram (in coins): ";
    cin>>fruit_price;
    cout<<"Enter total kilogram of vegetables: ";
    cin>>veg_kg;
    cout<<"Enter total kilogram of fruits: ";
    cin>>fruit_kg;
    earn =((veg_price*veg_kg)+(fruit_price*fruit_kg))/1.94;
    cout<<"Total earning in rupess: "<<earn;
    cin.get();
    return 0;
}