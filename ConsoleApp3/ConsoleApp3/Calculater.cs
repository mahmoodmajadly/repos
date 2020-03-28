using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    class Calculater
    {
        public static int sum(int x, int y)
        {
            return x + y;
        }

        public static double sum2(double a, double b)
            {
            return a* b;
            }
        public static int sum3(int x,int y)
        {
            return x * y;
        }
        public static double sum4(double x,double y)
        {
            return x - y;
        }
        public static double sum5(double x,double y)
        {
            if (y == 0 || x == 0)
                return 0;
            return x / y;
        }
    }
}
