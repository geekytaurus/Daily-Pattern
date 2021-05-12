import java.util.Scanner;

public class Tpat {
      public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);

          int height;
          System.out.print("\nEnter the height of T : ");
          height = sc.nextInt();

          int width = height + 3;
          int mid = width/2 + 1;

          System.out.print("\n");
          for(int i = 1; i <= height; i++){
              for(int j = 1; j <= width; j++){
                  if(i == 1 || j == mid){
                      System.out.print("*");
                  }
                  else{
                      System.out.print(" ");
                  }
              }
              System.out.print("\n");
          }

          System.out.print("\n\n");

      }
}
