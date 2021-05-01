import java.util.Scanner;


class Jpat{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nEnter the height of J : ");
        int height = sc.nextInt();

        int i, j;

        for (i = 0; i < height; i++) {
        
            for (j = 0; j < height; j++) {
                if(i == 0 && j <= (height-2) && j >= 1){
                    System.out.print("*");
                }
                
                else if (i == height - 1 && (j > 0
                                        && j < height - 1))
                    System.out.print("*");
                else if ((j == height - 1 && i != 0
                          && i != height - 1)
                         || (i >= (height-2)
                             && j == 0 && i != height - 1))
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.println();
        }
        System.out.println("\n\n");

    }
}
