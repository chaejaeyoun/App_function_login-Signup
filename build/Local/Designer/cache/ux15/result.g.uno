[Uno.Compiler.UxGenerated]
public partial class result: Fuse.Controls.Panel
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb4;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb4"
    };
    static result()
    {
    }
    [global::Uno.UX.UXConstructor]
    public result(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("goBack");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.Circle();
        var temp3 = new global::Fuse.Controls.Text();
        var temp4 = new global::Fuse.Gestures.Clicked();
        var temp5 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb4 = new global::Fuse.Reactive.EventBinding(temp);
        var temp6 = new global::Fuse.Controls.Text();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Page/result.ux";
        temp1.LineNumber = 3;
        temp1.FileName = "Page/result.ux";
        temp1.SourceLineNumber = 3;
        temp1.SourceFileName = "Page/result.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../../../Page/resultjs.js"));
        temp2.Color = float4(0.3607843f, 0.6705883f, 0.9960784f, 1f);
        temp2.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp2.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp2.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp2.Y = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp2.SourceLineNumber = 5;
        temp2.SourceFileName = "Page/result.ux";
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp3.Value = "<";
        temp3.FontSize = 80f;
        temp3.Y = new Uno.UX.Size(-20f, Uno.UX.Unit.Unspecified);
        temp3.SourceLineNumber = 6;
        temp3.SourceFileName = "Page/result.ux";
        temp4.SourceLineNumber = 7;
        temp4.SourceFileName = "Page/result.ux";
        temp4.Actions.Add(temp5);
        temp4.Bindings.Add(temp_eb4);
        temp5.SourceLineNumber = 8;
        temp5.SourceFileName = "Page/result.ux";
        temp5.Handler += temp_eb4.OnEvent;
        temp.SourceLineNumber = 8;
        temp.SourceFileName = "Page/result.ux";
        temp6.Value = "성공!!!";
        temp6.FontSize = 50f;
        temp6.Alignment = Fuse.Elements.Alignment.Center;
        temp6.SourceLineNumber = 12;
        temp6.SourceFileName = "Page/result.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb4);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp6);
    }
}
