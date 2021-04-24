import java.util.Scanner;

class Cpat{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);


        int height, i, j;

        System.out.print("Enter the Height of C : ");
        height = input.nextInt();

        int width = (2 * height) - 1;

    
        for (i = 0; i < height; i++) {
            System.out.print("*");
            for (j = 0; j < (height - 1); j++) {
                if (i == 0 || i == height - 1)
                    System.out.print("*");
                else
                    continue;
        }
        System.out.println();
    }

   
    }
}
