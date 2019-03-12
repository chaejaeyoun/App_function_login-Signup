// This file was generated based on /Users/jaeyounchae/Documents/fuse/App_Login-Signup/App_Login-Signup.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.App_LoginSignup_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[5];

namespace g{

// public static generated class App_LoginSignup_bundle :0
// {
// static App_LoginSignup_bundle() :0
static void App_LoginSignup_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    App_LoginSignup_bundle::FacebookLoginjsc6230780_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"App_Login-S...*/]))->GetFile(::STRINGS[1/*"facebooklog...*/]);
    App_LoginSignup_bundle::LogInjsb62f4938_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"App_Login-S...*/]))->GetFile(::STRINGS[2/*"loginjs-4e6...*/]);
    App_LoginSignup_bundle::resultjsd2fedb76_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"App_Login-S...*/]))->GetFile(::STRINGS[3/*"resultjs-5a...*/]);
    App_LoginSignup_bundle::SignUpjs9418e965_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"App_Login-S...*/]))->GetFile(::STRINGS[4/*"signupjs-98...*/]);
}

static void App_LoginSignup_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("App_Login-Signup");
    ::STRINGS[1] = uString::Const("facebookloginjs-42546e15.js");
    ::STRINGS[2] = uString::Const("loginjs-4e6e393d.js");
    ::STRINGS[3] = uString::Const("resultjs-5a645087.js");
    ::STRINGS[4] = uString::Const("signupjs-980766a6.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&App_LoginSignup_bundle::FacebookLoginjsc6230780_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&App_LoginSignup_bundle::LogInjsb62f4938_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&App_LoginSignup_bundle::resultjsd2fedb76_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&App_LoginSignup_bundle::SignUpjs9418e965_, uFieldFlagsStatic);
}

uClassType* App_LoginSignup_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("App_LoginSignup_bundle", options);
    type->fp_build_ = App_LoginSignup_bundle_build;
    type->fp_cctor_ = App_LoginSignup_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> App_LoginSignup_bundle::FacebookLoginjsc6230780_;
uSStrong< ::g::Uno::IO::BundleFile*> App_LoginSignup_bundle::LogInjsb62f4938_;
uSStrong< ::g::Uno::IO::BundleFile*> App_LoginSignup_bundle::resultjsd2fedb76_;
uSStrong< ::g::Uno::IO::BundleFile*> App_LoginSignup_bundle::SignUpjs9418e965_;
// }

} // ::g
