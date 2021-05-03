#include<iostream>
using namespace std;

int main(){
    int height, width, i, j;
    
    cout << "\nEnter the Height of K : ";
    cin >> height;

    width = height - 2;
    
    cout <<endl;
    for(i = 1; i <= (height/2 + 1); i++){
        for(j = 1; j <= width; j++){
            if(j == 1 || j == (height - i - 1) ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(i = height/2; i >= 1; i--){
        for(j = 1; j <= width; j++){
            if(j == 1 || j == (height - i - 1) ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
     
    cout << endl <<endl;
    return 0;
}
