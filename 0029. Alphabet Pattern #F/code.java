import java.util.Scanner;

import javax.swing.SpringLayout;

class Fpat{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("\n\nEnter the Height of F : ");
        int height = sc.nextInt();

        int mid = height / 2;
        int i, j;

        System.out.println("\n\n");
        for(i = 1; i <= height; i++){
           for(j = 1; j <= height + 1; j++){
               if(i == 1 || j == 1){
                   System.out.print("*");
               }
           }

           for(j = 1; j <= mid + 1; j++){
            if(i == mid){
                System.out.print("*");
            }
          }
         
          System.out.println();
        }

        System.out.println("\n\n");

    }
}
