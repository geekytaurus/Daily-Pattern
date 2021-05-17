#include<stdio.h>


int main(){
    int height;

    printf("\nEnter the height of Y : ");
    scanf("%d", &height); 

     printf("\n");
     for(int i = 1; i <= height/2; i++){
        for(int j = 1; j <= height; j++){
            if(j == i || j == (height-i + 1)){
                   printf("*");
               }
            else{
                   printf(" ");
               }
        }
        printf("\n");
    }
    for(int i = 1; i <= height/2+1; i++){
     for(int j = 1; j <= height; j++){
         if(j == height/2+1){
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
