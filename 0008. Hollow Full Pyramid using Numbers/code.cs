using System;


namespace hollowFullPyramid_usingNumbers
{
    class Program
    {

        static void Main(string[] args)
        {
            Console.Write("Enter the number of rows : ");
            int rows = Convert.ToInt32(Console.ReadLine());

            for (int i = 1; i <= rows; i++)
            {
                for (int j = i; j < rows; j++)
                {
                    Console.Write(" ");
                }
                for (int j = 1; j <= i; j++)
                {
                    if (j == 1 || i == rows)
                    {
                        if (j <= 9)
                            Console.Write(j + " ");
                        else
                            Console.Write(j);
                    }
                    else
                    {
                        Console.Write(" ");
                    }
                }
                for (int k = 1; k < i; k++)
                {
                    if ((k == (i - 1)) && (k < (rows - 1)))
                    {
                        Console.Write(k + 1);
                    }
                    else
                    {
                        Console.Write(" ");
                    }
                }

                Console.Write("\n");
            }

        }
    }
}
