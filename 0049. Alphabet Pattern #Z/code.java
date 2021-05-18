import java.util.Scanner;

public class Zpat {
       public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);

           int height;
           System.out.print("\nEnter the Height of Z : ");

           height = sc.nextInt();

           System.out.println();
           for(int i = 1; i <= height; i++){
               for(int j = 1; j <= height; j++){
                   if(i == 1 || i == height || j == (height-i+1)){
                       System.out.print("*");
                   }
                   else{
                       System.out.print(" ");
                   }
               }
               System.out.println();
           }

           System.out.println("\n\n");
       }    
}
