#include<iostream>
#define endl "\n"
using namespace std;

int main(){
    int rows, i, sp, j, k;

    cout << "Enter the number of rows : ";
    cin >> rows;

    for(i = 1; i <= rows; i++){
        k = i-1;

        for(sp = 1; sp <= rows-i; sp++){
            cout << "  ";
        }

        for(j = 1; j <= i; j++){
            if(k+1 >= 10){
                cout << ++k;
            }
            else{
                cout << ++k << " ";
            }
            
        }

        for(j = i+1; j <= 2*i-1; j++){
            if(k-1 >= 10 ){
                cout << --k;
            }
            else{
                cout << --k << " ";
            }
            
        }

        cout << endl;
    }

    cout << endl;

    return 0;
}
