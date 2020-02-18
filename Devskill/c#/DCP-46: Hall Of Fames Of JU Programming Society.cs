
using System;

public class Test
{
	public static void Main()
	{
		int n=int.Parse(Console.ReadLine());
	 	for(int i=1;i<=n;i++){
	 		string[] s = Console.ReadLine().Split();
			var a=Convert.ToUInt64(s[0]);
			var b=Convert.ToUInt64(s[1]);
			if(a>b)
				Console.WriteLine((a-b)/2+b);
			else if(a<b)
				Console.WriteLine((b-a)/2+a);
			else
				Console.WriteLine(a);
	 	}
	}
}
