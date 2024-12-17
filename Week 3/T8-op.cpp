#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string nameStd1,int matricMarks,int interMarks,int ecatMarksStd1);
void compareMarks();
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2);
int main(){
    string nameStd1,nameStd2;
    int matricMarks,interMarks, ecatMarksStd1,ecatMarksStd2;
    system("cls");
    printMenu();
    cout<<"Enter your name: ";
    cin>>nameStd1;
    cout<<"Enter your matric marks: ";
    cin>>matricMarks;
    cout<<"Enter your inter P-1 marks: ";
    cin>>interMarks;
    cout<<"Enter your Ecat marks: ";
    cin>>ecatMarksStd1;
    calculateAggregate(nameStd1,matricMarks,interMarks, ecatMarksStd1);
    cout<<endl;
    cout<<"Enter 2nd student name: ";
    cin>>nameStd2;
    cout<<"Enter 2nd student Ecat marks: ";
    cin>>ecatMarksStd2;
    compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
    
    
    return 0;

}
void printMenu(){
    cout<<"*********************************************************************************"<<endl;
    cout<<"*  #     # ####### #######    #          #    #     # ####### ######  #######   *"<<endl;
    cout<<"*  #     # #          #       #         # #   #     # #     # #     # #         *"<<endl;
    cout<<"*  #     # #          #       #        #   #  #     # #     # #     # #         *"<<endl;
    cout<<"*  #     # #####      #       #       #     # ####### #     # ######  #####     *"<<endl;
    cout<<"*  #     # #          #       #       ####### #     # #     # #   #   #         *"<<endl;
    cout<<"*  #     # #          #       #       #     # #     # #     # #    #  #         *"<<endl;
    cout<<"*   #####  #######    #       ####### #     # #     # ####### #     # #######   *"<<endl;
    cout<<"*********************************************************************************"<<endl;
}
void calculateAggregate(string nameStd1,int matricMarks,int interMarks,int ecatMarksStd1){
    float merit = (matricMarks*25.0/1100)+(interMarks*45.0/560)+(ecatMarksStd1*30.0/400);
    cout<<nameStd1<<" your aggrigate in UET LAHORE : "<<merit;
}
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2){
    if(ecatMarksStd1>ecatMarksStd2){
        cout<<"Roll NO: 1 = "<<nameStd1<<endl;
        cout<<"Roll NO: 2 = "<<nameStd2<<endl;
    }
    else {
    cout<<"Roll NO: 1 = "<<nameStd2<<endl;
    cout<<"Roll NO: 2 = "<<nameStd1<<endl;
    }
}