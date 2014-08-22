wxWidgets for Android readme
-------------------------------------

For information on installing, building and setting up wxWidgets on android, please see install.txt.

Since wxWidgets for Android  contains java files in addition to C++ ones 
you can read more about it in java.txt

C++ files are located in src/android/jni.
Java files are located in src/android/java.

More advanced documentation can be found on this link:
http://wiki.wxwidgets.org/WxAndroid/docs

NOTE:

wxWidgets applications on android are not written in java, they are written in CPP
as with any other wxWidgets port, but use premade java classes in its project, since 
CPP classes depend on them.

About 
-------------------------------------

Projects goal is to fully bring wxWidgets to Android platform, to do this port uses 
strong and flexible java classes that make sure JNI and Global/Local references 
use is controled and it provides easier thread management.

Initially project used references for every object, however that turned out to be 
ineffective as JNI is limited on Android, managing global/local references is expensive 
and it was hard to match all different threads and lifecycles that exist android. 

To combat this, more java classes are introduced that would help control what CPP
part sends to java and vice versa. CPP now sends all information required only for displaying
what user requires through WXCalls class, and if anytime CPP class needs to be informed 
about whats happening on surface, such as events or text updates in certain controls it would use
WXNative class. 

There are still global references and JNI calls, but reference is only made if its needed by more then 
single class, for example WXCalls class and object reference always exists since it is used each time
we want to invoke java method, however any other class such as control simply passes id to java methods
to invoke certain view methods or change anything regarding them, this can be seen in wxControl, wxNotificationMessage, etc..

JNI calls now only call through WXCalls static methods. Since they are static its less expensive to use them
and those methods are flexible and effective in using data provided by wxWidgets.

Development tips
-------------------------------------

Both languages:
Avoid using floating point numbers, especially in java.

CPP/JNI:
Avoid using global/local references, and use it only if they 
will be used extensively.
Avoid calling non static methods.
Threads in CPP are independent from Java and vice versa.
Most data should be stored and interpreted in CPP, use java only
for displaying things to user.

Java:
Make sure that any public static variable is "synchronized" before usage.
Static methods and variables should be used in most cases.
Don't use getters and setters.
Use data types already written by sun/oracle/google, they are optimized
to work well and there is no need to change anything in there.
Use reflection where ever it is suitable.
Do not store unnecessary data.
Native methods should send only data that is required for wxWidgets, do 
not send any unnecessary data.

Additional and more detailed explanation can be found on this link:
http://developer.android.com/training/articles/perf-tips.html


