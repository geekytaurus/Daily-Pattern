#include<stdio.h>


int main(){
    int height, width;
    printf("\nEnter the Height of 3 : ");
    scanf("%d", &height);

    width = height-1;

    printf("\n");
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= width; j++){
            if( (i == 1 && j != width) || (i == height/2+1  && j != width) || (i == height && j != width ) 
                || (j == width && i != 1 && i != height/2+1 && i != height) ){
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
