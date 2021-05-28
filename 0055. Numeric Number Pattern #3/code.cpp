#include<iostream>
using namespace std;

int main(){
    int height, width;
    cout <<"\nEnter the height of 3 : ";
    cin >>height;

    width = height-1;

    cout <<endl;
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= width; j++){
            if( (i == 1 && j != width) || (i == height/2+1  && j != width) || (i == height && j != width ) 
                || (j == width && i != 1 && i != height/2+1 && i != height) ){
                cout <<"*";
            }
            else{
                cout <<" ";
            }
        }
        cout <<endl;
    }

   cout <<endl <<endl;


    return 0;
}
