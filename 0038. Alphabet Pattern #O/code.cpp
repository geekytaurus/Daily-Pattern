#include<iostream>
#include<cmath>
using namespace std;


int main(){
    
    int height;
    cout <<"\nEnter the height of O : ";
    cin >>height;
    
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;

    cout <<endl;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == width - abs(space)
                || j == abs(space))
                cout <<"*";
            else if ((i == 0
                      || i == height - 1)
                     && j > abs(space)
                     && j < width - abs(space))
                cout <<"*";
            else
                cout <<" ";
        }
        if (space != 0
            && i < height / 2) {
            space--;
        }
        else if (i >= (height / 2 + height / 5))
            space--;
        cout <<endl;
    }

    cout <<endl <<endl;
    return 0;
}
