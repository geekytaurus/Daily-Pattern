import java.util.Scanner;

public class Upat {
       public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);
           int height;

           System.out.print("\nEnter the height of U : ");
           height = sc.nextInt();

           int width = height + 3;
           System.out.print("\n");
           for(int i = 1; i <= height; i++){
               for(int j = 1; j <= width; j++){
                   if(i < height){
                    if( j == width || j == 1){
                        System.out.print("*");
                    }
                    else{
                        System.out.print(" ");
                    }
                   }
                   else{
                       if(j >= 2 && j < width){
                        System.out.print("*");
                       }
                       else{
                        System.out.print(" ");
                       }
                   }

               }
               System.out.println();
           }

           System.out.print("\n\n");
       }    
}
