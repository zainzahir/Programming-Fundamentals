#include<iostream>
#include<iomanip>
using namespace std;
void adminInterface();
void mainInterface();
void studentInterface();
float gradePointConversion(char grade);

    
int main(){
    //for courses & credit hours 
    string course1="NV",course2="NV",course3="NV",course4="NV",course5="NV";
    int creditHour1=0,creditHour2=0,creditHour3=0,creditHour4=0,creditHour5=0;
    bool isCourseExist = false; //checks courses added or no course exist
    int courseCounter = 1; //max 5 courses
    //for grades 
    char grade1, grade2, grade3, grade4, grade5;
    double sumOfGpCH = 0, gpa = 0; //for gpa calculation
    string courseName;
    int creditHours;
    char choice; //stores choice
    bool flag = false; //control loops
    //useranme & password attributes
    string username, password, askUserName, askPassword;
    username = "admin"; //predefined username
    password = "admin123"; //predefined password


    while(!flag){
        mainInterface(); //shows main interface
        //choice
        cout<<" Enter your choice: ";
        cin>>choice;
        //main interface choices
        switch (choice){       
            case '1':{ //admin portal
                system("cls");
                cout<<" ***************************************************************"<<endl<<endl;
                cout<<"                 GPA Calculation System (Admin)                 "<<endl<<endl;
                cout<<" ***************************************************************"<<endl;
                cout<<"Enter Username: ";
                cin>>askUserName;
                cout<<"Enter Password: ";
                cin>>askPassword;
                if(askUserName == username && askPassword == password){
                    //shows this interface again and again
                    while(!flag){
                        adminInterface(); //shows admin portal
                        cout<<" Enter input: ";
                        cin>>choice;
                        //choices in admin portal
                        switch(choice){
                            case '1':{
                                system("cls");
                                if(courseCounter <=5){
                                    cout<<"\n\t\tAdd a course "<<endl;
                                    cout<<" Enter Course Name: ";
                                    cin>>courseName;
                                    cout<<" Enter Credit Hours: ";
                                    cin>>creditHours;

                                    //adding course details
                                    if(course1 == "NV"){
                                        course1 = courseName;
                                        creditHour1 = creditHours;
                                        cout<<"\n\n Course added successfully!";
                                        courseCounter += 1;
                                    }
                                    else if(course2 == "NV"){
                                        course2 = courseName;
                                        creditHour2 = creditHours;
                                        cout<<"\n\n Course added successfully!";
                                        courseCounter += 1;
                                    }
                                    else if(course3 == "NV"){
                                        course3 = courseName;
                                        creditHour3 = creditHours;
                                        cout<<"\n\n Course added successfully!";
                                        courseCounter += 1;    
                                    }
                                    else if(course4 == "NV"){
                                        course4 = courseName;
                                        creditHour4 = creditHours;  
                                        cout<<"\n\n Course added successfully!";
                                        courseCounter += 1;    
                                    }
                                    else if(course5 == "NV"){
                                        course5 = courseName;
                                        creditHour5 = creditHours;
                                        cout<<"\n\n Course added successfully!";
                                        courseCounter += 1;

                                    }
                                    else 
                                        cout<<"\n\n\t\tCourse list is full.";
                                } //course counter 
                                else 
                                    cout<<"\n\n\t\tCourse list is full.";
                
                                cin.ignore(); //ignore the enter bcz its also char
                                cin.get(); //holds screen 
                                break;
                            }
                            case '2':{
                                system("cls");
                                cout<<"\t\tEdit a Course"<<endl<<endl;
                                cout<<" Enter course name to edit: ";
                                cin>>courseName;
                                //search cousrse and make it edit
                                if(course1 == courseName){
                                    cout<<" Enter new credit hours: ";
                                    cin>>creditHour1;
                                    cout<<"\n\n Course updated successfully!";
                
                                }
                                else if(course2 ==courseName){
                                    cout<<" Enter new credit hours: ";
                                    cin>>creditHour2;
                                    cout<<"\n\n Course updated successfully!";
                
                                }
                                else if(course3 ==courseName){
                                    cout<<" Enter new credit hours: ";
                                    cin>>creditHour3;
                                    cout<<"\n\n Course updated successfully!";
                                    
                                }
                                else if(course4 ==courseName){
                                    cout<<" Enter new credit hours: ";
                                    cin>>creditHour4;
                                    cout<<"\n\n Course updated successfully!";
                                    
                                }
                                else if(course5 ==courseName){
                                    cout<<" Enter new credit hours: ";
                                    cin>>creditHour5;
                                    cout<<"\n\n Course updated successfully!";
                                    
                                }
                                else 
                                    cout<<"\n Course not found!";
                                
                                cin.ignore(); //ignore the enter bcz its also char
                                cin.get(); //holds screen 
                                break;
                            }
                            case '3':{
                                system("cls");
                                cout<<"\t\tDelete a Course"<<endl<<endl;
                                cout<<" Enter course name to Delete : ";
                                cin>>courseName;
                                //search cousrse and delete if exist
                                if(course1 == courseName){
                                    course1 = "NV";
                                    creditHour1 = 0;      
                                    courseCounter -= 1;             
                                    cout<<"\n\n Course Deleted successfully!";
                                }
                                else if(course2 == courseName){
                                    course2 = "NV";
                                    creditHour2 = 0;    
                                    courseCounter -= 1;                
                                    cout<<"\n\n Course Deleted successfully!";
                
                                }
                                else if(course3 == courseName){
                                    course3 = "NV";
                                    creditHour3 = 0;  
                                    courseCounter -= 1;                  
                                    cout<<"\n\n Course Deleted successfully!";
                
                                }
                                else if(course4 == courseName){
                                    course4 = "NV";
                                    creditHour4 = 0;  
                                    courseCounter -= 1;                  
                                    cout<<"\n\n Course Deleted successfully!";
                
                                }
                                else if(course5 == courseName){
                                    course5 = "NV";
                                    creditHour5 = 0; 
                                    courseCounter -= 1;                   
                                    cout<<"\n\n Course Deleted successfully!";
                                }
                                else 
                                    cout<<"\n\nCourse not found!";
                                    
                                cin.ignore(); //ignore the enter bcz its also char
                                cin.get(); //holds screen 
                                break;
                            }
                            case '4':{
                                system("cls");
                                cout<<"***************************************************************"<<endl;
                                cout<<fixed<<setw(25)<<left<<"Courses Name"<<fixed<<setw(5)<<"Credit Hours"<<endl;
                                cout<<"***************************************************************"<<endl;
                                isCourseExist = false; //sets to false (reset everytime b4 checking)

                                if(course1 != "NV"){
                                    cout<<fixed<<setw(28)<<left<<course1<<creditHour1<<endl;
                                    isCourseExist = true; //checks course added or there exist no course
                                }
                                if(course2 != "NV"){
                                    cout<<fixed<<setw(28)<<left<<course2<<creditHour2<<endl;
                                    isCourseExist = true;
                                }
                                if(course3 != "NV"){
                                    cout<<fixed<<setw(28)<<left<<course3<<creditHour3<<endl;
                                    isCourseExist = true;
                                }
                                if(course4 != "NV"){
                                    cout<<fixed<<setw(28)<<left<<course4<<creditHour4<<endl;
                                    isCourseExist = true;
                                }
                                if(course5 != "NV"){
                                    cout<<fixed<<setw(28)<<left<<course5<<creditHour5<<endl;
                                    isCourseExist = true;
                                }
                                if(!isCourseExist){
                                    cout<<"No courses available.";
                                }
                                
                                cin.ignore(); //ignore the enter bcz its also char
                                cin.get(); //holds screen 
                                break;
                            }
                            case '0':{
                                flag = true;
                                break;
                            }
                            default:{
                                cout<<" Invalid Option";
                                cin.ignore();
                                cin.get();
                                break;
                            }

                        } //switch ends of admin
                        
                    
                    } //admin portal ends here (loop)
                } 
                else{ 
                    cout<<"\n\n\t\t\tInvalid Login details!";
                    cin.get();
                }
                flag = false; //reset flag
                break; 
                
            }
            case '2':{
                //shows this interface again and again
                while(!flag){
                    studentInterface();
                    cout<<" Enter input: ";
                    cin>>choice;
                    switch(choice){
                        case '1':{
                            system("cls");
                            cout<<"***************************************************************"<<endl;
                            cout<<fixed<<setw(25)<<left<<"Courses Name"<<fixed<<setw(5)<<"Credit Hours"<<endl;
                            cout<<"***************************************************************"<<endl;
                            isCourseExist = false; //sets to false (reset everytime b4 checking)
                            if(course1 != "NV"){
                                cout<<fixed<<setw(28)<<left<<course1<<creditHour1<<endl;
                                isCourseExist = true; //checks course added or there exist no course
                            }
                            if(course2 != "NV"){
                                cout<<fixed<<setw(28)<<left<<course2<<creditHour2<<endl;
                                isCourseExist = true;
                            }
                            if(course3 != "NV"){
                                cout<<fixed<<setw(28)<<left<<course3<<creditHour3<<endl;
                                isCourseExist = true;
                            }
                            if(course4 != "NV"){
                                cout<<fixed<<setw(28)<<left<<course4<<creditHour4<<endl;
                                isCourseExist = true;
                            }
                            if(course5 != "NV"){
                                cout<<fixed<<setw(28)<<left<<course5<<creditHour5<<endl;
                                isCourseExist = true;
                            }
                            if(!isCourseExist){
                                cout<<"No courses added by the admin yet.";
                            }
                            cin.ignore(); //ignore the enter bcz its also char
                            cin.get(); //holds screen 

                            break;
                        }
                        case '2':{
                            system("cls");
                            cout<<" ***********************************"<<endl;
                            cout<<"           GPA Calculation          "<<endl;
                            cout<<" ***********************************"<<endl;
                            sumOfGpCH = 0; //for reset everytime to 0 after calculate
                            if(course1 != "NV"){
                                cout<<" Enter grade for "<<course1<<": ";
                                cin>>grade1;
                                sumOfGpCH += gradePointConversion(grade1) * creditHour1; 
                            }
                            if(course2 != "NV"){
                                cout<<" Enter grade for "<<course2<<": ";
                                cin>>grade2;
                                sumOfGpCH += gradePointConversion(grade2) * creditHour2;                     
                            }
                            if(course3 != "NV"){
                                cout<<" Enter grade for "<<course3<<": ";
                                cin>>grade3;
                                sumOfGpCH += gradePointConversion(grade3) * creditHour3;    
                            }
                            if(course4 != "NV"){
                                cout<<" Enter grade for "<<course4<<": ";
                                cin>>grade4;
                                sumOfGpCH += gradePointConversion(grade4) * creditHour4;                           
                            }
                            if(course5 != "NV"){
                                cout<<" Enter grade for "<<course5<<": ";
                                cin>>grade5;
                                sumOfGpCH += gradePointConversion(grade5) * creditHour5;
                            }
                            if(!isCourseExist){
                                cout<<" No courses added by the admin yet.";
                            }
                            if(isCourseExist){ //calculates only if course exist
                                //gpa calculation
                                gpa = sumOfGpCH /(creditHour1+creditHour2+creditHour3+creditHour4+creditHour5) ;
                                cout<<" Your semester GPA is: "<<gpa;
                                cout<<"\n ***********************************"<<endl;
                            }
                            cin.ignore(); //ignore the enter bcz its also char2

                            cin.get(); //holds screen 
                            break;
                        }
                        case '0':{
                            flag = true;
                            break;
                        }
                        default:{ 
                            cout<<"Invalid option";
                            cin.ignore();
                            cin.get();
                            break;
                        }

                    }
                }//loop

                flag = false; //reset flag
                break;
            }
            case '0':{
                cout<<"Thank YOU";
                flag = true; //loop ends 
                break;
            }
            default:{
                cout<<" Invalid Option";
                cin.get();
                break;
            }
        }
        cin.get(); 
        
    } //main loop ends here

        return 0;
}    

void adminInterface(){
    system("cls");
    cout<<" ***************************************************************"<<endl<<endl;
    cout<<"                 GPA Calculation System (Admin)                 "<<endl<<endl;
    cout<<" ***************************************************************"<<endl;
    cout<<" 1. Add a course"<<endl;
    cout<<" 2. Edit a course"<<endl;
    cout<<" 3. Delete a course"<<endl;
    cout<<" 4. Display all courses"<<endl;
    cout<<" 0. Exit "<<endl;
    cout<<" ***************************************************************"<<endl;
}

void mainInterface(){
    system("cls");
    cout<<" ***************************************************************"<<endl;
    cout<<"                      GPA Calculation System                    "<<endl;
    cout<<" ***************************************************************"<<endl;
    cout<<"\n";
    cout<<" 1. Log in as Admin"<<endl;
    cout<<" 2. Proceed as Student"<<endl;
    cout<<" 0. Exit"<<endl<<endl;
    cout<<" ***************************************************************"<<endl;
}

void studentInterface(){
    system("cls");
    cout<<" ***************************************************************"<<endl;
    cout<<"                  GPA Calculation System (Student)              "<<endl;
    cout<<" ***************************************************************"<<endl;
    cout<<"\n";
    cout<<" 1. View all courses"<<endl;
    cout<<" 2. Enter grades and calculate semester GPA"<<endl;
    cout<<" 0. Exit"<<endl<<endl;
    cout<<" ***************************************************************"<<endl;
}

float gradePointConversion(char grade){
    double gradePoint = 0;
    if(grade == 'A' || grade == 'a')
        gradePoint = 4.0;
    else if(grade == 'B' || grade == 'b')
        gradePoint = 3.2;
    else if(grade == 'C' || grade == 'c')
        gradePoint = 2.7;
    else if(grade == 'D' || grade == 'd')
        gradePoint = 2.0;
    else if(grade == 'F' || grade == 'f')
        gradePoint = 1.0;
    else 
        cout<<"Invalid grade!";
    return gradePoint;

}
