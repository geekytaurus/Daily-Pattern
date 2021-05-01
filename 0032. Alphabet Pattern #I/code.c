#include<stdio.h>

int main(){
    int height, width, mid, i, j;

    
    printf("\nEnter the height of I : ");
    scanf("%d", &height);

    width = height - 2;
    mid = (width / 2) + 1;

   printf("\n");
    for(i = 1; i <= height; i++){
        for(j = 1; j <= width; j++){
            if(i == 1 || i == height || j == mid){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
 

    return 0;
}
