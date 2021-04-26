import java.util.Scanner;

class Epat{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.println("\n");
        System.out.print("\nEnter the Height of E : ");
        int height = input.nextInt();

        int mid = height / 2 + 1;

        System.out.println("\n");
        int i, j;
        for(i = 1; i <= height; i++){
            for(j = 1; j < height; j++){
                if(i == 1 || j == 1 || i == mid || i == height){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }

        System.out.println("\n\n");

    }
}
