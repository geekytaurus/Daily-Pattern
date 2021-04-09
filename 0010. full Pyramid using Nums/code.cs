using System;


namespace PlusSign
{
    class Program
    {

        static void Main(string[] args)
        {
            Console.Write("Enter the number of rows : ");
            int rows = Convert.ToInt32(Console.ReadLine());

            for (int i = 1; i <= rows; i++)
            {
                int k = i - 1;

                for (int sp = 1; sp <= rows - i; sp++)
                {
                    Console.Write("  ");
                }

                for (int j = 1; j <= i; j++)
                {
                    if (k + 1 >= 10)
                    {
                        Console.Write(++k);
                    }
                    else
                    {
                        Console.Write(++k + " ");
                    }

                }

                for (int j = i + 1; j <= 2 * i - 1; j++)
                {
                    if (k - 1 >= 10)
                    {
                        Console.Write(--k);
                    }
                    else
                    {
                        Console.Write(--k + " ");
                    }

                }

                Console.Write("\n");
            }

            Console.Write("\n");
        }
    }
}
