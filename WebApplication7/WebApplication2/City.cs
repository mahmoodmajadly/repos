using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace WebApplication2
{
    public class City
    {
        private string name;
        private string id;
        public  City(string name,string id)
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