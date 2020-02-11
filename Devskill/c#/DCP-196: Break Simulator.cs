using System;
					
public class Program
{
	public static void Main()
	{
		int n=int.Parse(Console.ReadLine());
		for(int i=0;i<n;i++){
			//Read line, and split it by whitespace into an array of strings
			string[] tokens = Console.ReadLine().Split();

			//Parse element 0
			float u = float.Parse(tokens[0]);

			//Parse element 1
			float t = float.Parse(tokens[1]);
      //v=u+at=>0=u+at=>a=-u/t
			Console.WriteLine("{0:0.00}",u/t*(-1));
		}
	}
}
