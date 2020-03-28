using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Students
{
    class Program
    {
        static void Main(string[] args)
        {
            Student s1 = new Student("123456789","mahmood");
            Student s2 = new Student("123456789", "mahmood");
            Student s3 = new Student("123456789", "mahmood");
            Student s4 = new Student("123456789", "mahmood");
            Student s5 = new Student("123456789", "mahmood");
            Student s6 = new Student("123456789", "mahmood");
            Student s7 = new Student("123456789", "mahmood");
            Student s8 = new Student("123456789", "mahmood");
            Student s9 = new Student("123456789", "mahmood");
            Student s10 = new Student("123456789", "mahmood");
            Console.ForegroundColor = ConsoleColor.Magenta;
            Printer.PrintTitel();
            Printer.NewLine();
            Student[] Sarr = { s1, s2, s3, s4, s5, s6, s7, s8, s9, s10 };
            Printer.PrintAll(Sarr);

        }
    }
}
