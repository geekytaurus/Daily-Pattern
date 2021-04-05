using System;


namespace inverted_fullPyramid
{
    class Program
    {

        static void Main(string[] args)
        {
            Console.Write("Enter the number of rows : ");
            int row = Convert.ToInt32(Console.ReadLine());

            int rows = row + 1;

            for (int i = rows; i >= 1; i--)
            {

                for (int sp = 1; sp <= rows - i; sp++)
                {

                    Console.Write(" ");

                }
                for (int j = 1; j <= i - 1; j++)
                {
                    Console.Write("* ");
                }
                Console.Write("\n");
            }

        }
    }
}
