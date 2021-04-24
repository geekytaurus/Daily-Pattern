#include<stdio.h>


int main(){

    int height, i, j;

    printf("\nEnter the Height of C : ");
    scanf("%d", &height);
    
    int width = (2 * height) - 1;

    printf("\n\n");

    
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < (height - 1); j++) {
            if (i == 0 || i == height - 1)
                printf("*");
            else
                continue;
        }
        printf("\n");
    }

    printf("\n\n");
  
  return 0;
}
