#include<stdio.h>

int main(){


    int height, width;
    
    printf("\nEnter the Height of W : ");
    scanf("%d", &height);

    width = (2 * height) - 1;

    printf("\n");
    for(int i = 1; i <= height; i++){
        for(int j = 1; j < width; j++){
            if(i == 1){
                if(j == i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
           }
           else{
                if(j == i || j == (width-i+1)){
                       
                   printf("*");
                }
                else{
                   printf(" ");
                }
           }
       }
              
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

    printf("\n\n");
    return 0;
}
