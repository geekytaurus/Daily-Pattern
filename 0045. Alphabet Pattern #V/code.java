import java.util.Scanner;

public class Vpat {
       public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);

           int height, width;

           System.out.print("\nEnter the Height of V : ");
           height = sc.nextInt();

           width = (2 * height) - 1;

           System.out.println();
           for(int i = 1; i <= height; i++){
               for(int j = 1; j <= width; j++){
                   if(j == i || j == (width-i+1)){
                       System.out.print("*");
                   }
                   else{
                       System.out.print(" ");
                   }
               }
               System.out.println();

           }

           System.out.print("\n\n");
       }    
}
