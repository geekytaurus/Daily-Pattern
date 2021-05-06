#include<iostream>
using namespace std;

int main(){
    
    int i, j, counter = 0, height;

    cout <<"\nEnter the Height of N : ";
    cin >>height;

    cout <<endl;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j <= height; j++) {
            if (j == height)
                cout <<"*";
            else if (j == counter)
                cout <<"*";
            else
                cout <<" ";
        }
        counter++;
        cout <<endl;
    }

    cout <<endl <<endl;

    return 0;
}

