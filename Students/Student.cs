using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Students
{
    class Student
    {
        private string name;
        private string id;
        
        public Student(string name,string id)
        {
            this.name = name;
            this.id = id;
        }

        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public string Id
        {
            get { return id; }
            set { id = value; }
        }
        
    }
}
