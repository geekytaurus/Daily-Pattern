#include<stdio.h>

int main(){
    int height, row, width;

    printf("\nEnter the Height of X : ");
    scanf("%d", &row);

    height = row / 2 + 1;
    width = (2 * height) - 1;
    
    printf("\n");
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= width; j++){
            if(j == i || j == (width-i+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i = height-1; i >= 1; i--){
     for(int j = 1; j <= width; j++){
         if(j == i || j == (width-i+1)){
             printf("*");
         }
         else{
             printf(" ");
         }
     }
     printf("\n");
 }


    return 0;
}
