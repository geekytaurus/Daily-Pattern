#include<stdio.h>


// Function to print the pattern of 'A'
void printA(int height, int width)
{
    int n = width / 2, i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == n || j == (width - n)
                || (i == height / 2 && j > n
                    && j < (width - n)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        
        n--;
    }
}

int main(){

     int rows;

     printf("Enter the number of rows : ");
     scanf("%d", &rows);



    // Number of lines for the alphabet's pattern
    int height = rows;

    // Number of character width in each line
    int width = (2 * height) - 1;
 
    printA(height, width);
  
    return 0;
}
