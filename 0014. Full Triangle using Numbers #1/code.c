#include<stdio.h>


int main(){
    int rows, i, j, k, sp;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("\n\n");
    
    for(i = 1; i <= rows; i++){
        k = 1;
        for(sp = 1; sp <= rows-i; sp++){
            printf("  ");
        }
        for(j = 1; j <= 2*i-1; j++){
            if(j % 2 == 0){
                printf("  ");
            }
            else{
                if(k >= 10){
                    printf("%d", k++);
                }
                else{
                    printf("%d ", k++);
                }
            }
        }
        printf("\n");
    }

    printf("\n\n");


    return 0;

}
