import java.util.*;

public class A {
    public static int proc(int a, int b) {
        int c = Math.abs(a-b);
        int ans = c / 5;
        c %= 5;
        ans += c/2;
        c %= 2;
        ans += c;
        return ans;
    }

    public static void main(String args[]) {
        int cases;
        Scanner lec = new Scanner(System.in);
        cases = lec.nextInt();
        for (int i = 0; i < cases; ++i) {
            int a, b;
            a = lec.nextInt();
            b = lec.nextInt();
            System.out.println(proc(a, b));
        }
    }
}