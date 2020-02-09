using System;
class ProgramB
    {
        static void Main(string[] args)
        {
        var line = Console.ReadLine();
        var data = line.Split(' ');
        var a1 = int.Parse(data[0]); //first integer
        var b1 = int.Parse(data[1]); //sec
          
         Console.WriteLine(((a1-2*b1)<=0?0:a1-2*b1));
           
        }
    }
