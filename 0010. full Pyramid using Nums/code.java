import java.util.Scanner;

class fullTri_Nums{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int rows = input.nextInt();
        int i, j, k, sp;

        for(i = 1; i <= rows; i++){
            k = i-1;
    
            for(sp = 1; sp <= rows-i; sp++){
                System.out.print("  ");
            }
    
            for(j = 1; j <= i; j++){
                if(k+1 >= 10){
                    System.out.print(++k);
                }
                else{
                    System.out.print(++k +" ");
                }
                
            }
    
            for(j = i+1; j <= 2*i-1; j++){
                if(k-1 >= 10 ){
                    System.out.print(--k);
                }
                else{
                    System.out.print(--k +" ");
                }
                
            }
    
            System.out.print("\n");
        }
    
        System.out.print("\n");
    }
}
