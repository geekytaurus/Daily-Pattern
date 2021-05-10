#include<stdio.h>

int main(){
    int height;

    printf("\nEnter the height of R : ");
    scanf("%d", &height);

    int width = height - 2;
    int i, j, half = (height / 2);

    printf("\n");
    for (i = 0; i < height; i++) 
    {
        printf("*");
        for (j = 0; j < width; j++) 
        {
            if ((i == 0 || i == half)
                 && j < (width - 2))
                printf("*");
            else if (j == (width - 2)
                   && !(i == 0 || i == half))
                   printf("*");
            else
                    printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}
