#include<stdio.h>

int main(){
    
    int height;

    printf("\nEnter the Height of P : ");
    scanf("%d", &height);

    int i, j;

    printf("\n");
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2 - 1)
                && j < height - 1)
                printf("*");
            else if (i < height / 2 - 1
                     && j == height - 1 && i != 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
    
}
