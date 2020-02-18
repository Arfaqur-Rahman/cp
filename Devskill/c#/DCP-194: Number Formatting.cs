using System;
using System.Collections.Generic;
using System.Linq;

public class Test
{
	public static void Main()
	{	
		int n=int.Parse(Console.ReadLine());
	 	for(int i=1;i<=n;i++){
			string s = Console.ReadLine();
			Console.WriteLine(s.Length==11? "88"+s+" "+testme(s[2]): s+" "+testme(s[4]));
		}
	}
	public static string testme(char c){
		string s="";
		switch(c){
			case '1': s= "Citycell"; break;
			case '5': s= "Teletalk"; break;
			case '6': s= "Airtel"; break;
			case '7': s= "Grameenphone"; break;
			case '8': s= "Robi"; break;
			case '9': s= "Banglalink"; break;
		}
		return s;
	}
}
