#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n; //array size or customers
    cout<<"Enter Number of Customer: ";
    cin>>n;
    int orange[n] , mango[n], banana[n] , totalBill[n];
    for(int i=0; i<n; i++){
        cout<<"Customer "<<i+1<<": "<<endl;
        cout<<"Enter Number of Mangoes :";
        cin>>mango[i];
        cout<<"Enter Number of Oranges :";
        cin>>orange[i];
        cout<<"Enter Number of Banana :";
        cin>>banana[i];
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        totalBill[i] = (mango[i]*20) + (orange[i]*10) + (banana[i]*5);
    }
    cout<<left;
    cout<<"************************************************************************"<<endl;
    cout<<setw(14)<<"Customer No."<<setw(14)<<"Mangoes"<<setw(14)<<"Oranges"<<setw(14)<<"Bananas"<<setw(14)<<"Total Bill"<<endl;
    cout<<"************************************************************************"<<endl; 
    for(int i=0; i<n; i++){
        cout<<setw(15)<<i+1<<setw(15)<<mango[i]<<setw(15)<<orange[i]<<setw(15)<<banana[i]<<"RS."<<totalBill[i];
        cout<<endl;
    }

    return 0;
}