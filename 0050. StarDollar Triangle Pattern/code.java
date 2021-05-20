import java.util.Scanner;

public class StarDollarPat {
       public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);

           int rows;
           System.out.print("\nEnter the No. of Rows : ");
           rows = sc.nextInt();

           System.out.println();
           for(int i = 1; i <= rows; i++){
               for(int j = 1; j <= i; j++){
                   if( (i % 2 == 0) && (j % 2 != 0) ){
                       System.out.print("$ ");
                   }else if((i % 2 != 0) && (j % 2 == 0) ){
                       System.out.print("$ ");
                   }else{
                       System.out.print("* ");
                   }
               }
               System.out.println();
           }

           System.out.println("\n\n");


       }    
}
