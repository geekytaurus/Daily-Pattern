using System;


namespace HollowSquarePatternWithDiagonal

{
    class Program
    {

        static void Main(string[] args)
        {

            Console.Write("Enter the number of rows : ");
            int n = Convert.ToInt32(Console.ReadLine());


            Console.Write("\n\n");
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (i == 1 || i == n || j == 1 || j == n - i + 1 || i == j || j == n)
                    {
                        Console.Write("*");
                    }
                    else
                    {

                        Console.Write(" ");
                    }

                }
                Console.Write("\n");
            }

            Console.Write("\n\n");
        }
    }
}


