#include<iostream>
#define endl "\n"
using namespace std;

int main(){

        int i, j, rows;
        cout << "Enter the number of Rows : ";
        cin >> rows;

        
        cout << "0\n";
        for(i=rows; i>=1; i--)
        {
            for(j=i; j<=rows; j++)
                cout <<j <<" ";
            cout <<"0 ";

            for(j=rows; j>=i; j--)
               cout <<j << " ";
      
            cout << endl;  
        
        }

        cout << endl;

    return 0;
}
