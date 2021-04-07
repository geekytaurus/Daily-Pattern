import java.util.Scanner;

class _signPat{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int rows = input.nextInt();



            for(int i = 1; i <= rows; i++){
                for(int j = 1; j <= rows; j++){
                    if( (i == rows/2 + 1)  || (j == rows/2 + 1) ){
                        System.out.print("; ");
                    }
                    else{
                        System.out.print("  ");
                    }
                }
                System.out.print("\n");
            }

            System.out.print("\n");
        }
    }




