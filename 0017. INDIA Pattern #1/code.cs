using System;


namespace India

{
    class Program
    {

        static void Main(string[] args)
        {
            char[] s = { 'I', 'N', 'D', 'I', 'A' };
            for (int i = 0; i < s.Length; i++)
            {

                for (int j = 0; j <= i; j++)
                {
                    if (j == i)
                    {
                        Console.Write(s[j]);
                    }
                    else
                    {
                        Console.Write(s[j] + "~");
                    }
                }
                Console.WriteLine();
            }

            Console.WriteLine();
        }
    }
}


