using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    class Program
    {
        static void Main(string[] args)
        {
            char[] arr = { 'a', 'b', 'c', 'b', 'p' };
            if (Ispolendrom(arr))
                Console.WriteLine("ok");
            else
                Console.WriteLine("no");
        }
        public static bool Ispolendrom(char[]arr )
        {
            int r = arr.Length - 1, l = 0;
            while(l<=r)
            {
                if (arr[l] != arr[r])
                    return false;
                l++;
                r--;
            }
            return true;
        }
    }
}
