import java.math.BigInteger;
import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BigInteger a[]=new BigInteger[5001];
		a[0]=BigInteger.valueOf(0);
		a[1]=BigInteger.valueOf(1);
		for(int i=2; i<=5000; i++) {
			
			a[i]=a[i-1].add(a[i-2]);}
		
		Scanner in=new Scanner(System.in);
		while(in.hasNext()){
			int n=in.nextInt();
			System.out.println("The Fibonacci number for "+n+" is "+a[n]);
		}
	}
}
