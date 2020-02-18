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
			var dictionary = new Dictionary<char, int>();
			for (int j = 0; j < s.Length; j++)
			{
				if (dictionary.ContainsKey(s[j]))
				{
					dictionary[s[j]]++;
				}
				//if (!dictionary.ContainsKey(s[j])){
				else{
					dictionary.Add(s[j], 1);
				}
			}

			Console.WriteLine("Case {0}:", i);
			var list = dictionary.Keys.ToList();
        	list.Sort();
			 foreach (var key in list){
            	Console.WriteLine("{0} {1}", key, dictionary[key]);
        	}
		}
	}
}
