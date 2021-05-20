#include<iostream>
using namespace std;

int main(){
    int rows;

    cout <<"\nEnter the no. of Rows : ";
    cin >>rows;
   
   cout <<endl;
   for(int i = 1; i <= rows; i++){
       for(int j = 1; j <= i; j++){
           if( (i % 2 == 0) && (j % 2 != 0) ){
               cout <<"$ ";
           }else if((i % 2 != 0) && (j % 2 == 0) ){
               cout <<"$ ";
           }else{
               cout <<"* ";
           }
       }
       cout <<endl;
    }

    cout <<endl <<endl;

    return 0;
}
