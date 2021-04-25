using System;


namespace StarPattern1

{
	class Program
	{


		static void Main(string[] args)
		{

			Console.Write("Enter the number of rows : ");
			int rows = Convert.ToInt32(Console.ReadLine());



			Console.Write("0\n");

			for (int i = rows; i >= 1; i--)
			{
				for (int j = i; j <= rows; j++)
					Console.Write(j + " ");
				Console.Write("0 ");

				for (int j = rows; j >= i; j--)
					Console.Write(j + " ");

				Console.Write("\n");

			}



			Console.Write("\n\n");
		}


	}
}

