import java.util.Scanner;


class butterFlyPat{
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int rows = input.nextInt();
        
        int i, j, sp;
    
        for(i = 1; i <= rows; i++){
            for(j = 1; j <= i; j++){
                System.out.print("*");
            }
            for(sp = 1; sp <= (2*rows-2*i); sp++){
                System.out.print(" ");
            }
            for(j = 1; j <= i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    
        for(i = rows; i >= 1; i--){
            for(j = 1; j <= i; j++){
                System.out.print("*");
            }
            for(sp = 1; sp <= (2*rows-2*i); sp++){
                System.out.print(" ");
            }
            for(j = 1; j <= i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
        
        
    }
}
