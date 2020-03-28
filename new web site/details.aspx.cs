using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication3
{
    public partial class details : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Labelfirstname.Text = Request.QueryString["fname"];
            Labellastname.Text = Request.QueryString["lname"];
            Labeltele.Text = Request.QueryString["prefix"];
            Labelphone.Text = Request.QueryString["phone"];
            Labelbirthday.Text = Request.QueryString["birth"];
            Labelusername.Text = Request.QueryString["uname"];
            Labelpassword.Text = Request.QueryString["pass"];
            Labelgender.Text = Request.QueryString["male"];
            Labelgender.Text = Request.QueryString["female"];

        }
    }
}