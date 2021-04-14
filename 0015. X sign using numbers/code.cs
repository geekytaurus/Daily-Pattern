using System;


namespace XSignUsingNumbers
{
    class Program
    {

        static void Main(string[] args)
        {
            Console.Write("Enter the number of rows : ");
            int rows = Convert.ToInt32(Console.ReadLine());
            int c;

            for (int i = 1; i <= (2 * rows) - 1; i++)
            {
                if (i < rows)
                    c = i;
                else
                    c = rows - (i - rows);
                for (int j = 1; j <= (2 * rows) - 1; j++)
                {
                    if (i == j || i + j == 2 * rows)
                        Console.Write(c);
                    else
                        Console.Write(" ");
                }

                Console.WriteLine();
            }

        }
    }
}



