import java.util.Scanner;

class diaSide{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number(must be odd) of rows : ");
        int n = input.nextInt();

        int i, j;
        int num1 = n / 2 * 3;
        for(i = 0; i < n; i++){
           for(j = 0; j < n; j++){

            if(i == n / 2 || j == n / 2 || i + j == n / 2 || i - j == n / 2 || j - i == n / 2 || i + j == num1)
               System.out.print("*");
            else
               System.out.print(" ");
            }
            System.out.print("\n");
        }

        System.out.print("\n");

    }
}




