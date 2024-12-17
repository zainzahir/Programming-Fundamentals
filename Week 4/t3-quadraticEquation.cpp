#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,disc,x1,x2;
    cout<<"ENTER COEFFICIENTS A:";
    cin>>a;
    cout<<"ENTER COEFFICIENTS B:";
    cin>>b;
    cout<<"ENTER COEFFICIENTS C:";
    cin>>c;
    disc = (b*b)-(4*a*c);
    x1 = (-b+sqrt(disc))/(2*a);
    x2 = (-b-sqrt(disc))/(2*a);
    if(disc > 0){
        cout<<"ROOTS ARE REAL AND DIFFERENT"<<endl;
        cout<<"X1 = "<<x1<<endl;
        cout<<"X2 = "<<x2<<endl;
    }
    else if(disc < 0){
        cout<<"Roots are complex and different"<<endl;
        cout<<"X1 = "<<x1<<endl;
        cout<<"X2 = "<<x2<<endl;
    }
    else if(disc == 0){
        cout<<"Roots are real and equal"<<endl;
        cout<<"X1 = "<<x1<<endl;
        cout<<"X2 = "<<x2<<endl;
    }
    return 0;      
}