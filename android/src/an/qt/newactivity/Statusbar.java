package an.qt.newactivity;
/*import android.content.Context;
import android.content.Intent;
import android.app.PendingIntent;
import android.util.Log;
import android.os.Bundle;
import android.view.WindowManager;*/
//an.qt.newactivity.Statusbar
import android.content.Context;
import android.content.Intent;
import android.app.PendingIntent;
import android.util.Log;
import android.os.Bundle;
import android.view.View;
import android.view.MotionEvent;
import android.view.WindowManager;
import android.graphics.Color;
import org.qtproject.qt5.android.bindings.QtActivity;
import android.os.Bundle;
import android.util.Log;
import com.tencent.android.tpush.XGIOperateCallback;
import com.tencent.android.tpush.XGPushConfig;
import com.tencent.android.tpush.XGPushManager;


/*public class Statusbar extends org.qtproject.qt5.android.bindings.QtActivity
{
    private final static String TAG = "QtFullscreen";
    @Override
    public void onCreate(Bundle savedInstanceState) {
          super.onCreate(savedInstanceState);
          getWindow().addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        getWindow().getDecorView().setSystemUiVisibility(
                View.SYSTEM_UI_FLAG_LAYOUT_STABLE
                | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION // hide nav bar
                | View.SYSTEM_UI_FLAG_FULLSCREEN      // hide status bar
                | View.SYSTEM_UI_FLAG_IMMERSIVE);
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent ev) {
        getWindow().getDecorView().setSystemUiVisibility(
                View.SYSTEM_UI_FLAG_LAYOUT_STABLE
                | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION // hide nav bar
                | View.SYSTEM_UI_FLAG_FULLSCREEN      // hide status bar
                | View.SYSTEM_UI_FLAG_IMMERSIVE);
        return super.dispatchTouchEvent(ev);
    }
}*/
public class Statusbar extends org.qtproject.qt5.android.bindings.QtActivity
{
    private final static String TAG = "QtFullscreen";
    @Override
    public void onCreate(Bundle savedInstanceState) {
          super.onCreate(savedInstanceState);
          getWindow().clearFlags(WindowManager.LayoutParams.FLAG_TRANSLUCENT_STATUS
                | WindowManager.LayoutParams.FLAG_TRANSLUCENT_NAVIGATION);
              getWindow().getDecorView().setSystemUiVisibility(View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION | View.SYSTEM_UI_FLAG_LAYOUT_STABLE);
              getWindow().addFlags(WindowManager.LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS);
              getWindow().setStatusBarColor(Color.TRANSPARENT);//Color.TRANSPARENT
              getWindow().getDecorView().setFitsSystemWindows(true);

              Context ctx = getApplicationContext();
                     XGPushManager.registerPush(ctx, new XGIOperateCallback() {
                         @Override
                         public void onSuccess(Object o, int i) {
                             Log.e(TAG, "register ok, token - " + o);
                         }

                         @Override
                         public void onFail(Object o, int i, String s) {
                             Log.e(TAG, "register failed, code - " + i + " message - " + s);
                         }
                     });


    }
}


