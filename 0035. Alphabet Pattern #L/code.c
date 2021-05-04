#include<stdio.h>


int main(){
    int height, width, i, j;

   printf("\nEnter the height of L : ");
   scanf("%d", &height);

    width = height;
  
    printf("\n");
    for(i = 1; i <= height; i++){
        for(j = 1; j <= width; j++){
            if(j == 1 || i == height){
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
