#include<stdio.h>

int main(){
    int rows, i, j;
    
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    for( i = 1; i <= rows; i++){
      for( j = i; j < rows; j++){
          printf(" ");
      }
      for( j = 1; j <= i; j++){
          if(j == 1 || i == rows){
              printf("%d ", j);
          }
          else{
              printf(" ");
          }
      }
      for( j = 1; j < i; j++){
          if(j == i-1 && j < rows-1){
              printf("%d", j+1);
          }
          else{
              printf(" ");
          }
      }


        printf("\n");
    }

    return 0;
}
