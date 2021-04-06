#include<iostream>
#define endl "\n"
using namespace std;

int main(){
    int rows;

    cout << "Enter the number of rows : ";
    cin >> rows;

    for(int i = 1; i <= rows; i++){
      for(int j = i; j < rows; j++){
          cout << " ";
      }
      for(int j = 1; j <= i; j++){
          if(j == 1 || i == rows){
              if(j <= 9){
                  cout << j << " " ;
              }
              else{
                  cout << j;
              }
              
          }
          else{
              cout << " ";
          }
      }
      for(int j = 1; j < i; j++){
          if(j == i-1 && j < rows-1){
              cout << j+1;
          }
          else{
              cout << " ";
          }
      }


        cout << endl;
    }

    return 0;
}
