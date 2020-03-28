using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            int x;
            x = int.Parse(Console.ReadLine());
            x++;
            Console.ForegroundColor = ConsoleColor.Yellow;
            Console.WriteLine("x={0}", x);
            int[] arr = new int[10];
            int i, j;
            for(i=0;i<10;i++)
            {
                arr[i] = i + 1;

            }
            for(i=0;i<10;i++)
            {
                Console.WriteLine("arr=[{0}]", arr[i]);
            }
        }
    }
}
