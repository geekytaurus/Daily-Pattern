import java.util.Scanner;

class Gpat{
        public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("\n\nEnter the Height of G : ");
        int height = sc.nextInt();

        System.out.print("\n");
        int width = (height - 2);
        int mid = (height / 2) + 1;
        
        int i, j;

        System.out.print("\n");
        for(i = 1; i <= height; i++){
            for(j = 1; j <= width; j++){
                if( (i == 1 || i == height) && (j != 1) ){
                    System.out.print("*");
                }
                else if( (j == 1) && (i != 1) && (i != height)){
                    System.out.print("*");
                }
                else if(i > mid && j == width){
                    System.out.print("*");
                }
                else if( (j >= height/2) && (i == mid) ){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }

            
            System.out.println( );
        }
        System.out.print("\n\n");


        System.out.print("\n\n");

    }
}

