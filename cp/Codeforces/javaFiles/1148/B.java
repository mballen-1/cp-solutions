import java.util.*;
import java.math.*;

public class B {
    public static void main(String args[]) {
        Scanner lec = new Scanner(System.in);
        int n, m, k;
        BigInteger ta, tb;
        n = lec.nextInt();
        m = lec.nextInt();
        ta = lec.nextBigInteger();
        tb = lec.nextBigInteger();
        k = lec.nextInt();
        BigInteger[] times_a = new BigInteger[n];
        BigInteger[] times_b = new BigInteger[m];

        for (int x = 0; x < n; ++x) {
            BigInteger value = lec.nextInt();
            times_a[x] = value;
        }

        for (int x = 0; x < m; ++x) {
            BigInteger value = lec.nextInt();
            times_b[x] = value;
        }
        int ans = -1;
        // while (k > 0 && !times_b.isEmpty() && !times_a.isEmpty()) {
        //     int earliest_a = times_a.get(0);
        //     int earliest_b = times_b.get(0);

        //     if (earliest_b > earliest_a) {
        //         times_b.remove(0);
        //     } else {
        //         times_a.remove(0);
        //     }
        //     --k;
        // }
        // if (times_a.isEmpty() || times_b.isEmpty()) {
        //     System.out.println(ans);
        // } else {
        //     for (int i = 0; i < times_a.size(); i++) {
        //         for (int j = 0; j < times_a.size(); j++) {
        //             if (times_b.get(j) >= times_a.get(i) + ta) {
        //                 ans = times_a.get(i) + ta + times_b.get(j) + tb;
        //                 i = times_a.size();
        //             }
        //         }
        //     }
        // }
        System.out.println(ans);
        lec.close();
    }
}