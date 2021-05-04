#include<iostream>
using namespace std;

int main(){
    int height, width, i, j;

    cout <<"\nEnter the height of L : ";
    cin >>height;
    
    width = height;
  
    cout <<"\n";
    for(i = 1; i <= height; i++){
        for(j = 1; j <= width; j++){
            if(j == 1 || i == height){
                cout <<"*";
            }
            else{
                cout <<" ";
            }
        }
            cout <<"\n";
    }

    cout <<"\n\n";

    return 0;
}
