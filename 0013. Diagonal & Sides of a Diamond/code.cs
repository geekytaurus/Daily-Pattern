using System;


namespace diaSide

{
    class Program
    {

        static void Main(string[] args)
        {
            Console.Write("Enter the number (must be odd) of rows : ");
            int rows = Convert.ToInt32(Console.ReadLine());

            int num1 = rows / 2 * 3;

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < rows; j++)
                {

                    if (i == rows / 2 || j == rows / 2 || i + j == rows / 2 || i - j == rows / 2 || j - i == rows / 2 || i + j == num1)
                        Console.Write("*");
                    else
                        Console.Write(" ");
                }
                Console.Write("\n");
            }

            Console.Write("\n");

        }
    }
}


