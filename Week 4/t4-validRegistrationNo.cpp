#include<iostream>
using namespace std;
int main(){
    int year,rollNo;
    string department;
    cout<<"Enter the year: ";
    cin>>year;
    cout<<"Enter the deparment: ";
    cin>>department;
    cout<<"Enter the Roll NO:";
    cin>>rollNo;
    if(year>=2015 && year<=2019){
        if(department=="cs" || department=="CS"){
            if(rollNo>=1 && rollNo<=260){
                cout<<year<<"-"<<department<<"-"<<rollNo<<" IS VALID REGISTRATION NUMBER";
            }
        }     
    }
    else 
            cout<<year<<"-"<<department<<"-"<<rollNo<<" IS NOT VALID REGISTRATION NUMBER";
    return 0;
}