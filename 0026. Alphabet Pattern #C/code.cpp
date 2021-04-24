#include<iostream>
#define endl "\n"
using namespace std;

int main(){

    int height, i, j;

    cout << "\nEnter the Height of C : ";
    cin >> height;
    
    int width = (2 * height) - 1;

    cout << endl << endl;

    
    for (i = 0; i < height; i++) {
        cout << "*";
        for (j = 0; j < (height - 1); j++) {
            if (i == 0 || i == height - 1)
                cout << "*";
            else
                continue;
        }
        cout << endl;
    }

    cout << endl << endl;
  
  return 0;
}
