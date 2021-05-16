import java.util.Scanner;

public class Xpat {
       public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);

           int height, row,  width;

           //Enter odd numbers for better view
           System.out.print("\nEnter the Height of X : "); 
           row = sc.nextInt();

           height = row / 2 + 1;
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
           for(int i = height-1; i >= 1; i--){
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
