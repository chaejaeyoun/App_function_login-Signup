[Uno.Compiler.UxGenerated]
public partial class SignUp: Fuse.Controls.Panel
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb2",
        "temp_eb3"
    };
    static SignUp()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SignUp(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.Data("goBack");
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new App_LoginSignup_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("newID");
        var temp1 = new global::Fuse.Controls.TextInput();
        temp1_Value_inst = new App_LoginSignup_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("newPassword");
        var temp2 = new global::Fuse.Controls.TextInput();
        temp2_Value_inst = new App_LoginSignup_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("Name");
        var temp7 = new global::Fuse.Reactive.Data("Save");
        var temp8 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new global::Fuse.Controls.Circle();
        var temp10 = new global::Fuse.Controls.Text();
        var temp11 = new global::Fuse.Gestures.Clicked();
        var temp12 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp13 = new global::Fuse.Controls.Rectangle();
        var temp14 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Controls.Rectangle();
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Controls.Rectangle();
        var temp18 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp19 = new global::Fuse.Controls.Panel();
        var temp20 = new global::Fuse.Controls.Text();
        var temp21 = new global::Fuse.Controls.Rectangle();
        var temp22 = new global::Fuse.Gestures.Clicked();
        var temp23 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp7);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Page/SignUp.ux";
        temp8.LineNumber = 3;
        temp8.FileName = "Page/SignUp.ux";
        temp8.SourceLineNumber = 3;
        temp8.SourceFileName = "Page/SignUp.ux";
        temp8.File = new global::Uno.UX.BundleFileSource(import("../../../../../Page/SignUpjs.js"));
        temp9.Color = float4(0.3607843f, 0.6705883f, 0.9960784f, 1f);
        temp9.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp9.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp9.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp9.Y = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp9.SourceLineNumber = 6;
        temp9.SourceFileName = "Page/SignUp.ux";
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp11);
        temp10.Value = "<";
        temp10.FontSize = 80f;
        temp10.Y = new Uno.UX.Size(-20f, Uno.UX.Unit.Unspecified);
        temp10.SourceLineNumber = 7;
        temp10.SourceFileName = "Page/SignUp.ux";
        temp11.SourceLineNumber = 8;
        temp11.SourceFileName = "Page/SignUp.ux";
        temp11.Actions.Add(temp12);
        temp11.Bindings.Add(temp_eb2);
        temp12.SourceLineNumber = 9;
        temp12.SourceFileName = "Page/SignUp.ux";
        temp12.Handler += temp_eb2.OnEvent;
        temp3.SourceLineNumber = 9;
        temp3.SourceFileName = "Page/SignUp.ux";
        temp13.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp13.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp13.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp13.Y = new Uno.UX.Size(190f, Uno.UX.Unit.Unspecified);
        temp13.SourceLineNumber = 14;
        temp13.SourceFileName = "Page/SignUp.ux";
        temp13.Children.Add(temp);
        temp.PlaceholderText = "ID";
        temp.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.FontSize = 20f;
        temp.TextColor = float4(0f, 0f, 0f, 1f);
        temp.CaretColor = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 15;
        temp.SourceFileName = "Page/SignUp.ux";
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        global::Fuse.Controls.Grid.SetColumn(temp, 1);
        temp.Bindings.Add(temp14);
        temp4.SourceLineNumber = 15;
        temp4.SourceFileName = "Page/SignUp.ux";
        temp15.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp15.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp15.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp15.Y = new Uno.UX.Size(260f, Uno.UX.Unit.Unspecified);
        temp15.SourceLineNumber = 18;
        temp15.SourceFileName = "Page/SignUp.ux";
        temp15.Children.Add(temp1);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "Password";
        temp1.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp1.FontSize = 20f;
        temp1.TextColor = float4(0f, 0f, 0f, 1f);
        temp1.CaretColor = float4(0f, 0f, 0f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.SourceLineNumber = 19;
        temp1.SourceFileName = "Page/SignUp.ux";
        global::Fuse.Controls.Grid.SetRow(temp1, 0);
        global::Fuse.Controls.Grid.SetColumn(temp1, 1);
        temp1.Bindings.Add(temp16);
        temp5.SourceLineNumber = 19;
        temp5.SourceFileName = "Page/SignUp.ux";
        temp17.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp17.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp17.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp17.Y = new Uno.UX.Size(330f, Uno.UX.Unit.Unspecified);
        temp17.SourceLineNumber = 22;
        temp17.SourceFileName = "Page/SignUp.ux";
        temp17.Children.Add(temp2);
        temp2.PlaceholderText = "Name";
        temp2.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp2.FontSize = 20f;
        temp2.TextColor = float4(0f, 0f, 0f, 1f);
        temp2.CaretColor = float4(0f, 0f, 0f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.SourceLineNumber = 23;
        temp2.SourceFileName = "Page/SignUp.ux";
        global::Fuse.Controls.Grid.SetRow(temp2, 0);
        global::Fuse.Controls.Grid.SetColumn(temp2, 1);
        temp2.Bindings.Add(temp18);
        temp6.SourceLineNumber = 23;
        temp6.SourceFileName = "Page/SignUp.ux";
        temp19.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp19.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp19.Margin = float4(20f, 20f, 20f, 20f);
        temp19.Y = new Uno.UX.Size(400f, Uno.UX.Unit.Unspecified);
        temp19.SourceLineNumber = 28;
        temp19.SourceFileName = "Page/SignUp.ux";
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp19.Children.Add(temp22);
        temp20.Value = "Save";
        temp20.FontSize = 20f;
        temp20.Color = float4(1f, 1f, 1f, 1f);
        temp20.Alignment = Fuse.Elements.Alignment.Center;
        temp20.SourceLineNumber = 29;
        temp20.SourceFileName = "Page/SignUp.ux";
        temp21.Color = float4(0.3607843f, 0.6705883f, 0.9960784f, 1f);
        temp21.SourceLineNumber = 30;
        temp21.SourceFileName = "Page/SignUp.ux";
        temp22.SourceLineNumber = 31;
        temp22.SourceFileName = "Page/SignUp.ux";
        temp22.Actions.Add(temp23);
        temp22.Bindings.Add(temp_eb3);
        temp23.SourceLineNumber = 32;
        temp23.SourceFileName = "Page/SignUp.ux";
        temp23.Handler += temp_eb3.OnEvent;
        temp7.SourceLineNumber = 32;
        temp7.SourceFileName = "Page/SignUp.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb2);
        __g_nametable.Objects.Add(temp_eb3);
        this.Children.Add(temp8);
        this.Children.Add(temp9);
        this.Children.Add(temp13);
        this.Children.Add(temp15);
        this.Children.Add(temp17);
        this.Children.Add(temp19);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
