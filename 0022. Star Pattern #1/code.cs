using System;


namespace StarPattern1

{
	class Program
	{
		class StarPattern1
		{
			static void Main(string[] args)
			{
				StarPattern1 Star = new StarPattern1();
				Console.Write("Enter the number of rows : ");
				int n = Convert.ToInt32(Console.ReadLine());

				Console.Write("\n\n");

				Star.printDiamond(n);

				Console.Write("\n\n");
			}

			public void printDiamond(int n)
			{
				Console.Write("\n");

				int i = 0;
				int j = 0;

				// for top half
				for (i = 0; i < n; i++)
				{

					// for left *
					for (j = i; j < n; j++)
						Console.Write("*");

					// for middle " "
					for (j = 0; j < 2 * i + 1; j++)
						Console.Write(" ");

					// for right *
					for (j = i; j < n; j++)
						Console.Write("*");

					Console.Write("\n");
				}

				// for below half
				for (i = 0; i < n - 1; i++)
				{

					// for left *
					for (j = 0; j < i + 2; j++)
						Console.Write("*");

					// for middle " "
					for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
						Console.Write(" ");

					// for right *
					for (j = 0; j < i + 2; j++)
						Console.Write("*");

					Console.Write("\n");
				}

				Console.Write("\n");
			}
		}
	}
}


