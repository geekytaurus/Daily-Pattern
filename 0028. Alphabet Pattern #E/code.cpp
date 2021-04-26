#include<iostream>
#define endl "\n"
using namespace std;

int main(){
    
    int height, i, j;

    cout << "\nEnter the Height of E : ";
    cin >> height;

    int mid = height / 2 + 1;

        cout << endl;
        for(i = 1; i <= height; i++){
            for(j = 1; j < height; j++){
                if(i == 1 || j == 1 || i == mid || i == height){
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
