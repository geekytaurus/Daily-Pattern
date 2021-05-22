#include<iostream>
#define endl "\n"
using namespace std;


int main(){
    int rows;
    cout <<"\nEnter the no. of Rows : ";
    cin >>rows;

    cout <<endl;
    for(int i = 1; i <= rows; i++){
       for(int j = 1; j <= rows; j++){
           if(i == 1 && (j == rows || j <= rows/2 +1)){
               cout <<"* ";
           }
           else if(i <= rows/2 && (j == rows/2 + 1 || j == rows)){
               cout <<"* ";
               
           }
           else if(i == rows/2+1){
               cout <<"* ";
           }
           else if(i > rows/2+1 && (j == 1 || j == rows/2+1)){
               cout <<"* ";
           }
           else if(i == rows && (j == 1 || j >= rows/2+1)){
               cout <<"* ";
           }
           else{
               cout <<"  ";
           }
       }
       cout <<endl;
   }


    cout <<endl <<endl;
    return 0;
}
