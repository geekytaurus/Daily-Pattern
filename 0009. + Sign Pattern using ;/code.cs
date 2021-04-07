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
                for (int j = 1; j <= rows; j++)
                {
                    if ((i == rows / 2 + 1) || (j == rows / 2 + 1))
                    {
                        Console.Write("; ");
                    }
                    else
                    {
                        Console.Write("  ");
                    }
                }
                Console.Write("\n");
            }

            Console.Write("\n");

        }
    }
}
