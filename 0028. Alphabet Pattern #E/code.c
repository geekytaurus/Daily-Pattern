#include<stdio.h>


int main(){
    
    int height, i, j;

    printf("\nEnter the height of E : ");
    scanf("%d", &height);

    int mid = height / 2 + 1;

        printf("\n");
        for(i = 1; i <= height; i++){
            for(j = 1; j < height; j++){
                if(i == 1 || j == 1 || i == mid || i == height){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
 
     return 0;
}
