#include<iostream>
using namespace std;

int main(){
    int height;

    cout <<"\nEnter the height of R : ";
    cin >>height;

    int width = height - 2;
    int i, j, half = (height / 2);

    cout << endl;
    for (i = 0; i < height; i++) 
    {
        cout <<"*";
        for (j = 0; j < width; j++) 
        {
            if ((i == 0 || i == half)
                 && j < (width - 2))
                cout <<"*";
            else if (j == (width - 2)
                   && !(i == 0 || i == half))
                    cout <<"*";
            else
                    cout <<" ";
        }
        cout <<endl;
    }
    cout <<"\n\n";

    return 0;
}
