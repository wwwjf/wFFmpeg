package com.wengjianfeng.wffmpeg;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tvInfo = findViewById(R.id.tv_info);
        tvInfo.setText(stringFromJNI());
//        Open("/sdcard/1552998953770.wav",this);

    }

    public native String stringFromJNI();

//    public native boolean Open(String url,Object handle);
}
