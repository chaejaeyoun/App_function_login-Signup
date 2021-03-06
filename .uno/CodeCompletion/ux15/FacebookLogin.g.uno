[Uno.Compiler.UxGenerated]
public partial class FacebookLogin: Fuse.Controls.Panel
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> webView_Url_inst;
    global::Uno.UX.Property<float> nvh_Opacity_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Url_inst;
    global::Uno.UX.Property<string> temp2_Message_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<bool> temp4_Value_inst;
    global::Uno.UX.Property<bool> temp5_Value_inst;
    internal global::Fuse.Controls.NativeViewHost nvh;
    internal global::Fuse.Controls.WebView webView;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "nvh",
        "webView",
        "temp_eb0",
        "temp_eb1"
    };
    static FacebookLogin()
    {
    }
    [global::Uno.UX.UXConstructor]
    public FacebookLogin(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp6 = new global::Fuse.Reactive.Data("pageLoaded");
        webView = new global::Fuse.Controls.WebView();
        webView_Url_inst = new App_LoginSignup_FuseControlsWebView_Url_Property(webView, __selector0);
        var temp7 = new global::Fuse.Reactive.Data("url");
        nvh = new global::Fuse.Controls.NativeViewHost();
        nvh_Opacity_inst = new App_LoginSignup_FuseElementsElement_Opacity_Property(nvh, __selector1);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new App_LoginSignup_FuseTriggersWhileBool_Value_Property(temp, __selector2);
        var temp8 = new global::Fuse.Reactive.Data("showWebView");
        var temp1 = new global::Fuse.Drawing.ImageFill();
        temp1_Url_inst = new App_LoginSignup_FuseDrawingImageFill_Url_Property(temp1, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("myPicture");
        var temp2 = new global::Fuse.Triggers.Actions.DebugAction();
        temp2_Message_inst = new App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property(temp2, __selector3);
        var temp10 = new global::Fuse.Reactive.Data("myPicture");
        var temp3 = new global::Fuse.Controls.Text();
        temp3_Value_inst = new App_LoginSignup_FuseControlsTextControl_Value_Property(temp3, __selector2);
        var temp11 = new global::Fuse.Reactive.Data("myName");
        var temp4 = new global::Fuse.Triggers.WhileTrue();
        temp4_Value_inst = new App_LoginSignup_FuseTriggersWhileBool_Value_Property(temp4, __selector2);
        var temp12 = new global::Fuse.Reactive.Data("hasProfile");
        var temp13 = new global::Fuse.Reactive.Data("login");
        var temp5 = new global::Fuse.Triggers.WhileFalse();
        temp5_Value_inst = new App_LoginSignup_FuseTriggersWhileBool_Value_Property(temp5, __selector2);
        var temp14 = new global::Fuse.Reactive.Data("hasProfile");
        var temp15 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp16 = new global::Fuse.Controls.DockPanel();
        var temp17 = new global::Fuse.Controls.StatusBarBackground();
        var temp18 = new global::Fuse.Controls.BottomBarBackground();
        var temp19 = new global::Fuse.Controls.Panel();
        var temp20 = new global::Fuse.Controls.Panel();
        var temp21 = new global::Fuse.Triggers.PageLoaded();
        var temp22 = new global::Fuse.Triggers.Actions.EvaluateJS();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp6);
        var temp23 = new global::Fuse.Reactive.DataBinding(webView_Url_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Triggers.AddingAnimation();
        var temp25 = new global::Fuse.Animations.Change<float>(nvh_Opacity_inst);
        var temp26 = new global::Fuse.Drawing.StaticSolidColor(float4(0.8666667f, 0.8666667f, 0.8666667f, 1f));
        var temp27 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp28 = new global::Fuse.Controls.Panel();
        var temp29 = new global::Fuse.Controls.StackPanel();
        var temp30 = new global::Fuse.Controls.Rectangle();
        var temp31 = new global::Fuse.Drawing.Stroke();
        var temp32 = new global::Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp33 = new global::Fuse.Drawing.StaticSolidColor(float4(0.8666667f, 0.8666667f, 0.8666667f, 1f));
        var temp34 = new global::Fuse.Controls.Panel();
        var temp35 = new global::Fuse.Controls.Circle();
        var temp36 = new global::Fuse.Drawing.Stroke();
        var temp37 = new global::Fuse.Drawing.StaticSolidColor(float4(0.6666667f, 0.6666667f, 0.6666667f, 1f));
        var temp38 = new global::Fuse.Reactive.DataBinding(temp1_Url_inst, temp9, Fuse.Reactive.BindingMode.Default);
        var temp39 = new global::Fuse.Gestures.Clicked();
        var temp40 = new global::Fuse.Reactive.DataBinding(temp2_Message_inst, temp10, Fuse.Reactive.BindingMode.Default);
        var temp41 = new global::Fuse.Controls.StackPanel();
        var temp42 = new global::Fuse.Controls.Text();
        var temp43 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp11, Fuse.Reactive.BindingMode.Default);
        var temp44 = new global::Fuse.Triggers.AddingAnimation();
        var temp45 = new global::Fuse.Animations.Move();
        var temp46 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp12, Fuse.Reactive.BindingMode.Default);
        var temp47 = new global::Fuse.Controls.DockPanel();
        var temp48 = new global::Fuse.Controls.Rectangle();
        var temp49 = new global::Fuse.Drawing.StaticSolidColor(float4(0.2313726f, 0.3490196f, 0.5960785f, 1f));
        var temp50 = new global::Fuse.Controls.Text();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp13);
        var temp51 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp14, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Page/FacebookLogin.ux";
        temp15.LineNumber = 3;
        temp15.FileName = "Page/FacebookLogin.ux";
        temp15.SourceLineNumber = 3;
        temp15.SourceFileName = "Page/FacebookLogin.ux";
        temp15.File = new global::Uno.UX.BundleFileSource(import("../../../Page/FacebookLoginjs.js"));
        temp16.SourceLineNumber = 6;
        temp16.SourceFileName = "Page/FacebookLogin.ux";
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp18);
        temp16.Children.Add(temp19);
        temp17.SourceLineNumber = 8;
        temp17.SourceFileName = "Page/FacebookLogin.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp17, Fuse.Layouts.Dock.Top);
        temp18.SourceLineNumber = 9;
        temp18.SourceFileName = "Page/FacebookLogin.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp18, Fuse.Layouts.Dock.Bottom);
        temp19.SourceLineNumber = 11;
        temp19.SourceFileName = "Page/FacebookLogin.ux";
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp28);
        temp19.Children.Add(temp5);
        temp20.SourceLineNumber = 12;
        temp20.SourceFileName = "Page/FacebookLogin.ux";
        temp20.Children.Add(temp);
        temp.SourceLineNumber = 13;
        temp.SourceFileName = "Page/FacebookLogin.ux";
        temp.Nodes.Add(nvh);
        temp.Bindings.Add(temp27);
        nvh.Name = __selector4;
        nvh.SourceLineNumber = 14;
        nvh.SourceFileName = "Page/FacebookLogin.ux";
        nvh.Background = temp26;
        nvh.Children.Add(webView);
        nvh.Children.Add(temp24);
        webView.Name = __selector5;
        webView.SourceLineNumber = 15;
        webView.SourceFileName = "Page/FacebookLogin.ux";
        webView.Children.Add(temp21);
        webView.Bindings.Add(temp23);
        temp21.SourceLineNumber = 16;
        temp21.SourceFileName = "Page/FacebookLogin.ux";
        temp21.Actions.Add(temp22);
        temp21.Bindings.Add(temp_eb0);
        temp22.JavaScript = "\n\t\t\t\t\t\t\t\t\treturn { url : document.location.href };\n\t\t\t\t\t\t\t\t";
        temp22.SourceLineNumber = 17;
        temp22.SourceFileName = "Page/FacebookLogin.ux";
        temp22.Handler += temp_eb0.OnEvent;
        temp6.SourceLineNumber = 17;
        temp6.SourceFileName = "Page/FacebookLogin.ux";
        temp7.SourceLineNumber = 15;
        temp7.SourceFileName = "Page/FacebookLogin.ux";
        temp24.SourceLineNumber = 23;
        temp24.SourceFileName = "Page/FacebookLogin.ux";
        temp24.Animators.Add(temp25);
        temp25.Value = 0f;
        temp25.Duration = 0.3;
        temp8.SourceLineNumber = 13;
        temp8.SourceFileName = "Page/FacebookLogin.ux";
        temp28.SourceLineNumber = 29;
        temp28.SourceFileName = "Page/FacebookLogin.ux";
        temp28.Children.Add(temp4);
        temp4.SourceLineNumber = 30;
        temp4.SourceFileName = "Page/FacebookLogin.ux";
        temp4.Nodes.Add(temp29);
        temp4.Bindings.Add(temp46);
        temp29.Alignment = Fuse.Elements.Alignment.Center;
        temp29.Padding = float4(20f, 20f, 20f, 20f);
        temp29.SourceLineNumber = 31;
        temp29.SourceFileName = "Page/FacebookLogin.ux";
        temp29.Children.Add(temp30);
        temp29.Children.Add(temp34);
        temp29.Children.Add(temp41);
        temp29.Children.Add(temp44);
        temp30.CornerRadius = float4(15f, 15f, 15f, 15f);
        temp30.Layer = Fuse.Layer.Background;
        temp30.SourceLineNumber = 32;
        temp30.SourceFileName = "Page/FacebookLogin.ux";
        temp30.Fill = temp33;
        temp30.Strokes.Add(temp31);
        temp31.Width = 2f;
        temp31.Brush = temp32;
        temp34.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp34.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp34.SourceLineNumber = 35;
        temp34.SourceFileName = "Page/FacebookLogin.ux";
        temp34.Children.Add(temp35);
        temp34.Children.Add(temp39);
        temp35.SourceLineNumber = 36;
        temp35.SourceFileName = "Page/FacebookLogin.ux";
        temp35.Fills.Add(temp1);
        temp35.Strokes.Add(temp36);
        temp35.Bindings.Add(temp38);
        temp9.SourceLineNumber = 37;
        temp9.SourceFileName = "Page/FacebookLogin.ux";
        temp36.Width = 4f;
        temp36.Brush = temp37;
        temp39.SourceLineNumber = 40;
        temp39.SourceFileName = "Page/FacebookLogin.ux";
        temp39.Actions.Add(temp2);
        temp39.Bindings.Add(temp40);
        temp2.SourceLineNumber = 41;
        temp2.SourceFileName = "Page/FacebookLogin.ux";
        temp10.SourceLineNumber = 41;
        temp10.SourceFileName = "Page/FacebookLogin.ux";
        temp41.Alignment = Fuse.Elements.Alignment.Center;
        temp41.Margin = float4(10f, 10f, 10f, 10f);
        temp41.SourceLineNumber = 45;
        temp41.SourceFileName = "Page/FacebookLogin.ux";
        temp41.Children.Add(temp42);
        temp41.Children.Add(temp3);
        temp42.Value = "Welcome";
        temp42.FontSize = 22f;
        temp42.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp42.SourceLineNumber = 46;
        temp42.SourceFileName = "Page/FacebookLogin.ux";
        temp3.FontSize = 26f;
        temp3.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp3.SourceLineNumber = 47;
        temp3.SourceFileName = "Page/FacebookLogin.ux";
        temp3.Bindings.Add(temp43);
        temp11.SourceLineNumber = 47;
        temp11.SourceFileName = "Page/FacebookLogin.ux";
        temp44.SourceLineNumber = 50;
        temp44.SourceFileName = "Page/FacebookLogin.ux";
        temp44.Animators.Add(temp45);
        temp45.Y = 1f;
        temp45.Duration = 1.5;
        temp45.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp45.Easing = Fuse.Animations.Easing.BackIn;
        temp12.SourceLineNumber = 30;
        temp12.SourceFileName = "Page/FacebookLogin.ux";
        temp5.SourceLineNumber = 57;
        temp5.SourceFileName = "Page/FacebookLogin.ux";
        temp5.Nodes.Add(temp47);
        temp5.Bindings.Add(temp51);
        temp47.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp47.Alignment = Fuse.Elements.Alignment.Center;
        temp47.Padding = float4(5f, 5f, 15f, 5f);
        temp47.SourceLineNumber = 58;
        temp47.SourceFileName = "Page/FacebookLogin.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp47, temp_eb1.OnEvent);
        temp47.Children.Add(temp48);
        temp47.Children.Add(temp50);
        temp47.Bindings.Add(temp_eb1);
        temp48.CornerRadius = float4(4f, 4f, 4f, 4f);
        temp48.Layer = Fuse.Layer.Background;
        temp48.SourceLineNumber = 60;
        temp48.SourceFileName = "Page/FacebookLogin.ux";
        temp48.Fill = temp49;
        temp50.Value = "Login with facebook";
        temp50.FontSize = 20f;
        temp50.Color = float4(1f, 1f, 1f, 1f);
        temp50.Alignment = Fuse.Elements.Alignment.Center;
        temp50.SourceLineNumber = 61;
        temp50.SourceFileName = "Page/FacebookLogin.ux";
        temp13.SourceLineNumber = 58;
        temp13.SourceFileName = "Page/FacebookLogin.ux";
        temp14.SourceLineNumber = 57;
        temp14.SourceFileName = "Page/FacebookLogin.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(nvh);
        __g_nametable.Objects.Add(webView);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(temp_eb1);
        this.Children.Add(temp15);
        this.Children.Add(temp16);
    }
    static global::Uno.UX.Selector __selector0 = "Url";
    static global::Uno.UX.Selector __selector1 = "Opacity";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Message";
    static global::Uno.UX.Selector __selector4 = "nvh";
    static global::Uno.UX.Selector __selector5 = "webView";
}
