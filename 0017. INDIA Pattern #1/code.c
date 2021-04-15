#include<stdio.h> 
int main()
{
    char s[]="INDIA";
    int i, j;
    
    printf("\n");

    for(i=0; s[i]; i++)
    {
        for(j=0; j<=i; j++){
            if(j == i){
                printf("%c", s[j]);
            }
            else{
                printf("%c~", s[j]);
            }
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
