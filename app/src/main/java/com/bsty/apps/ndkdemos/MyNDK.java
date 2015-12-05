package com.bsty.apps.ndkdemos;

/**
 * Created by bsty on 12/5/15.
 */
public class MyNDK {
    static {
        System.loadLibrary("MyLibrary");
    }

    public native String getMyString();
}
