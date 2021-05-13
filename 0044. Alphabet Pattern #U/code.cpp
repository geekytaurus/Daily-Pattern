#include<iostream>
using namespace std;

int main(){
    int height, width;

    cout <<"\nEnter the height of U : ";
    cin >>height;

    width = height + 3;
           cout <<endl;
           for(int i = 1; i <= height; i++){
               for(int j = 1; j <= width; j++){
                   if(i < height){
                    if( j == width || j == 1){
                        cout <<"*";
                    }
                    else{
                        cout <<" ";
                    }
                   }
                   else{
                       if(j >= 2 && j < width){
                        cout <<"*";
                       }
                       else{
                        cout <<" ";
                       }
                   }

               }
               cout <<"\n";
           }

    cout <<endl <<endl;
    return 0;
}
