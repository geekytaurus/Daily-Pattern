#include<iostream>
using namespace std;

int main(){
    int height;

    cout <<"\nEnter the height of Z : ";
    cin >>height;

    cout <<"\n";
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height; j++){
            if(i == 1 || i == height || j == (height-i+1)){
                cout <<"*";
            }
            else{
                cout <<" ";
            }
        }
        cout <<endl;
    }

    cout <<"\n\n";
    
    return 0;
}
