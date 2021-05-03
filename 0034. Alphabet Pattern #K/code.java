
import java.util.Scanner;

class Kpat{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

    int height, width, i, j;
    System.out.print("\nEnter the height of K : ");
    height = sc.nextInt();

        
    width = height - 2;
    
    
    for(i = 1; i <= (height/2 + 1); i++){
        for(j = 1; j <= width; j++){
            if(j == 1 || j == (height - i - 1) ){
                System.out.print("*");
            }
            else{
                System.out.print(" ");
            }
        }
        System.out.print("\n");
    }
    for(i = height/2; i >= 1; i--){
        for(j = 1; j <= width; j++){
            if(j == 1 || j == (height - i - 1) ){
                System.out.print("*");
            }
            else{
                System.out.print(" ");
            }
        }
        System.out.print("\n");
    }
     
System.err.println("\n");
    }
}
