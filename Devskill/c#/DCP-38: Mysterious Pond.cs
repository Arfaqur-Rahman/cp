using System;
using System.Linq;
using System.Collections.Generic;

public class Test
{
	public static void Main()
	{
		int t=int.Parse(Console.ReadLine());
	    for(int i=0;i<t;i++){	
		    int n=int.Parse(Console.ReadLine());
		    string[] sa=new string[n];
		    int[] ia=new int[n];
			int mx=0,mn=1000000000;
		    for(int j=0;j<n;j++){
				string[] tokens=Console.ReadLine().Split();
		        sa[j]=tokens[0];
		        ia[j]=int.Parse(tokens[1]);    
		        mx=Math.Max(mx,ia[j]); 
				mn=Math.Min(mn,ia[j]);
		    }
		    Console.WriteLine(sa[Array.IndexOf(ia, mx)]+" "+sa[Array.IndexOf(ia, mn)]);
	    }	
	}
}
