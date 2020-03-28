using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp5
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = {1,2,3,2,1};
            if (ispalendrom(arr)!=0)
                Console.WriteLine("yes");
            else
                Console.WriteLine("no");
        }
        public static bool ispalendrom(int []arr)
        {
            int r = arr.Length - 1, l= 0;
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
