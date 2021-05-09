#include<iostream>
#include<cmath>
using namespace std;


void printO(int height)
{
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;
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
}


int main(){

    int height;
    
    cout <<"\nEnter the height of Q : ";
    cin >>height;

    cout <<endl;
   
    printO(height);
    int i, j, d = height;
    for (i = 0; i < 2; i++) {
        for (j = 0; j <= d; j++) {
            if (j == d)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<endl;
        d++;
    }


    cout <<endl <<endl;

    return 0;


}
