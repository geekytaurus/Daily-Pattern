import java.util.Scanner;

class numPat5{
    public static void main(String[] args){
    Scanner input = new Scanner(System.in);

    System.out.print("Enter the number of rows : ");
    int n = input.nextInt();

    for(int i=1; i<=n; i++)  
    {  
        for(int j=1; j<=n; j++)  
        {  
            if(i==1 ||i==n||j==1||j==n-i+1||i==j||j==n)  
            {  
                System.out.print("*");
            }  
            else  
            {  
                  
                System.out.print(" ");
            }  
                 
        }        
        System.out.println();
    }  
}
}
