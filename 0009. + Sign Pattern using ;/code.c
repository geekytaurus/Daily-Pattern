#include<stdio.h>

int main(){

    int rows, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    

    printf("\n");
    
    for( i = 1; i <= rows; i++){
        for( j = 1; j <= rows; j++){
            if( (i == rows/2 + 1)  || (j == rows/2 + 1) ){
                printf("; ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

   printf("\n");


    return 0;
}
