import java.util.Scanner;
public class StarPat3 {
       public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);

           int rows;
           System.out.print("\nEnter the no. of Rows : ");
           rows = sc.nextInt();

           System.out.println();
           for(int i = 1; i <= rows; i++){
               for(int j = 1; j <= rows; j++){
                   if(i == 1 && (j == rows || j <= rows/2 +1)){
                       System.out.print("* ");
                   }
                   else if(i <= rows/2 && (j == rows/2 + 1 || j == rows)){
                       System.out.print("* ");
                       
                   }
                   else if(i == rows/2+1){
                       System.out.print("* ");
                   }
                   else if(i > rows/2+1 && (j == 1 || j == rows/2+1)){
                       System.out.print("* ");
                   }
                   else if(i == rows && (j == 1 || j >= rows/2+1)){
                       System.out.print("* ");
                   }
                   else{
                       System.out.print("  ");
                   }
               }
               System.out.println();
           }

           System.out.println("\n\n");
       }    
}
