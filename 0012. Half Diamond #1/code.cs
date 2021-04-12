using System;


namespace HalfDia1

{
    class Program
    {

        static void Main(string[] args)
        {
            Console.Write("Enter the number of rows : ");
            int rows = Convert.ToInt32(Console.ReadLine());

            for (int s = 1; s <= rows; s++)
            {
                for (int j = 1; j <= 2 * s - 1; j++)
                {
                    if (j % 2 == 0)
                    {
                        Console.Write("*");
                    }
                    else
                    {
                        Console.Write(s);
                    }
                }
                Console.WriteLine();
            }

            for (int i = rows; i >= 1; i--)
            {
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    if (j % 2 == 0)
                    {
                        Console.Write("*");
                    }
                    else
                    {
                        Console.Write(i);
                    }
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }
    }
}

