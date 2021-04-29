import java.util.Scanner;

public class Hpat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       
        System.out.print("\nEnter the Height of H : ");
        int height = sc.nextInt();

        int width = height;
        int mid = height / 2 + 1;

        int i, j;
        System.out.print("\n");
        for(i = 1; i <= height; i++){
            for(j = 1; j <= width; j++){
                if(j == 1 || j == width || i == mid){
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
