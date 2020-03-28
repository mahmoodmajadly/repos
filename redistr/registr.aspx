<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="registr.aspx.cs" Inherits="redistr.registr" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        
<div >
    <asp:TextBox ID="TextBoxname" runat="server">שפ פרטי</asp:TextBox>
    <br />
    <asp:TextBox ID="TextBoxfamly" runat="server">שם משפחה</asp:TextBox>
    <br />
    <asp:Button ID="Buttonsend" runat="server" Text="SEND" />
        </div>
        
        
    </form>
</body>
</html>
