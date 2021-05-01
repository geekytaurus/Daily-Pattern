#include<iostream>
using namespace std;

int main(){
    int height, i, j;
    
    cout << "\nEnter the Height of J : ";
    cin >> height;
     
    
    cout << endl;
    for (i = 0; i < height; i++) {
        
        for (j = 0; j < height; j++) {
            if(i == 0 && j <= (height-2) && j >= 1){
                cout << "*";
            }
            
            else if (i == height - 1 && (j > 0
                                    && j < height - 1))
                cout << "*";
            else if ((j == height - 1 && i != 0
                      && i != height - 1)
                     || (i >= (height-2)
                         && j == 0 && i != height - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

   cout << endl << endl;
    return 0;
}
