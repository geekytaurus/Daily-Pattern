import java.util.Scanner;


class inverted_fullPyramid{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int row = input.nextInt();
        
        int rows = row+1;

        for(int i = rows; i >=1; i--){

            for(int sp = 1; sp <= rows-i; sp++){
                
                    System.out.print(" ");
                
            }
            for(int j = 1; j <= i-1; j++ ){
                System.out.print("* ");
            }
            System.out.print("\n");
        }

    }
}



