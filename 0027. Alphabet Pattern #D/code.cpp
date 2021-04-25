#include<iostream>
#define endl "\n"

using namespace std;

int main(){
    int height, width, i, j;

    
    cout << "\nEnter the Height of D : ";
    cin >> height;

    width = (height - 1) / 2;

    cout << endl << endl;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                && j < height - 1)
                cout <<"*";
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                cout <<"*";
            else
                cout <<" ";
        }
        cout << endl;
    }
    cout << endl << endl;

    return 0;
}
