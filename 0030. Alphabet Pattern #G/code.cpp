#include<iostream>
#define endl "\n"
using namespace std;


int main(){
    int i, j, height, width, mid;
    
    cout << "\nEnter the height of G : ";
    cin >> height;

    width = (height - 2);
    mid = (height / 2) + 1;
        

    for(i = 1; i <= height; i++){
        for(j = 1; j <= width; j++){
            if( (i == 1 || i == height) && (j != 1) ){
                cout << "*";
            }
            else if( (j == 1) && (i != 1) && (i != height)){
                cout << "*";
            }
            else if(i > mid && j == width){
                cout << "*";
            }
            else if( (j >= height/2) && (i == mid) ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl << endl;


    return 0;
}
