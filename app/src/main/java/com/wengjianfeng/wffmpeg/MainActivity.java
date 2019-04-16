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

    }

    public native String stringFromJNI();
}
