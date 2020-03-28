<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="details.aspx.cs" Inherits="WebApplication3.details" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:Label ID="Labelfirstname" runat="server" Text="">שם </asp:Label> 
            <br />
            <asp:Label ID="Labellastname" runat="server" Text="">שם משפחה</asp:Label> 
            <br />
            <asp:Label ID="Labeltele" runat="server" Text=""></asp:Label> 
            
            <asp:Label ID="Labelphone" runat="server" Text="">מספר טלפון</asp:Label> 
            <br />
            <asp:Label ID="Labelbirthday" runat="server" Text="">תאריך לידה</asp:Label> 
            <br />
            <asp:Label ID="Labelusername" runat="server" Text="">שם משתמש</asp:Label> 
            <br />
            <asp:Label ID="Labelpassword" runat="server" Text=""></asp:Label> 
            <br />
          <asp:Label ID="Labelgender" runat="server" Text=""></asp:Label> 
            <br />


        </div>
    </form>
</body>
</html>
