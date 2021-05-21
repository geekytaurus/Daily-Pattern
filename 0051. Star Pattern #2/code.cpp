#include<iostream>
using namespace std;

int main(){
    int rows;
    cout <<"\nEnter the no.(odd) of Rows : ";
    cin >>rows;

    int os = rows/2;
    int is = -1;

    cout <<endl;
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= os; j++){
          cout <<"  ";
      }
      cout <<"* ";
      for(int j = 1; j <= is; j++){
          cout <<"  ";
      }
      if(i > 1 && i < rows){
          cout <<"* ";
      }
    
      if(i <= rows/2){
          os--;
          is += 2;
      }else{
          os++;
          is -= 2;
      }
      cout <<endl;
      
          }

    cout <<endl <<endl;

    return 0;
}
