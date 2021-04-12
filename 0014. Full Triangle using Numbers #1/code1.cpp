#include<iostream>
using namespace std;

int main(){
    int rows, i, j, k, sp;

    cout << "Enter the number of rows : ";
    cin >> rows;

    cout << endl << endl << endl;
    
    for(i = 1; i <= rows; i++){
        k = 1;
        for(sp = 1; sp <= rows-i; sp++){
            cout << "  ";
        }
        for(j = 1; j <= 2*i-1; j++){
            if(j % 2 == 0){
                cout << "  ";
            }
            else{
                if(k >= 10){
                    cout << k++;
                }
                else{
                    cout << k++ << " ";
                }
            }
        }
        cout << endl;
    }

    cout << endl << endl << endl;


    return 0;

}