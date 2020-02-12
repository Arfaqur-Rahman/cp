using System;
					
public class Program
{
	public static void Main()
	{
		int n=int.Parse(Console.ReadLine());
		for(int i=0;i<n;i++){
			string[] tokens = Console.ReadLine().Split();
			float a = float.Parse(tokens[0]);
			float b = float.Parse(tokens[1]);
			float c = float.Parse(tokens[2]);
			Console.WriteLine("{0:0.00}", Math.Sqrt(a*a+b*b+c*c)*1.0);
		}
	}
}
