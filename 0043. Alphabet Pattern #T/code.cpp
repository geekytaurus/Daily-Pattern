#include<iostream>
using namespace std;

int main(){
    
    int height, width, mid;

    cout <<"\nEnter the height of T : ";
    cin >>height;

    width = height + 3;
    mid = width/2 + 1;

          cout <<endl;
          for(int i = 1; i <= height; i++){
              for(int j = 1; j <= width; j++){
                  if(i == 1 || j == mid){
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
