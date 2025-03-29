#include<iostream>
using namespace std;
void stickerNeeded(int side);
int main(){
    int side;
    cout<<"Enter the side length of the Rubik's cube: ";
    cin>>side;
    stickerNeeded(side);

    return 0;
}
void stickerNeeded(int side){
    int sticker = (side*side)*6;
    cout<<"Number of sticker needed: "<<sticker;
}