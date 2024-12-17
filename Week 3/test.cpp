#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,disc,x1,x2;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;
    disc = b*b-4*a*c;
    if(disc>=0){
        x1= (-1*b + sqrt(disc))/(2*a);
        x2= (-1*b - sqrt(disc))/(2*a);
        cout<<"X1 = "<<x1<<endl;
        cout<<"X2 = "<<x2;
    }
    else
    cout<<"Roots are imaginary";
    return 0;
}