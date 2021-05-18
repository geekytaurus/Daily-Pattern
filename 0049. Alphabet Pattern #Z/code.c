#include<stdio.h>


int main(){
    int height;

    printf("\nEnter the Height of Z : ");
    scanf("%d", &height);

    printf("\n");
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height; j++){
            if(i == 1 || i == height || j == (height-i+1)){
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
