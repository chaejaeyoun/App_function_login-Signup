[Uno.Compiler.UxGenerated]
public partial class LogIn: Fuse.Controls.Panel
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb2",
        "temp_eb3"
    };
    static LogIn()
    {
    }
    [global::Uno.UX.UXConstructor]
    public LogIn(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new App_LoginSignup_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("ID");
        var temp1 = new global::Fuse.Controls.TextInput();
        temp1_Value_inst = new App_LoginSignup_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("Password");
        var temp4 = new global::Fuse.Reactive.Data("Signin");
        var temp5 = new global::Fuse.Reactive.Data("Signup");
        var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new global::Fuse.Controls.StackPanel();
        var temp8 = new global::Fuse.Controls.Rectangle();
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Controls.Rectangle();
        var temp11 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Controls.Panel();
        var temp13 = new global::Fuse.Controls.Text();
        var temp14 = new global::Fuse.Controls.Rectangle();
        var temp15 = new global::Fuse.Gestures.Clicked();
        var temp16 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp17 = new global::Fuse.Controls.Panel();
        var temp18 = new global::Fuse.Controls.Text();
        var temp19 = new global::Fuse.Controls.Rectangle();
        var temp20 = new global::Fuse.Gestures.Clicked();
        var temp21 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp5);
        var temp22 = new global::Fuse.Controls.Text();
        var temp23 = new global::Fuse.Controls.Text();
        var temp24 = new global::Fuse.Controls.Text();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Page/LogIn.ux";
        temp6.LineNumber = 3;
        temp6.FileName = "Page/LogIn.ux";
        temp6.SourceLineNumber = 3;
        temp6.SourceFileName = "Page/LogIn.ux";
        temp6.File = new global::Uno.UX.BundleFileSource(import("../../../Page/LogInjs.js"));
        temp7.SourceLineNumber = 5;
        temp7.SourceFileName = "Page/LogIn.ux";
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp10);
        temp7.Children.Add(temp12);
        temp7.Children.Add(temp17);
        temp7.Children.Add(temp22);
        temp7.Children.Add(temp23);
        temp7.Children.Add(temp24);
        temp8.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp8.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp8.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp8.Y = new Uno.UX.Size(110f, Uno.UX.Unit.Unspecified);
        temp8.SourceLineNumber = 6;
        temp8.SourceFileName = "Page/LogIn.ux";
        temp8.Children.Add(temp);
        temp.PlaceholderText = "ID를 입력하세요.";
        temp.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.FontSize = 20f;
        temp.TextColor = float4(0f, 0f, 0f, 1f);
        temp.CaretColor = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 7;
        temp.SourceFileName = "Page/LogIn.ux";
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        global::Fuse.Controls.Grid.SetColumn(temp, 1);
        temp.Bindings.Add(temp9);
        temp2.SourceLineNumber = 7;
        temp2.SourceFileName = "Page/LogIn.ux";
        temp10.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp10.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp10.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp10.Y = new Uno.UX.Size(140f, Uno.UX.Unit.Unspecified);
        temp10.SourceLineNumber = 10;
        temp10.SourceFileName = "Page/LogIn.ux";
        temp10.Children.Add(temp1);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "비밀번호를 입력하세요.";
        temp1.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp1.FontSize = 20f;
        temp1.TextColor = float4(0f, 0f, 0f, 1f);
        temp1.CaretColor = float4(0f, 0f, 0f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.SourceLineNumber = 11;
        temp1.SourceFileName = "Page/LogIn.ux";
        global::Fuse.Controls.Grid.SetRow(temp1, 0);
        global::Fuse.Controls.Grid.SetColumn(temp1, 1);
        temp1.Bindings.Add(temp11);
        temp3.SourceLineNumber = 11;
        temp3.SourceFileName = "Page/LogIn.ux";
        temp12.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp12.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp12.Margin = float4(20f, 20f, 20f, 20f);
        temp12.Y = new Uno.UX.Size(170f, Uno.UX.Unit.Unspecified);
        temp12.SourceLineNumber = 16;
        temp12.SourceFileName = "Page/LogIn.ux";
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp12.Children.Add(temp15);
        temp13.Value = "Log IN";
        temp13.FontSize = 20f;
        temp13.Color = float4(1f, 1f, 1f, 1f);
        temp13.Alignment = Fuse.Elements.Alignment.Center;
        temp13.SourceLineNumber = 17;
        temp13.SourceFileName = "Page/LogIn.ux";
        temp14.Color = float4(0.3607843f, 0.6705883f, 0.9960784f, 1f);
        temp14.SourceLineNumber = 18;
        temp14.SourceFileName = "Page/LogIn.ux";
        temp15.SourceLineNumber = 19;
        temp15.SourceFileName = "Page/LogIn.ux";
        temp15.Actions.Add(temp16);
        temp15.Bindings.Add(temp_eb2);
        temp16.SourceLineNumber = 20;
        temp16.SourceFileName = "Page/LogIn.ux";
        temp16.Handler += temp_eb2.OnEvent;
        temp4.SourceLineNumber = 20;
        temp4.SourceFileName = "Page/LogIn.ux";
        temp17.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp17.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp17.Margin = float4(20f, 20f, 20f, 20f);
        temp17.Y = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp17.SourceLineNumber = 26;
        temp17.SourceFileName = "Page/LogIn.ux";
        temp17.Children.Add(temp18);
        temp17.Children.Add(temp19);
        temp17.Children.Add(temp20);
        temp18.Value = "Sign UP";
        temp18.FontSize = 20f;
        temp18.Color = float4(1f, 1f, 1f, 1f);
        temp18.Alignment = Fuse.Elements.Alignment.Center;
        temp18.SourceLineNumber = 27;
        temp18.SourceFileName = "Page/LogIn.ux";
        temp19.Color = float4(0.3607843f, 0.6705883f, 0.9960784f, 1f);
        temp19.SourceLineNumber = 28;
        temp19.SourceFileName = "Page/LogIn.ux";
        temp20.SourceLineNumber = 29;
        temp20.SourceFileName = "Page/LogIn.ux";
        temp20.Actions.Add(temp21);
        temp20.Bindings.Add(temp_eb3);
        temp21.SourceLineNumber = 30;
        temp21.SourceFileName = "Page/LogIn.ux";
        temp21.Handler += temp_eb3.OnEvent;
        temp5.SourceLineNumber = 30;
        temp5.SourceFileName = "Page/LogIn.ux";
        temp22.Value = "네이버 아이디로 로그인";
        temp22.FontSize = 20f;
        temp22.Color = float4(0f, 0f, 0f, 1f);
        temp22.X = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
        temp22.Y = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp22.SourceLineNumber = 35;
        temp22.SourceFileName = "Page/LogIn.ux";
        temp23.Value = "페이스북 아이디로 로그인";
        temp23.FontSize = 20f;
        temp23.Color = float4(0f, 0f, 0f, 1f);
        temp23.X = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
        temp23.Y = new Uno.UX.Size(210f, Uno.UX.Unit.Unspecified);
        temp23.SourceLineNumber = 36;
        temp23.SourceFileName = "Page/LogIn.ux";
        temp24.Value = "카카오톡 아이디로 로그인";
        temp24.FontSize = 20f;
        temp24.Color = float4(0f, 0f, 0f, 1f);
        temp24.X = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
        temp24.Y = new Uno.UX.Size(220f, Uno.UX.Unit.Unspecified);
        temp24.SourceLineNumber = 37;
        temp24.SourceFileName = "Page/LogIn.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb2);
        __g_nametable.Objects.Add(temp_eb3);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
