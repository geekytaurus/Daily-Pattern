import java.util.Scanner;

class hollowFullPyramid_usingNumbers{
    public static void main(String[] args){
        
       
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int rows = input.nextInt();
        
    
        for(int i = 1; i <= rows; i++){
          for(int j = i; j < rows; j++){
              System.out.print(" ");
          }
          for(int j = 1; j <= i; j++){
              if(j == 1 || i == rows){
                  if( j <= 9 ){
                     System.out.print(j+" ");
                  }
                  else{
                      System.out.print(j);
                  }
              }
              else{
                  System.out.print(" ");
              }
          }
          for(int j = 1; j < i; j++){
              if(j == i-1 && j < rows-1){
                  System.out.print(j+1);
              }
              else{
                  System.out.print(" ");
              }
          }
    
    
            System.out.print("\n");
        }
    }
}
