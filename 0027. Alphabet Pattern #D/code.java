import java.util.Scanner;

class Dpat{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the height of D : ");
        int height = input.nextInt();

        int width = (height - 1) / 2;
        int i, j;

        for (i = 0; i < height; i++) {
            System.out.print("*");

            for (j = 0; j < height; j++) {
                if ((i == 0 || i == height - 1)
                    && j < height - 1)
                    System.out.print("*");
                else if (j == height - 1 && i != 0
                         && i != height - 1)
                    System.out.print("*");
                else
                System.out.print(" ");
            }
            System.out.print("\n");
        }
    }
}
