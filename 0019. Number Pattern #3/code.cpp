#include<iostream>
using namespace std;

int main(){

    
    
    int i, j, rows, cols;

    cout << "Enter the number of Rows : ";
    cin >> rows;
    cout << "Enter the number of Columns : ";
    cin >> cols;

    cout << endl;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            
            if((i==1 || i==rows) && (j==1 || j==cols))
            {
                cout << " ";
            }
            else if(i==1 || i==rows || j==1 || j==cols)
            {
                
                cout << "1";
            }
            else
            {
                
                cout << "0";
            }
        }

        cout << endl;
    }



    cout << endl;
    return 0;
}
