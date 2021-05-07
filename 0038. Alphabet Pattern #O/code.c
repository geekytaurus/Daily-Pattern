#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    int height;
    printf("\nEnter the height of O : ");
    scanf("%d", &height);
    
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;

    printf("\n");
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

    printf("\n\n");
    return 0;
}
