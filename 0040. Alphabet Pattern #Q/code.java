import java.util.Scanner;
// import java.lang.Math;


public class Qpat {
     static void printO(int height)
     {
         int i, j, space = (height / 3);
         int width = height / 2 + height / 5 + space + space;
         for (i = 0; i < height; i++) {
             for (j = 0; j <= width; j++) {
                 if (j == width - Math.abs(space)
                     || j == Math.abs(space))
                     System.out.print("*");
                 else if ((i == 0
                           || i == height - 1)
                          && j > Math.abs(space)
                          && j < width - Math.abs(space))
                    System.out.print("*");
                 else
                     System.out.print(" ");    
             }
             if (space != 0
                 && i < height / 2) {
                 space--;
             }
             else if (i >= (height / 2 + height / 5))
                 space--;
            System.out.println();
         }
     }
     

     
      public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);

          int height;
          System.out.print("\nEnter the height of Q : ");
          height = sc.nextInt();

          System.out.println();


          printO(height);
          int i, j, d = height;
          for (i = 0; i < 2; i++) {
              for (j = 0; j <= d; j++) {
                  if (j == d)
                      System.out.print("*");
                  else
                      System.out.print(" ");
              }
              System.out.print("\n");
              d++;
          }



          System.out.println("\n\n");
      }
}
