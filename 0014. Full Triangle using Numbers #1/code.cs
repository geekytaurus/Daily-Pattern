using System;


namespace FullTriangleUsingNumbers
{
    class Program
    {

        static void Main(string[] args)
        {
            Console.Write("Enter the number of rows : ");
            int rows = Convert.ToInt32(Console.ReadLine());

            for (int i = 1; i <= rows; i++)
            {
                int k = 1;
                for (int sp = 1; sp <= rows - i; sp++)
                {
                    Console.Write("  ");
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    if (j % 2 == 0)
                    {
                        Console.Write("  ");
                    }
                    else
                    {
                        if (k >= 10)
                        {
                            Console.Write(k++);
                        }
                        else
                        {
                            Console.Write(k++ + " ");
                        }
                    }
                }
                Console.WriteLine();
            }

            Console.WriteLine("\n\n");


            return;

        }
    }
}



