#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void playermove(int x, int y);
void printMaze();

int main(){
    int x=4, y=4;
    system("cls");
    printMaze();
    playermove(x,y);
    gotoxy(10,10);

    return 0;
}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze(){
cout << "#######################" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#######################" << endl;
}
void playermove(int x, int y){
    gotoxy(x,y);
    cout<<"P";
    Sleep(200);
    gotoxy(x,y);
    cout<<" ";
}

