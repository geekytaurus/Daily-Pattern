import java.util.Scanner;

class fullPyramid{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int rows = input.nextInt();

        for(int i = 1; i <= rows; i++){
            for(int space = 1; space <= rows-i; space++){
                System.out.print(" ");
            }
            for(int j = 1; j <= i; j++){
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}
