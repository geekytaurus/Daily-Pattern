#include<stdio.h>

int main(){

    int height, width, mid, i, j;

    printf("\nEnter the height of H : ");
    scanf("%d", &height);
    
    width = height;
    mid = (height / 2) + 1;

    printf("\n\n");
    for(i = 1; i <= height; i++){
            for(j = 1; j <= width; j++){
                if(j == 1 || j == width || i == mid){
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
