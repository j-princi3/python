class A {
    protected static String s = "A";

    static void display() {
        System.out.println(s);
    }
}

class B extends A {
    protected static String s = "B";

    static void display() {
        System.out.println(s);
    }
}

class C extends B {
    static void methodOfC() {
        System.out.println(A.s);
        B.display();
    }
}

public class mcq {
    public static void main(String[] args) {
        C.methodOfC();
        System.out.println(B.s);
        System.out.println(C.s); // Error: 's' has protected access in 'pack1.B'
    }
}