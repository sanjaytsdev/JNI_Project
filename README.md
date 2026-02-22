**🌉 MyJNI – Java Native Interface Calculator**

A simple Java + C JNI project demonstrating how Java can call native C functions for basic arithmetic operations.

The project exposes native methods for addition, subtraction, multiplication, and division.

**🏗 Architecture**

1. Java Layer

    MyJNI.java defines native methods
    
    Loads native library with System.loadLibrary("MyJNILib")
    
    Acts as a client to the native code

2. Native Layer (C)

    Implements the arithmetic operations
    
    Functions follow JNI naming convention: Java_<ClassName>_<MethodName>
    
    Handles data type conversion between Java and C (jint, jdouble)

3. JNI Bridge

    Connects Java runtime to compiled native library
    
    Handles memory and type marshaling

**⚙️ How It Works**

1. Java declares native methods: public native int add(int a, int b);

2. Java loads the compiled C library: static { System.loadLibrary("MyJNILib"); }
   
3. The JVM calls the corresponding C function: JNIEXPORT jint JNICALL Java_MyJNI_add(JNIEnv *env, jobject obj, jint a, jint b) {
    return a + b;
}

4. Native code executes and returns result back to Java.

**🚀 How to Build & Run**

Step 1: Compile Java Class

      javac -h MyJNI.java
    
      Produces MyJNI.class and MyJNI.h

STEP 2: Set JAVA_HOME

      export JAVA_HOME=/usr/lib/jvm/java-21-openjdk-amd64

Step 3: Compile C Library

      gcc -shared -fpic -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -o libMyJNILib.so MyJNILib.c

      Produces libMyJNILib.so

Step 4: Run Java Program

      java -Djava.library.path=. MyJNI
    
      -Djava.library.path=. tells JVM to look in the current folder for libMyJNILib.so
  

  
