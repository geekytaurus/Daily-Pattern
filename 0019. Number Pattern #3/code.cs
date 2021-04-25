using System;


namespace NumberPattern3

{
    class Program
    {

        static void Main(string[] args)
        {
            Console.Write("Enter the number of rows : ");
            int rows = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter the number of columns : ");
            int cols = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine();
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= cols; j++)
                {

                    if ((i == 1 || i == rows) && (j == 1 || j == cols))
                    {
                        Console.Write(" ");
                    }
                    else if (i == 1 || i == rows || j == 1 || j == cols)
                    {

                        Console.Write("1");
                    }
                    else
                    {

                        Console.Write("0");
                    }
                }

                Console.WriteLine();
            }



            Console.WriteLine();

        }
    }
}


