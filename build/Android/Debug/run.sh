#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Targets/Android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" .
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.app_loginsignup"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.app_loginsignup"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "App_Login-Signup.apk" \
    --package=com.apps.app_loginsignup \
    --activity=App_LoginSignup \
    --sym-dir="app/src/main/.uno" \
    "$@"
