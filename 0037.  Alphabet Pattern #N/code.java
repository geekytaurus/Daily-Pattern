import java.util.Scanner;

public class Npat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int i, j, counter = 0, height;
        System.out.print("\nEnter the Height of N : ");
        height = sc.nextInt();

        for (i = 0; i < height; i++) {
            System.out.print("*");
            for (j = 0; j <= height; j++) {
                if (j == height)
                    System.out.print("*");
                else if (j == counter)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            counter++;
            System.out.println();
        }

        System.out.println("\n\n");
    }
    
}
