#include<stdio.h>

int main(){
    int height, i, j;
    
    printf("\nEnter the height of J : ");
    scanf("%d", &height);
    
    printf("\n");
    for (i = 0; i < height; i++) {
        
        for (j = 0; j < height; j++) {
            if(i == 0 && j <= (height-2) && j >= 1){
                printf("*");
            }
            
            else if (i == height - 1 && (j > 0
                                    && j < height - 1))
                printf("*");
            else if ((j == height - 1 && i != 0
                      && i != height - 1)
                     || (i >= (height-2)
                         && j == 0 && i != height - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

 printf("\n\n");
    return 0;
}
