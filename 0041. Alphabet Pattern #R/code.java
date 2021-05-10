import java.util.Scanner;

public class Rpat {
       public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);

           System.out.print("\nEnter the height of R : ");
           int height;
           height = sc.nextInt();

           int width = height - 2;
           int i, j, half = (height / 2);

           System.out.println();
           for (i = 0; i < height; i++) 
           {
               System.out.printf("*");
               for (j = 0; j < width; j++) 
               {
                    if ((i == 0 || i == half)
                        && j < (width - 2))
                        System.out.printf("*");
                    else if (j == (width - 2)
                           && !(i == 0 || i == half))
                        System.out.printf("*");
                   else
                        System.out.printf(" ");
                }
                System.out.printf("\n");
           }
           System.out.print("\n\n");
    }    
}
