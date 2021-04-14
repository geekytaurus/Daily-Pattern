#include<iostream>
using namespace std;

int main(){
    int rows, i, j, sp, k;

    cout << "Enter the number of rows : ";
    cin >> rows;

    cout << endl;

    
       for(i = 1; i <= rows; i++){
        k = i;

        for(j = 1; j <= i; j++){
            cout << j;
        }
        
            for(sp = 1; sp <= rows-i; sp++){
            
               cout << "  ";
            }
        
        for(j = 1; j <= i; j++){
            cout << k--;
        }
        cout << endl;
      }
    
    
    cout << endl;

    return 0;
}
