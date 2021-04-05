#include<iostream>
using namespace std;

int main(){
    int row;

    cout << "Enter the number of rows : ";
    cin >> row;

    int rows = row+1;

    for(int i = rows; i >= 1; i--){
        
        for(int sp = 1; sp <= rows - i; sp++){
            cout << " ";
        }
        for(int j = 1; j <= i-1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
    
}
