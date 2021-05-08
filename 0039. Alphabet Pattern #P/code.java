import java.util.Scanner;

class Ppat{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int height;
        System.out.print("\nEnter the height of P : ");
        height = sc.nextInt();

        int i, j;

        System.out.println();
        for (i = 0; i < height; i++) {
            System.out.print("*");
            for (j = 0; j < height; j++) {
                if ((i == 0 || i == height / 2 - 1)
                    && j < height - 1)
                    System.out.print("*");
                else if (i < height / 2 - 1
                         && j == height - 1 && i != 0)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.println();
        }
    
        System.out.print("\n\n");
    
    }
}
