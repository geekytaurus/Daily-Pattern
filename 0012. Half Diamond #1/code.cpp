#include<iostream>
using namespace std;


int main(){
    int rows, i, j;

    cout << "Enter the number of rows : ";
    cin>> rows;
     
    cout << endl;
    for(i = 1; i <= rows; i++){
        for(j = 1; j <= 2*i-1; j++){
            if(j % 2 == 0){
                cout << "*";
            }
            else{
                cout << i;
            }
        }
        cout << endl;
    }

    for(i = rows; i >= 1; i--){
        for(j = 1; j <= 2*i-1; j++){
            if(j % 2 == 0){
                cout << "*";
            }
            else{
                cout << i;
            }
        }
        cout << endl;
    }
   cout << endl;

    return 0;
}
