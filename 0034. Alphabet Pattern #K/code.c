#include<stdio.h>
#include<math.h>

int main(){
   int height, width, i, j;
     
    printf("\nEnter the height of K : ");
    scanf("%d", &height);

    width = height - 2;
    
    printf("\n");
    for(i = 1; i <= (height/2 + 1); i++){
        for(j = 1; j <= width; j++){
            if(j == 1 || j == (height - i - 1) ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i = height/2; i >= 1; i--){
        for(j = 1; j <= width; j++){
            if(j == 1 || j == (height - i - 1) ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

   printf("\n\n");
    return 0;
}
