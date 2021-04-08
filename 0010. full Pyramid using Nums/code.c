#include<stdio.h>

int main(){
    int rows, i, j, sp, k;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++){
        k = i-1;

        for(sp = 1; sp <= rows-i; sp++){
            printf("  ");
        }

        for(j = 1; j <= i; j++){
            if(k+1 >= 10){
                printf("%d", ++k);
            }
            else{
                printf("%d ", ++k);
            }
            
        }

        for(j = i+1; j <= 2*i-1; j++){
            if(k-1 >= 10 ){
                printf("%d", --k);
            }
            else{
                printf("%d ", --k);
            }
            
        }

        printf("\n");
    }

    printf("\n");
   
   return 0;
}

