#include<stdio.h>

int main(){
    int i, j, height, width, mid;
    
    printf("\nEnter the height of G : ");
    scanf("%d", &height);

    width = (height - 2);
    mid = (height / 2) + 1;
        

    for(i = 1; i <= height; i++){
        for(j = 1; j <= width; j++){
            if( (i == 1 || i == height) && (j != 1) ){
                printf("*");
            }
            else if( (j == 1) && (i != 1) && (i != height)){
                printf("*");
            }
            else if(i > mid && j == width){
                printf("*");
            }
            else if( (j >= height/2) && (i == mid) ){
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
