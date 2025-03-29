#include<iostream>
using namespace std;
int main(){
    float matric,inter,ecat,merit;
    cout<<"Enter matric marks = ";
    cin>>matric;
    cout<<"Enter inter P-1 marks = ";
    cin>>inter;
    cout<<"Enter Ecat marks = ";
    cin>>ecat;

    merit =(matric/1100*25)+(inter/560*45)+(ecat/400.0*30);
    cout<<"Your agrigate in Uet = "<<merit;
    cin.get();
    return 0;
}