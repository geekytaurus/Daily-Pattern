using System;


namespace ValleyOfNumbers
{
    class Program
    {

        static void Main(string[] args)
        {
            Console.Write("Enter the number of rows : ");
            int rows = Convert.ToInt32(Console.ReadLine());
            int k;

            Console.WriteLine();

            for (int i = 1; i <= rows; i++)
            {
                k = i;

                for (int j = 1; j <= i; j++) // number on left
                {
                    if (j < 10)
                        Console.Write(j + " ");
                    else
                        Console.Write(j);
                }

                for (int sp = 1; sp <= (rows - i); sp++) // spacing
                {
                    Console.Write("    ");

                }

                for (int j = 1; j <= i; j++) // numbers on right
                {
                    if (k > 9)
                        Console.Write(k--);
                    else
                        Console.Write(" " + k--);
                }

                Console.WriteLine();
            }

            Console.WriteLine();

        }
    }
}



