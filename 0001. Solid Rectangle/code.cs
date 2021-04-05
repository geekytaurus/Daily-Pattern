using System;

namespace DailyPattern;
{
	class Program
	{
		static void Main(string[] args)
		{
			
			Console.WriteLine(" Please Enter Number of Rows : ");
			int rows = Convert.ToInt32(Console.ReadLine());

			Console.WriteLine(" Please Enter Number of Columns : ");
			int columns = Convert.ToInt32(Console.ReadLine());

			for (int i = 1; i <= rows; i++)
			{
				for (int j = 1; j <= columns; j++)
				{
					Console.Write("* ");
				}

				Console.Write("\n");
			}
		}
	}
}
