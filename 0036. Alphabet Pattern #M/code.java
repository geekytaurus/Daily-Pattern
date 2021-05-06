import java.util.Scanner;

public class Mpat {
       public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);

           int i, j, counter = 0, height;

           System.out.print("\nEnter the height of M : ");
           height = sc.nextInt();

           for (i = 0; i < height; i++) {
            System.out.print("*");
            for (j = 0; j <= height; j++) {
                if (j == height)
                        System.out.print("*");
                else if (j == counter
                         || j == height - counter - 1)
                         System.out.print("*");
                else
                        System.out.print(" ");
            }
            if (counter == height / 2) {
                counter = -99999;
            }
            else
                counter++;
                System.out.println();
        }

       }
}
