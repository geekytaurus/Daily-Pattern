#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void printO(int height)
{
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == width - abs(space)
                || j == abs(space))
                printf("*");
            else if ((i == 0
                      || i == height - 1)
                     && j > abs(space)
                     && j < width - abs(space))
                printf("*");
            else
                printf(" ");
        }
        if (space != 0
            && i < height / 2) {
            space--;
        }
        else if (i >= (height / 2 + height / 5))
            space--;
        printf("\n");
    }
}

int main(){

    int height;

    printf("\nEnter the height of  Q : ");
    scanf("%d", &height);
    printf("\n");

    printO(height);
    int i, j, d = height;
    for (i = 0; i < 2; i++) {
        for (j = 0; j <= d; j++) {
            if (j == d)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        d++;
    }


    printf("\n\n");

    return 0;
}
