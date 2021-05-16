#include<iostream>
#define endl "\n"
using namespace std;

int main(){
    int height, row, width;

    cout <<"\nEnter the height of X : ";
    cin >>row;

    height = row / 2 + 1;
    width = (2 * height) - 1;
    
    cout <<endl;
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= width; j++){
            if(j == i || j == (width-i+1)){
                cout <<"*";
            }
            else{
                cout <<" ";
            }
        }
        cout <<endl;
    }
    for(int i = height-1; i >= 1; i--){
     for(int j = 1; j <= width; j++){
         if(j == i || j == (width-i+1)){
             cout <<"*";
         }
         else{
             cout <<" ";
         }
     }
     cout <<endl;
 }


    return 0;
}
