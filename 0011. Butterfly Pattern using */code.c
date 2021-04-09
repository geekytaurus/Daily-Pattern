#include<stdio.h>

int main(){
    int rows, i, j, sp;
    
    printf("Enter the number of Rows : ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        for(sp = 1; sp <= (2*rows-2*i); sp++){
            printf(" ");

        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i = rows; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        for(sp = 1; sp <= (2*rows-2*i); sp++){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
