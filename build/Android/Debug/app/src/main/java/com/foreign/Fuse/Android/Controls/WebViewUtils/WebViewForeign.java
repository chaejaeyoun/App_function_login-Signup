package com.foreign.Fuse.Android.Controls.WebViewUtils;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import com.fusetools.webview.JsInterface;
import com.fusetools.webview.FuseWebViewClient;
import com.fusetools.webview.FuseWebChromeClient;
import android.util.Log;
import android.webkit.WebView;
import com.fusetools.webview.ScrollableWebView;

public class WebViewForeign
{
    static void debug_log(Object message)
    {
        android.util.Log.d("App_LoginSignup", (message==null ? "null" : message.toString()));
    }

    public static void AddJavascriptInterface319(final Object handle,final String name,final com.foreign.Uno.Action_String resultHandler)
    {
        WebView wv = (WebView)handle;
        JsInterface jsi = new JsInterface(resultHandler);
        wv.addJavascriptInterface(jsi, name);
    }
    
    public static boolean CanGoBack320(final Object handle)
    {
        WebView wv = (WebView)handle;
        return wv.canGoBack();
    }
    
    public static boolean CanGoForward321(final Object handle)
    {
        WebView wv = (WebView)handle;
        return wv.canGoForward();
    }
    
    public static Object CreateAndSetWebChromeClient322(final Object webViewHandle,final com.foreign.Uno.Action_int onProgress)
    {
        FuseWebChromeClient client = new FuseWebChromeClient(onProgress);
        ((WebView)webViewHandle).setWebChromeClient(client);
        return client;
    }
    
    public static Object CreateAndSetWebViewClient323(final Object webViewHandle,final com.foreign.Uno.Action loaded,final com.foreign.Uno.Action started,final com.foreign.Uno.Action changed,final com.foreign.Uno.Action_String onCustomURI,final com.uno.StringArray customURIs,final com.foreign.Uno.Func hasUriSchemeHandler)
    {
        FuseWebViewClient client = new FuseWebViewClient(loaded, started, changed, onCustomURI, customURIs, hasUriSchemeHandler);
        ((WebView)webViewHandle).setWebViewClient(client);
        return client;
    }
    
    public static Object CreateWebView324(final boolean zoomEnabled,final boolean scrollEnabled)
    {
        ScrollableWebView wv = new ScrollableWebView(com.fuse.Activity.getRootActivity());
        wv.getSettings().setJavaScriptEnabled(true);
        wv.getSettings().setUseWideViewPort(true); //enabled viewport meta tag
        wv.getSettings().setLoadWithOverviewMode(true); //mimic iOS Safari and Android Chrome
        wv.getSettings().setSupportZoom(zoomEnabled);
        wv.getSettings().setBuiltInZoomControls(zoomEnabled);
        wv.getSettings().setDomStorageEnabled(true);
        wv.setAllowScroll(scrollEnabled);
        
        return wv;
    }
    
    public static double GetProgress325(final Object handle)
    {
        WebView wv = (WebView)handle;
        return wv.getProgress();
    }
    
    public static String GetTitle326(final Object handle)
    {
        WebView wv = (WebView)handle;
        return wv.getTitle();
    }
    
    public static String GetUrl327(final Object handle)
    {
        WebView wv = (WebView)handle;
        return wv.getUrl();
    }
    
    public static void GoBack328(final Object handle)
    {
        WebView wv = (WebView)handle;
        wv.goBack();
    }
    
    public static void GoForward329(final Object handle)
    {
        WebView wv = (WebView)handle;
        wv.goForward();
    }
    
    public static void LoadHtml330(final Object handle,final String html,final String baseUrl)
    {
        WebView wv = (WebView)handle;
        wv.loadDataWithBaseURL(baseUrl, html, "text/html", "UTF-8", null);
    }
    
    public static void LoadUrl331(final Object handle,final String url)
    {
        WebView wv = (WebView)handle;
        wv.loadUrl(url);
    }
    
    public static void Reload332(final Object handle)
    {
        WebView wv = (WebView)handle;
        wv.reload();
    }
    
    public static void StopLoading333(final Object handle)
    {
        WebView wv = (WebView)handle;
        wv.stopLoading();
    }
    
}
