using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication2
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            
                List<City> ls = new list<City>();
            City c1 = new City("baqa", "1");
            City c2 = new City("jatt", "2");
            City c3 = new City("qalnswa", "3");
            City c4 = new City("tira", "4");
            City c5 = new City("taybah", "5");
            ls.Add(c1);
            ls.Add(c2);
            ls.Add(c3);
            ls.Add(c4);
            ls.Add(c5);
            DropDownListcity.DataTextField = "name";
            DropDownListcity.DataValueField = "id";
            DropDownListcity.DataSource = ls;
            DropDownListcity.DataBind();

            
            


        }
    }
}