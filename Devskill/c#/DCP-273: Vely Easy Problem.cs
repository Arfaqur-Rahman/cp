using System;
					
public class Program
{
	public static void Main()
	{
		int n=Convert.ToInt32(Console.ReadLine());
		for(int i=0;i<n;i++){
			string s=Console.ReadLine();
			bool y=s.Contains("r");
			if(y) Console.WriteLine("Not vely easy");
			else Console.WriteLine("Vely easy");
		}
	}
}
