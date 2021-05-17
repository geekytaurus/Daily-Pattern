import java.util.Scanner;

public class Ypat {
       public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);

           int height;
           System.out.print("\nEnter the height(odd number) of Y : ");
           height = sc.nextInt();

           System.out.println();
           for(int i = 1; i <= height/2; i++){
               for(int j = 1; j <= height; j++){
                   if(j == i || j == (height-i + 1)){
                       System.out.print("*");
                   }
                   else{
                       System.out.print(" ");
                   }
               }
               System.out.println();
           }
           for(int i = 1; i <= height/2+1; i++){
            for(int j = 1; j <= height; j++){
                if(j == height/2+1){
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
