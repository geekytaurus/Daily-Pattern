import java.util.Scanner;

class Lpat{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nEnter the height of L : ");
        int height = sc.nextInt();

        int width = height;
        int i, j;

        System.out.println();
        for(i = 1; i <= height; i++){
            for(j = 1; j <= width; j++){
                if(j == 1 || i == height){
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
