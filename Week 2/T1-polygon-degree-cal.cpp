#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of sides of polygon = ";
    cin>>n;
    
    cout<<"The sum of internal angles of "<<n<<"-sided polygon is: "<<(n-2)*180;
    cin.get();
    return 0;
}
