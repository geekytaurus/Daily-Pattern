#include<stdio.h>

int main(){
    
    int i, j, counter = 0, height;

    printf("\nEnter the Height of N : ");
    scanf("%d", &height);

    printf("\n");
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j <= height; j++) {
            if (j == height)
                printf("*");
            else if (j == counter)
                printf("*");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
