#include<iostream>
using namespace std;

int main(){

    int i, j, counter = 0, height;

   cout << "\nEnter the height of M : ";
   cin >>height;


    cout << "\n";
    for (i = 0; i < height; i++) {
        cout << "*";
        for (j = 0; j <= height; j++) {
            if (j == height)
                cout << "*";
            else if (j == counter
                     || j == height - counter - 1)
                cout << "*";
            else
                cout << " ";
        }
        if (counter == height / 2) {
            counter = -99999;
        }
        else
            counter++;
        cout <<endl;
    }
    cout << endl <<endl;

    return 0;
}
