#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int
tulip) ;
int main(){
    int redRose, whiteRose, tulip;
    cout<<"Enter Red rose: ";
    cin>>redRose;
    cout<<"Enter White Rose: ";
    cin>>whiteRose;
    cout<<"Enter Tulips: ";
    cin>>tulip;
    flowerShop(redRose,whiteRose,tulip);
    return 0;
}
void flowerShop(int redRose, int whiteRose, int
tulip){
    float totalPrice;
    totalPrice = (redRose*2.0)+(whiteRose*4.10)+(tulip*2.50);
    if(totalPrice>200){
        cout<<"Orignal Price: $"<<totalPrice<<endl;
        cout<<"Price after Discount: $"<<totalPrice-(totalPrice*0.2);
    }
    else{
        cout<<"Orignal Price: $"<<totalPrice<<endl;
        cout<<"No discount price";
        }
}