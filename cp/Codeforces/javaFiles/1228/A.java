import java.util.Scanner;

public class A {

    public static boolean distinct(int x) {
        int[] count = new int[10];
        while (x > 0) {
            int toRegister = x % 10;
            count[toRegister]++;
            x /= 10;
        }
        for (int e : count) {
            if (e > 1) {
                return false;
            }
        }
        return true;
    }

    public static void main(String args[]) {
        Scanner lec = new Scanner(System.in);
        int l = lec.nextInt(), r = lec.nextInt(), ans = -1;
        for (int i = l; i <= r; ++i) {
            if (distinct(i) && ans == -1) {
                ans = i;
                break;
            }
        }
        System.out.println(ans);
    }
}