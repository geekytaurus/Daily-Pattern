#include<iostream>
#define endl "\n"
using namespace std;

int main(){
    int height, width, mid, i, j;

    cout << "\nEnter the Height of I : ";
    cin >>height;

    width = height - 2;
    mid = (width / 2) + 1;

   cout << endl;
    for(i = 1; i <= height; i++){
        for(j = 1; j <= width; j++){
            if(i == 1 || i == height || j == mid){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl << endl;
   
    return 0;
}
