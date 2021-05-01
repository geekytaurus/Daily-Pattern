import java.util.Scanner;

class Ipat{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nEnter the height of I : ");
        int height = sc.nextInt();

        int width = height - 2;
        int mid = width / 2 + 1;
        int  i, j;
   
        for(i = 1; i <= height; i++){
            for(j = 1; j <= width; j++){
                if(i == 1 || i == height || j == mid){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }

        System.out.print("\n\n");
    }
}
