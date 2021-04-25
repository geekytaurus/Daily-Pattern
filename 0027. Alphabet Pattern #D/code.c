#include<stdio.h>


int main(){
    int height, width, i, j;

    printf("\nEnter the Height of D : ");
    scanf("%d", &height);

    width = (height - 1) / 2;
    
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                && j < height - 1)
                printf("*");
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


