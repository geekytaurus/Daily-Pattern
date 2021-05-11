#include<iostream>
using namespace std;

int main(){
    int height;

    cout <<"\nEnter the height of S : ";
    cin >>height;
    
        int i, j;
        
        cout << endl;
        for (i = 0; i < height; i++)
        {
            for (j = 0; j < height; j++) 
            {
                if ((i == 0 || i == height / 2
                    || i == height - 1))
                    cout <<"*";
                else if (i < height / 2
                        && j == 0)
                    cout <<"*";
                else if (i > height / 2
                        && j == height - 1)
                    cout <<"*";
                else
                    cout <<" ";
            }
            cout <<"\n";
        }
        cout <<endl <<endl;
        
       
    return 0;
}
