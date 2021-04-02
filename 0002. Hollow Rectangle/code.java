import java.util.Scanner;

public class HollowRectangle{
    private static Scanner input;
    public static void main(String[] args)
    {
        int rows, cols, i, j;
        input = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        rows = input.nextInt();

        System.out.print("Enter the number of cols : ");
        cols = input.nextInt();

        for(i = 1; i <= rows; i++){
            for(j = 1; j <= cols; j++){
                if(i==1 || i==rows || j==1 || j==cols){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
                
            }
            System.out.print("\n");
        }
    }
}
