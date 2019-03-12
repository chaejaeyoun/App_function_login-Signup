// This file was generated based on /Users/jaeyounchae/Documents/fuse/App_Login-Signup/.uno/ux15/App_Login-Signup.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.App_LoginSignup-7a28c487.h>
#include <Fuse.Triggers.Actions-d8fdd070.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property :35
// {
static void App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::DebugAction_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.Actions.DebugAction*/], offsetof(App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property", options);
    type->fp_build_ = App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property__Set1_fn;
    return type;
}

// public App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) :38
void App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property__ctor_3_fn(App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property* __this, ::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :40
void App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property__Get1_fn(App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::Actions::DebugAction*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.DebugAction*/]))->Message(), void();
}

// public App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property New(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) :38
void App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property__New1_fn(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector* name, App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property** __retval)
{
    *__retval = App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :39
void App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property__get_Object_fn(App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :41
void App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property__Set1_fn(App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Triggers::Actions::DebugAction*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.DebugAction*/]))->Message(v);
}

// public App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) [instance] :38
void App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property::ctor_3(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property New(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) [static] :38
App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property* App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property::New1(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector name)
{
    App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property* obj1 = (App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property*)uNew(App_LoginSignup_FuseTriggersActionsDebugAction_Message_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
