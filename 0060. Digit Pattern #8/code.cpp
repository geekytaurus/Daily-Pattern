#include <iostream>
#define endl "\n"
using namespace std;

int main()
{
    int height, width;
    cout <<"\nEnter the height of 8 : ";
    cin >>height;

    width = height;

    cout <<endl;
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if ((i == 1) && (j != 1 && j != width))
            {
                cout <<"*";
            }
            else if ((i > 1 && i < height / 2 + 1) && (j == 1 || j == width))
            {
                cout <<"*";
            }
            else if ((i == height / 2 + 1) && (j != 1 && j != width))
            {
                cout <<"*";
            }
            else if ((i > height / 2 + 1 && i < height) && (j == 1 || j == width))
            {
                cout <<"*";
            }
            else if ((i == height) && (j != 1 && j != width))
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
        }
        cout <<endl;
    }

    cout <<endl <<endl;

    return 0;
}
