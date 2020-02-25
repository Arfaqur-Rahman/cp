#define ONLINE_JUDGE
using System;
using System.Collections.Generic;
using System.Linq;

public class Test
{
	public static void Main()
	{
		string token;
		int a, b;
		while ((token = Console.ReadLine()) != null && token != null)
		{
			string[] tokens = token.Split(' ');
			a = int.Parse(tokens[0]);
			b = int.Parse(tokens[1]);
			var s = 0;
			for (int i = 0; i < b; i++)
			{
				var t = int.Parse(Console.ReadLine());
				s += t;
			}

			if ((s + a - 1) / s == 1)
				Console.WriteLine("Project will finish within 1 day.");
			else
				Console.WriteLine("Project will finish within " + ((s + a - 1) / s) + " days.");
		}
	}
}
