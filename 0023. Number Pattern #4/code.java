import java.util.Scanner;

class NumPat6{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter the number of Rows : ");
        int rows = input.nextInt();
        
        int i, j;

        System.out.println("\n\n");
        System.out.println("0");
        for(i=rows; i>=1; i--)
        {
            for(j=i; j<=rows; j++)
               System.out.print(j+" ");
            System.out.print("0 ");

            for(j=rows; j>=i; j--)
               System.out.print(j+" ");
      
            System.out.println();     
        
        }
        System.out.println("\n\n");
    }
}
