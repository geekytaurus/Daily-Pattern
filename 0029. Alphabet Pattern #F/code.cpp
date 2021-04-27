#include<iostream>
#define endl "\n"
using namespace std;

int main(){

    int height;

    cout << "\n\nEnter the height of F : ";
    cin >> height;


    int mid = height / 2;
        int i, j;

        cout << endl << endl;
        for(i = 1; i <= height; i++){
           for(j = 1; j <= height + 1; j++){
               if(i == 1 || j == 1){
                   cout << "*";
               }
           }

           for(j = 1; j <= mid + 1; j++){
            if(i == mid){
                cout << "*";
            }
          }
         
          cout << endl;
        }
        cout << endl << endl;

    return 0;
}
