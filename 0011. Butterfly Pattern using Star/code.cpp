#include<iostream>
#define endl "\n"
using namespace std;


int main(){
    int rows, i, j, sp;
    
    cout << "Enter the number of rows : ";
    cin >> rows;

    for(i = 1; i <= rows; i++){
        for(j = 1; j <= i; j++){
            cout <<"*";
        }
        for(sp = 1; sp <= (2*rows-2*i); sp++){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(i = rows; i >= 1; i--){
        for(j = 1; j <= i; j++){
            cout <<"*";
        }
        for(sp = 1; sp <= (2*rows-2*i); sp++){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
