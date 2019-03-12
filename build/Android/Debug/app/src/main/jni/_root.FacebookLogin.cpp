// This file was generated based on /Users/jaeyounchae/Documents/fuse/App_Login-Signup/.uno/ux15/FacebookLogin.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.App_LoginSignup_bundle.h>
#include <_root.App_LoginSignup-142e31b4.h>
#include <_root.App_LoginSignup-1a8178c0.h>
#include <_root.App_LoginSignup-25aad53f.h>
#include <_root.App_LoginSignup-3bbc5da3.h>
#include <_root.App_LoginSignup-7a28c487.h>
#include <_root.App_LoginSignup-e8ac0970.h>
#include <_root.FacebookLogin.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.BottomB-f0a90651.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-458e75fc.h>
#include <Fuse.Triggers.Actions-b8cdaf7f.h>
#include <Fuse.Triggers.Actions-d8fdd070.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.PageLoaded.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[20];
static uType* TYPES[11];

namespace g{

// public partial sealed class FacebookLogin :2
// {
// static FacebookLogin() :25
static void FacebookLogin__cctor_4_fn(uType* __type)
{
    FacebookLogin::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"nvh"*/], ::STRINGS[2/*"webView"*/], ::STRINGS[3/*"temp_eb0"*/], ::STRINGS[4/*"temp_eb1"*/]);
    FacebookLogin::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Url"*/]);
    FacebookLogin::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Opacity"*/]);
    FacebookLogin::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Value"*/]);
    FacebookLogin::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Message"*/]);
    FacebookLogin::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"nvh"*/]);
    FacebookLogin::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"webView"*/]);
}

static void FacebookLogin_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("nvh");
    ::STRINGS[2] = uString::Const("webView");
    ::STRINGS[3] = uString::Const("temp_eb0");
    ::STRINGS[4] = uString::Const("temp_eb1");
    ::STRINGS[5] = uString::Const("Url");
    ::STRINGS[6] = uString::Const("Opacity");
    ::STRINGS[7] = uString::Const("Value");
    ::STRINGS[8] = uString::Const("Message");
    ::STRINGS[9] = uString::Const("pageLoaded");
    ::STRINGS[10] = uString::Const("url");
    ::STRINGS[11] = uString::Const("showWebView");
    ::STRINGS[12] = uString::Const("myPicture");
    ::STRINGS[13] = uString::Const("myName");
    ::STRINGS[14] = uString::Const("hasProfile");
    ::STRINGS[15] = uString::Const("login");
    ::STRINGS[16] = uString::Const("Page/FacebookLogin.ux");
    ::STRINGS[17] = uString::Const("\n"
        "\t\t\t\t\t\t\t\t\treturn { url : document.location.href };\n"
        "\t\t\t\t\t\t\t\t");
    ::STRINGS[18] = uString::Const("Welcome");
    ::STRINGS[19] = uString::Const("Login with facebook");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::App_LoginSignup_bundle_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(115,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(FacebookLogin, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FacebookLogin, webView_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(FacebookLogin, nvh_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(FacebookLogin, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FacebookLogin, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FacebookLogin, temp2_Message_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FacebookLogin, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(FacebookLogin, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(FacebookLogin, temp5_Value_inst), 0,
        ::g::Fuse::Controls::NativeViewHost_typeof(), offsetof(FacebookLogin, nvh), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(FacebookLogin, webView), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FacebookLogin, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FacebookLogin, temp_eb1), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(FacebookLogin, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&FacebookLogin::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FacebookLogin::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FacebookLogin::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FacebookLogin::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FacebookLogin::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FacebookLogin::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FacebookLogin::__selector5_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* FacebookLogin_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 136;
    options.InterfaceCount = 19;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(FacebookLogin);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("FacebookLogin", options);
    type->fp_build_ = FacebookLogin_build;
    type->fp_cctor_ = FacebookLogin__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public FacebookLogin(Fuse.Navigation.Router router) :29
void FacebookLogin__ctor_7_fn(FacebookLogin* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_7(router1);
}

// private void InitializeUX() :35
void FacebookLogin__InitializeUX_fn(FacebookLogin* __this)
{
    __this->InitializeUX();
}

// public FacebookLogin New(Fuse.Navigation.Router router) :29
void FacebookLogin__New4_fn(::g::Fuse::Navigation::Router* router1, FacebookLogin** __retval)
{
    *__retval = FacebookLogin::New4(router1);
}

uSStrong<uArray*> FacebookLogin::__g_static_nametable1_;
::g::Uno::UX::Selector FacebookLogin::__selector0_;
::g::Uno::UX::Selector FacebookLogin::__selector1_;
::g::Uno::UX::Selector FacebookLogin::__selector2_;
::g::Uno::UX::Selector FacebookLogin::__selector3_;
::g::Uno::UX::Selector FacebookLogin::__selector4_;
::g::Uno::UX::Selector FacebookLogin::__selector5_;

// public FacebookLogin(Fuse.Navigation.Router router) [instance] :29
void FacebookLogin::ctor_7(::g::Fuse::Navigation::Router* router1)
{
    ctor_6();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :35
void FacebookLogin::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, FacebookLogin::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"pageLoaded"*/]);
    webView = ::g::Fuse::Controls::WebView::New4();
    webView_Url_inst = ::g::App_LoginSignup_FuseControlsWebView_Url_Property::New1(webView, FacebookLogin::__selector0_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"url"*/]);
    nvh = ::g::Fuse::Controls::NativeViewHost::New3();
    nvh_Opacity_inst = ::g::App_LoginSignup_FuseElementsElement_Opacity_Property::New1(nvh, FacebookLogin::__selector1_);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::App_LoginSignup_FuseTriggersWhileBool_Value_Property::New1(temp, FacebookLogin::__selector2_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"showWebView"*/]);
    ::g::Fuse::Drawing::ImageFill* temp1 = ::g::Fuse::Drawing::ImageFill::New2();
    temp1_Url_inst = ::g::App_LoginSignup_FuseDrawingImageFill_Url_Property::New1(temp1, FacebookLogin::__selector0_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"myPicture"*/]);
    ::g::Fuse::Triggers::Actions::DebugAction* temp2 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    temp2_Message_inst = ::g::App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property::New1(temp2, FacebookLogin::__selector3_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"myPicture"*/]);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::App_LoginSignup_FuseControlsTextControl_Value_Property::New1(temp3, FacebookLogin::__selector2_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"myName"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp4 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp4_Value_inst = ::g::App_LoginSignup_FuseTriggersWhileBool_Value_Property::New1(temp4, FacebookLogin::__selector2_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"hasProfile"*/]);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"login"*/]);
    ::g::Fuse::Triggers::WhileFalse* temp5 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp5_Value_inst = ::g::App_LoginSignup_FuseTriggersWhileBool_Value_Property::New1(temp5, FacebookLogin::__selector2_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"hasProfile"*/]);
    ::g::Fuse::Reactive::JavaScript* temp15 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp16 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp17 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp18 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Controls::Panel* temp19 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp20 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Triggers::PageLoaded* temp21 = ::g::Fuse::Triggers::PageLoaded::New2();
    ::g::Fuse::Triggers::Actions::EvaluateJS* temp22 = ::g::Fuse::Triggers::Actions::EvaluateJS::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(webView_Url_inst, (uObject*)temp7, 3);
    ::g::Fuse::Triggers::AddingAnimation* temp24 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], nvh_Opacity_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp26 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::Panel* temp28 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp29 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp30 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp31 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp32 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp33 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::g::Fuse::Controls::Panel* temp34 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp35 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::Stroke* temp36 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp37 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Url_inst, (uObject*)temp9, 3);
    ::g::Fuse::Gestures::Clicked* temp39 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp40 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Message_inst, (uObject*)temp10, 3);
    ::g::Fuse::Controls::StackPanel* temp41 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp42 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp43 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Triggers::AddingAnimation* temp44 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Move* temp45 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Controls::DockPanel* temp47 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp48 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp49 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.2313726f, 0.3490196f, 0.5960785f, 1.0f));
    ::g::Fuse::Controls::Text* temp50 = ::g::Fuse::Controls::Text::New3();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp13);
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp14, 3);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp15->LineNumber(3);
    temp15->FileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp15->SourceLineNumber(3);
    temp15->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp15->File(::g::Uno::UX::BundleFileSource::New1(::g::App_LoginSignup_bundle::FacebookLoginjsc6230780()));
    temp16->SourceLineNumber(6);
    temp16->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp17->SourceLineNumber(8);
    temp17->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    temp18->SourceLineNumber(9);
    temp18->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 3);
    temp19->SourceLineNumber(11);
    temp19->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp20->SourceLineNumber(12);
    temp20->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->SourceLineNumber(13);
    temp->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), nvh);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    uPtr(nvh)->Name(FacebookLogin::__selector4_);
    uPtr(nvh)->SourceLineNumber(14);
    uPtr(nvh)->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    uPtr(nvh)->Background(temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nvh)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), webView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nvh)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    uPtr(webView)->Name(FacebookLogin::__selector5_);
    uPtr(webView)->SourceLineNumber(15);
    uPtr(webView)->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(webView)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(webView)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    temp21->SourceLineNumber(16);
    temp21->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp22->JavaScript(::STRINGS[17/*"\n\t\t\t\t\...*/]);
    temp22->SourceLineNumber(17);
    temp22->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp22->add_Handler(uDelegate::New(::TYPES[5/*Fuse.Triggers.Actions.JSEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp6->SourceLineNumber(17);
    temp6->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp7->SourceLineNumber(15);
    temp7->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp24->SourceLineNumber(23);
    temp24->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef(0.0f));
    temp25->Duration(0.3);
    temp8->SourceLineNumber(13);
    temp8->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp28->SourceLineNumber(29);
    temp28->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->SourceLineNumber(30);
    temp4->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp46);
    temp29->Alignment(10);
    temp29->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp29->SourceLineNumber(31);
    temp29->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    temp30->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp30->Layer(1);
    temp30->SourceLineNumber(32);
    temp30->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp30->Fill(temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Strokes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp31);
    temp31->Width(2.0f);
    temp31->Brush(temp32);
    temp34->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp34->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp34->SourceLineNumber(35);
    temp34->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    temp35->SourceLineNumber(36);
    temp35->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Fills()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Strokes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp9->SourceLineNumber(37);
    temp9->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp36->Width(4.0f);
    temp36->Brush(temp37);
    temp39->SourceLineNumber(40);
    temp39->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp40);
    temp2->SourceLineNumber(41);
    temp2->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp10->SourceLineNumber(41);
    temp10->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp41->Alignment(10);
    temp41->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp41->SourceLineNumber(45);
    temp41->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp42->Value(::STRINGS[18/*"Welcome"*/]);
    temp42->FontSize(22.0f);
    temp42->TextAlignment(1);
    temp42->SourceLineNumber(46);
    temp42->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp3->FontSize(26.0f);
    temp3->TextAlignment(1);
    temp3->SourceLineNumber(47);
    temp3->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp43);
    temp11->SourceLineNumber(47);
    temp11->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp44->SourceLineNumber(50);
    temp44->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp45);
    temp45->Y(1.0f);
    temp45->Duration(1.5);
    temp45->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp45->Easing(::g::Fuse::Animations::Easing::BackIn());
    temp12->SourceLineNumber(30);
    temp12->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp5->SourceLineNumber(57);
    temp5->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    temp47->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp47->Alignment(10);
    temp47->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 15.0f, 5.0f));
    temp47->SourceLineNumber(58);
    temp47->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp47, uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp48->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp48->Layer(1);
    temp48->SourceLineNumber(60);
    temp48->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp48->Fill(temp49);
    temp50->Value(::STRINGS[19/*"Login with ...*/]);
    temp50->FontSize(20.0f);
    temp50->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp50->Alignment(10);
    temp50->SourceLineNumber(61);
    temp50->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp13->SourceLineNumber(58);
    temp13->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    temp14->SourceLineNumber(57);
    temp14->SourceFileName(::STRINGS[16/*"Page/Facebo...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), nvh);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), webView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
}

// public FacebookLogin New(Fuse.Navigation.Router router) [static] :29
FacebookLogin* FacebookLogin::New4(::g::Fuse::Navigation::Router* router1)
{
    FacebookLogin* obj1 = (FacebookLogin*)uNew(FacebookLogin_typeof());
    obj1->ctor_7(router1);
    return obj1;
}
// }

} // ::g
