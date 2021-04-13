#include<stdio.h>


int main()
{
  int n, i, j, c;

  printf("Enter the number of rows: ");
  scanf("%d",&n);

  for(i = 1; i <= (2 * n) - 1; i++){
        if (i < n)
           c = i;
        else
           c = n-(i-n);
    for (j = 1; j <= (2 * n) - 1; j++ ){
        if (i == j || i + j == 2 * n)
           printf("%d", c);
        else
           printf(" ") ;
    }

    printf("\n") ;
  }
  return 0;

}
