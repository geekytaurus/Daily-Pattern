#include<stdio.h>



void printDiamond(int n)
	{
		printf("\n");
	
		int i, j = 0;
	
		// for top half
		for (i = 0; i < n; i++) {
	
			// for left *
			for (j = i; j < n; j++)
				printf("*");
	
			// for middle " "
			for (j = 0; j < 2 * i + 1; j++)
				printf(" ");
	
			// for right *
			for (j = i; j < n; j++)
				printf("*");
	
			printf("\n");
		}
	
		// for below half
		for (i = 0; i < n - 1; i++) {
	
			// for left *
			for (j = 0; j < i + 2; j++)
				printf("*");
	
			// for middle " "
			for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
				printf(" ");
	
			// for right *
			for (j = 0; j < i + 2; j++)
				printf("*");
	
			printf("\n");
		}
	
		printf("\n");
	}
	



int main()
	{
	
		// Define n
		int n;

        printf("Enter the number of Rows : ");
        scanf("%d", &n);

        printf("\n");

		printDiamond(n);
        
        printf("\n");

        return 0;
	}
