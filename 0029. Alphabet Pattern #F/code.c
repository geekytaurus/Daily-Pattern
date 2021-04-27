#include<stdio.h>


int main(){

    int height;

    printf("\nEnter the height of F : ");
    scanf("%d", &height);


    int mid = height / 2;
        int i, j;

        printf("\n\n");
        for(i = 1; i <= height; i++){
           for(j = 1; j <= height + 1; j++){
               if(i == 1 || j == 1){
                   printf("*");
               }
           }

           for(j = 1; j <= mid + 1; j++){
            if(i == mid){
                printf("*");
            }
          }
         
          printf("\n");
        }
        printf("\n\n");

    return 0;
}
