#include<iostream>
#define endl "\n"
using namespace std;

int main(){
     int height;
     cout <<"\nEnter the height (odd number) of Y : ";
     cin >>height;

     cout <<endl;
     for(int i = 1; i <= height/2; i++){
        for(int j = 1; j <= height; j++){
            if(j == i || j == (height-i + 1)){
                   cout <<"*";
               }
            else{
                   cout <<" ";
               }
        }
        cout <<endl;
    }
    for(int i = 1; i <= height/2+1; i++){
     for(int j = 1; j <= height; j++){
         if(j == height/2+1){
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
