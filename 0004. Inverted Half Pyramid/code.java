import java.util.Scanner;

public class Inverted_half_pyramid{
    private static Scanner input;
    public static void main(String[] args){
        int rows;
        input = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        rows = input.nextInt();

        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= rows-i+1; j++){
                System.out.print("*");
            }
            System.out.print("\n");
        }

    }
}
