import java.util.Scanner;

public class StarPat1 {
      public static void main(String[] args) {
          Scanner  sc = new Scanner(System.in);

          System.out.print("\nEnter the no.(odd) of Rows : ");
          int rows;
          rows = sc.nextInt();

          int os = rows/2; //os--> outer space
          int is = -1;     // is --> inner space

          System.out.println();
          for(int i = 1; i <= rows; i++){
              for(int j = 1; j <= os; j++){
                  System.out.print("  ");
              }
              System.out.print("* ");

              for(int j = 1; j <= is; j++){
                  System.err.print("  ");
              }
              if(i > 1 && i < rows){
                  System.out.print("* ");
              }
              

              if(i <= rows/2){
                  os--;
                  is += 2;
              }else{
                  os++;
                  is -= 2;
              }
              System.out.println();
              
          }

          System.out.println("\n\n");
      }
    
}
