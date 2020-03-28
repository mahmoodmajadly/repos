using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Students
{
    class Printer
    {
        public static void PrintStudent(Student stu)
        {
            Console.WriteLine("\t{0,-9}    {1,-15}", stu.Name, stu.Id);
        }
        public static void PrintTitel()
        {
            Console.WriteLine("\t{0,-9} {1,-15}", "ID", "NAME");
            Console.WriteLine("\t{0,-9} {0,-15}  ", "---------", "--------");
        }
        public static void NewLine()
        {
            Console.WriteLine();
        }
        public static void PrintAll (Student[] Sarr)
            {
            foreach (Student s in Sarr)
            { 
                Console.WriteLine("\t{0,-9}  {1,-15}",s.Id, s.Name);
            }
            }
    }
}
