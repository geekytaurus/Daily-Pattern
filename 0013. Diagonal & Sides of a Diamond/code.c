#include<stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the number(must be odd) of rows : ");
    scanf("%d", &n);
    
    printf("\n");
    
    int num1 = n / 2 * 3;
    for(i = 0; i < n; i++){
       for(j = 0; j < n; j++){

        if(i == n / 2 || j == n / 2 || i + j == n / 2 || i - j == n / 2 || j - i == n / 2 || i + j == num1)
            printf("*");
        else
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
