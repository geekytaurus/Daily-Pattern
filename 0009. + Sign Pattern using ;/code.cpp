#include<iostream>
using namespace std;

int main(){
    int rows;

    cout << "Enter the number of rows : ";
    cin >> rows;

    cout << endl;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= rows; j++){
            if( (i == rows/2 + 1)  || (j == rows/2 + 1) ){
                cout << "; " ;
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
