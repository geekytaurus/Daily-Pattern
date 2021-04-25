using System;


namespace HeartPatternUsingStar

{
    class Program
    {

        static void Main(string[] args)
        {

            Console.Write("Enter the value of n : ");
            int n = Convert.ToInt32(Console.ReadLine());

            Console.ForegroundColor = ConsoleColor.Red;

            Console.WriteLine("\n");
            for (int i = n / 2; i <= n; i += 2)
            {
                for (int j = 1; j < n - i; j += 2)
                {
                    Console.Write(" ");
                }

                for (int j = 1; j <= i; j++)
                {
                    Console.Write("*");
                }

                for (int j = 1; j <= n - i; j++)
                {
                    Console.Write(" ");
                }

                for (int j = 1; j <= i; j++)
                {
                    Console.Write("*");
                }

                Console.Write("\n");
            }

            for (int i = n; i >= 1; i--)
            {
                for (int j = i; j < n; j++)
                {
                    Console.Write(" ");
                }

                for (int j = 1; j <= (i * 2) - 1; j++)
                {
                    Console.Write("*");
                }

                Console.Write("\n");
            }

            Console.Write("\n\n");
            Console.ForegroundColor = ConsoleColor.White;
        }
    }
}


