#include<iostream>
using namespace std;
void calculator(float num1,float num2,char op);
int main(){
    float num1, num2;
    char op;
    cout<<"Entere number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Enter operator (+,-,*,/): ";
    cin>>op;
    calculator(num1,num2,op);
    return 0;
}

void calculator(float num1,float num2,char op){
    float sum,sub,mul,div;
    if(op == '+'){
        sum = num1+num2;
        cout<<num1<<" + "<<num2<<" = "<<sum;
    }
    else if(op == '-'){
        sub = num1-num2;
    cout<<num1<<" - "<<num2<<" = "<<sub;
    }
    else if(op == '*'){
        mul = num1*num2;
    cout<<num1<<" * "<<num2<<" = "<<mul;
    }
    else if(op == '/'){
        div = num1/num2;
    cout<<num1<<" / "<<num2<<" = "<<div;
    }
    else {
        cout<<"Invalid choice";
    }
}

