#include<stdio.h>


int main(){

        int i, j, rows;
        
        printf("Enter the number of rows : ");
        scanf("%d", &rows);

        
        printf("0\n");

        for(i=rows; i>=1; i--)
        {
            for(j=i; j<=rows; j++)
                printf("%d ", j);
            printf("0 ");

            for(j=rows; j>=i; j--)
               printf("%d ", j);
      
            printf("\n");  
        
        }

        printf("\n");

    return 0;
}
