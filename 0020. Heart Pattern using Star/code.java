import java.util.Scanner;


class heartPat{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int n = input.nextInt();
        

        int i, j;
        for(i=n/2; i<=n; i+=2)
        {
        for(j=1; j<n-i; j+=2)
        {
            System.out.print(" ");
        }

        for(j=1; j<=i; j++)
        {
            System.out.print("*");
        }

        for(j=1; j<=n-i; j++)
        {
            System.out.print(" ");
        }

        for(j=1; j<=i; j++)
        {
            System.out.print("*");
        }

        System.out.print("\n");
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            System.out.print(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            System.out.print("*");
        }

        System.out.print("\n");
    }
        

    System.out.print("\n");
        

    }
}



