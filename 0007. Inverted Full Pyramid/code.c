#include<stdio.h>

int main(){
    int row, rows, i, sp, j;

    printf("Enter the number of rows : ");
    scanf("%d", &row);

    rows = row + 1;

    for(i = rows; i >= 1; i--){
        for(sp = 1; sp <= rows-i; sp++){
            printf(" ");
        }
        for(j = 1; j <= i-1; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
