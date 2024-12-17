#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    string op;
    cout<<"WELCOME TO CALCULATOR"<<endl;
    cout<<"ENTER OPERATOR (+, -, *, /, %, &&, ||, >>, <<, !=, ==, <=, >= ): ";
    cin>>op;
    cout<<"Enter the 1st number: ";
    cin>>n1;
    cout<<"Enter the 2nd number: ";
    cin>>n2;

    if(op=="+"){
        cout<<n1<<" + "<<n2<<" = "<<n1+n2;
    }
    else if(op=="-"){
        cout<<n1<<" - "<<n2<<" = "<<n1-n2;
    }
    else if(op=="/"){
        if(n2!=0)
        cout<<n1<<" / "<<n2<<" = "<<n1/n2; 
        else 
        cout<<"Cannot be divided";     
    }
    else if(op=="*"){
        cout<<n1<<" * "<<n2<<" = "<<n1*n2;
    }
    else if(op=="&&"){
        cout<<n1<<" && "<<n2<<" = "<<n1&&n2;        
    }
    else if(op=="||"){
        cout<<n1<<" || "<<n2<<" = "<<n1||n2;        
    }
    else if(op=="%"){
        cout<<n1<<" % "<<n2<<" = "<<(n1%n2);        
    }
    else if(op=="!="){
        cout<<n1<<" != "<<n2<<" = "<<(n1!=n2);        
    }
    else if(op==">="){
        cout<<n1<<" >= "<<n2<<" = "<<(n1>=n2);        
    }
    else if(op=="<="){
        cout<<n1<<" <= "<<n2<<" = "<<(n1<=n2);        
    }
    else if(op=="<<"){
         cout<<n1<<" << "<<n2<<" = "<<(n1<<n2);       
    }
    else if(op==">>"){
         cout<<n1<<" >> "<<n2<<" = "<<(n1>>n2);       
    }
    else if(op=="="){
        cout<<n1<<" = "<<n2<<" = "<<(n1=n2);        
    }
    else if(op=="=="){
        cout<<n1<<" == "<<n2<<" = "<<(n1==n2);        
    }
    else if(op=="|"){
        cout<<n1<<" | "<<n2<<" = "<<(n1|n2);        
    }
    else 
    cout<<"Please enter correct oprator";

    return 0;
}