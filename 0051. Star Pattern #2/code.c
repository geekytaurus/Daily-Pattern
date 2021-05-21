#include<stdio.h>

int main(){
    int rows;
    printf("\nEnter the no.(odd) of Rows : ");
    scanf("%d", &rows);

    int os = rows/2;
    int is = -1;

    printf("\n");
    for(int i = 1; i <= rows; i++){
      for(int j = 1; j <= os; j++){
          printf("  ");
      }
      printf("* ");
      for(int j = 1; j <= is; j++){
          printf("  ");
      }
      if(i > 1 && i < rows){
          printf("* ");
      }
    
      if(i <= rows/2){
          os--;
          is += 2;
      }else{
          os++;
          is -= 2;
      }
      printf("\n");
      
    }

    printf("\n\n");

    return 0;
}
