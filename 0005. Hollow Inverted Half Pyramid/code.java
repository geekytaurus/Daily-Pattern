import java.util.Scanner;


class hollowInverted_halfPyramid{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int rows = input.nextInt();
        

        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= rows-i+1; j++){
                if(i == 1 || i == rows || j == 1 || j == rows-i+1){
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



