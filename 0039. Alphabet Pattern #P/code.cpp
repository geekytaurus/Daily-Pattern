#include<iostream>
using namespace std;

int main(){
    
    int height;

    cout <<"\nEnter the height of P : ";
    cin >>height;

    int i, j;

    cout <<endl;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2 - 1)
                && j < height - 1)
                cout <<"*";
            else if (i < height / 2 - 1
                     && j == height - 1 && i != 0)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
    cout <<"\n\n";

    return 0;
}
