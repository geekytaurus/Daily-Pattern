#include<stdio.h>


int main(){
    int height, width;

    printf("\nEnter the height of U : ");
    scanf("%d", &height);

    width = height + 3;
           printf("\n");
           for(int i = 1; i <= height; i++){
               for(int j = 1; j <= width; j++){
                   if(i < height){
                    if( j == width || j == 1){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                   }
                   else{
                       if(j >= 2 && j < width){
                        printf("*");
                       }
                       else{
                        printf(" ");
                       }
                   }

               }
               printf("\n");
           }

    printf("\n\n");
    return 0;
}
