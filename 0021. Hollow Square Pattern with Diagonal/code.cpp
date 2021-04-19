#include<iostream>
#define endl "\n"
using namespace std;


int main()  
{  
    int n;  
    cout << "Enter the number of Rows : ";
    cin >> n;

    cout << endl << endl;
    for(int i=1; i<=n; i++)  
    {  
        for(int j=1; j<=n; j++)  
        {  
            if(i==1 ||i==n||j==1||j==n-i+1||i==j||j==n)  
            {  
                cout << "*";
            }  
            else  
            {  
                  
                cout << " ";
            }  
                 
        }        
        cout << endl;
    }  
      
    cout << endl;
    
    return 0;  
}  
