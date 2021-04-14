#include<stdio.h>


int main(){
    int rows, i, j, sp, k;

    printf("Enter the number of Rows : ");
    scanf("%d", &rows);

    printf("\n");

    
       for(i = 1; i <= rows; i++){
        k = i;

        for(j = 1; j <= i; j++){
            printf("%d", j);
        }
        
            for(sp = 1; sp <= rows-i; sp++){
            
               printf("  ");
            }
        
        for(j = 1; j <= i; j++){
            printf("%d", k--);
        }
        printf("\n");
      }
    
    return 0;
}
