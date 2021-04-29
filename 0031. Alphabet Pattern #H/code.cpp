#include<iostream>
#define endl "\n"
using namespace std;

int main(){

    int height, width, mid, i, j;

    cout << "\nEnter the height of H : ";
    cin >> height;
    
    width = height;
    mid = (height / 2) + 1;

    cout << endl << endl;
    for(i = 1; i <= height; i++){
            for(j = 1; j <= width; j++){
                if(j == 1 || j == width || i == mid){
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
