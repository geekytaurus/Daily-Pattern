#include<stdio.h>
int main()
{
  int i,j,k;
  int n;
  printf("Enter the number of rows : ");
  scanf("%d", &n);

  printf("\n");
  for(i=n; i>=1; i--)
  {
    for(j=1; j<=n; j++)
    {
      if(j <= i)
        printf("%d", j);
      else
        printf("*");
    }
    for(j=n; j>=1; j--)
    {
      if(j <= i)
        printf("%d", j);
      else
        printf("*");
    } 
    printf("\n");
  }

  printf("\n");
  return 0;
}
