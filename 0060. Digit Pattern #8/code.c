#include<stdio.h>


int main()
{
    int height, width;
    printf("\nEnter the height of 8 : ");
    scanf("%d", &height);

    width = height;

    printf("\n");
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if ((i == 1) && (j != 1 && j != width))
            {
                printf("*");
            }
            else if ((i > 1 && i < height / 2 + 1) && (j == 1 || j == width))
            {
                printf("*");
            }
            else if ((i == height / 2 + 1) && (j != 1 && j != width))
            {
                printf("*");
            }
            else if ((i > height / 2 + 1 && i < height) && (j == 1 || j == width))
            {
                printf("*");
            }
            else if ((i == height) && (j != 1 && j != width))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
