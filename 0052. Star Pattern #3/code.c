#include<stdio.h>

int main(){
    int rows;
    printf("\nEnter the no. of Rows : ");
    scanf("%d", &rows);

    printf("\n");
    for(int i = 1; i <= rows; i++){
       for(int j = 1; j <= rows; j++){
           if(i == 1 && (j == rows || j <= rows/2 +1)){
               printf("* ");
           }
           else if(i <= rows/2 && (j == rows/2 + 1 || j == rows)){
               printf("* ");
               
           }
           else if(i == rows/2+1){
               printf("* ");
           }
           else if(i > rows/2+1 && (j == 1 || j == rows/2+1)){
               printf("* ");
           }
           else if(i == rows && (j == 1 || j >= rows/2+1)){
               printf("* ");
           }
           else{
               printf("  ");
           }
       }
       printf("\n");
   }


    printf("\n\n");
    return 0;
}
