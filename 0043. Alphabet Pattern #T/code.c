#include<stdio.h>


int main(){
    
    int height, width, mid;

    printf("\nEnter the height of T : ");
    scanf("%d", &height);

    width = height + 3;
    mid = width/2 + 1;

          printf("\n");
          for(int i = 1; i <= height; i++){
              for(int j = 1; j <= width; j++){
                  if(i == 1 || j == mid){
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
