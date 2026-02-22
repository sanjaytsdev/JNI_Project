public class MyJNI {

    public native int add(int a, int b);
    public native int sub(int a, int b);
    public native int mul(int a, int b);
    public native double div(int a, int b);
    
    static {
        System.loadLibrary("MyJNILib"); 
    }

    public static void main(String[] args) {
        MyJNI obj = new MyJNI();
        int result1 = obj.add(5, 7); 
        int result2 = obj.sub(15, 5); 
        int result3 = obj.mul(5, 7); 
        double result4 = obj.div(6, 3); 
        
        System.out.println("Result: " + result1);
        System.out.println("Result: " + result2);
        System.out.println("Result: " + result3);
        System.out.println("Result: " + result4);
    }
}

