using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    class Program
    {
        static void Main(string[] args)
        {
            char ch;
            double x1, y1, z1;
            Console.WriteLine("enter the first number");
            x1 = Double.Parse(Console.ReadLine());
            Console.WriteLine("enter the second number");
            y1 = Double.Parse(Console.ReadLine());

            Console.WriteLine("enter the oprator");
            ch = char.Parse(Console.ReadLine());
            if(ch=='+')
            {
                Console.WriteLine("the result is :{0}", z1 = sum(x1, y1));
              
            }
        }

        private static double sum(double x1, double y1)
        {
            throw new NotImplementedException();
        }
    }
}
