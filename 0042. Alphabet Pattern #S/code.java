import java.util.Scanner;

class Spat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int height;
        System.out.print("\nEnter the Height of S : ");
        height = sc.nextInt();

        int i, j;
        System.out.println();
        for (i = 0; i < height; i++)
        {
            for (j = 0; j < height; j++) 
            {
                if ((i == 0 || i == height / 2
                    || i == height - 1))
                    System.out.printf("*");
                else if (i < height / 2
                        && j == 0)
                    System.out.printf("*");
                else if (i > height / 2
                        && j == height - 1)
                    System.out.printf("*");
                else
                    System.out.printf(" ");
            }
            System.out.printf("\n");
        }

        System.out.println("\n\n");

        
    }
}
