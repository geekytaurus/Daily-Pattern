#include<iostream>
using namespace std;
 

// Function to print the pattern of 'A'
void printA(int height, int width)
{
    int n = width / 2, i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == n || j == (width - n)
                || (i == height / 2 && j > n
                    && j < (width - n)))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
        
        n--;
    }
}

int main(){

     int rows;

     cout << "Enter the number of Rows : ";
     cin >> rows;



    // Number of lines for the alphabet's pattern
    int height = rows;

    // Number of character width in each line
    int width = (2 * height) - 1;
 
    cout << endl <<endl;

    printA(height, width);

    cout << endl << endl;

    return 0;
}
