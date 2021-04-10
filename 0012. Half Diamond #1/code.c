#include<stdio.h>


int main(){
    int rows, i, j;

    printf("Enter the number of Rows : ");
    scanf("%d", &rows);
     
    
    for(i = 1; i <= rows; i++){
        for(j = 1; j <= 2*i-1; j++){
            if(j % 2 == 0){
                printf("*");
            }
            else{
                printf("%d", i);
            }
        }
        printf("\n");
    }

    for(i = rows; i >= 1; i--){
        for(j = 1; j <= 2*i-1; j++){
            if(j % 2 == 0){
                printf("*");
            }
            else{
                printf("%d", i);
            }
        }
        printf("\n");
    }
   printf("\n");

    return 0;
}
