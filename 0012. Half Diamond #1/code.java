import java.util.Scanner;

class halfDia1{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int rows = input.nextInt();

        int i, j;

        for(i = 1; i <= rows; i++){
            for(j = 1; j <= 2*i-1; j++){
                if(j % 2 == 0){
                    System.out.print("*");
                }
                else{
                    System.out.print(i);
                }
            }
            System.out.println();
        }
    
        for(i = rows; i >= 1; i--){
            for(j = 1; j <= 2*i-1; j++){
                if(j % 2 == 0){
                    System.out.print("*");
                }
                else{
                    System.out.print(i);
                }
            }
            System.out.println();
        }
        System.out.println();
    }
}
