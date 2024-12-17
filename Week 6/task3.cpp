#include <iostream>
#include <string>
using namespace std ;

int main(){
    int atLoction = -1; 
    int dotLocation = -1;
    string email ;
    bool valid = true ; 

    cout<<"Enter Email Address: ";
    cin>>email;
   
    for(int i=0; i<email.length(); i++){
        if(email[i]=='@'){
            if(dotLocation==-1) //check @ appears only once
                dotLocation = i;
            else 
                valid = false;
        }
        if(email[i]=='.'){
            if(dotLocation=-1) //check dot appears only once
            dotLocation = i;
        }
    }

    if(dotLocation==0 || dotLocation>=email.length()-1 || dotLocation<=atLoction+1)
        valid = false;
    if(atLoction==0 || atLoction>dotLocation || atLoction + 1 == dotLocation)
        valid = false;
    
    if(valid)
        cout<<"Valid Email address";
    else 
        cout<<"Invalid Email address";

    return 0 ;
}