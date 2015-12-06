#ndk on andorid studio for mac 
##1.Configure JDK, NDK path environments
####I'm using jdk 1.8.0_45 and official ndk.
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/path.png)
##2. Add javah, ndk-build as External Tools
***(Menu Location is 'Settings > Tools > External Tools')***
###2-1. Configure javah
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/javah.png)
###2-2. Configure ndk-build
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/ndkbd.png)
###2-3. Configure ndk-build clean
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/ndkbdc.png)
##3. Create a new Android Studio Project
##4. Add a java class for JNI
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/ndk.png)
##5. Create a folder for JNI
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/jnidir.png)
##6. Configure build.gradle
```
android {  
 ...   
 defaultConfig {   
   ...     
   ndk {     
     moduleName "your dllname"    
      }     
   sourceSets.main { 
     jni.srcDirs = []       
     jniLibs.srcDir "src/main/libs"     
        }     
 	...   
 	}  
 ...
}
          
```
##7. First Build
####We will encounter an error like 'Error: NDK integration is deprecated in the current plugin. blah blah'.
####Because we are not using the experimental class for NDK.

####Let's add one line in 'gradle.properties'.
```
android.useDeprecatedNdk=true
```
####And build again, it must be succeeded.

##8. Create a JNI header file
####Use 'NDK external tools - javah'
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/javah_t.png)
####Then we will have a JNI header file.
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/javah_h.png)
##9. Create a C++ source file

####We don't need to check "Create associated header".
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/cpp.png)

##10. Create some MakeFiles

####Android.mk
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/android_m.png)

####Application.mk
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/application_m.png)

##11. Build Our NDK Library
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/buildndk.png)

##12. Let's Use Our NDK Library Function
![MacDown Screenshots](https://github.com/bsty2015/NDKdemos/blob/master/screenshots/usendk.png)
##13. Final Build and Create APK





