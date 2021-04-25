using System;


namespace NumberPattern2

{
    class Program
    {

        static void Main(string[] args)
        {
            Console.Write("Enter the number of rows : ");
            int n = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine();
            for (int i = n; i >= 1; i--)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j <= i)
                    {
                        if (j < 10)
                            Console.Write(j + " ");
                        else
                            Console.Write(j);
                    }
                    else

                        Console.Write("*" + " ");
                }
                for (int j = n; j >= 1; j--)
                {
                    if (j <= i)
                    {
                        if (j < 10)
                            Console.Write(j + " ");
                        else
                            Console.Write(j);
                    }
                    else
                      Console.Write("*" + " ");
                }
                Console.Write("\n");
            }

            Console.Write("\n");

        }
    }
}


