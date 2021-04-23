#include<iostream>
#define endl "\n"
using namespace std;

int main(){

    int height, width;

    cout << endl << "Enter the Height of B : ";
    cin >> height;

    width = (2 * height) - 1;
    cout << endl << endl;


    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        cout << "*";
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1 || i == half)
                && j < (width - 2))
                cout << "*";
            else if (j == (width - 2)
                     && !(i == 0 || i == height - 1
                          || i == half))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    return 0;
}
