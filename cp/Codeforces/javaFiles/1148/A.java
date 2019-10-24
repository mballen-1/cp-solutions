import java.util.*;
import java.math.*;

public class A {
    public static void main(String args[]) {
        Scanner lec = new Scanner(System.in);
        BigInteger a, b, c;
        a = lec.nextBigInteger();
        b = lec.nextBigInteger();
        c = lec.nextBigInteger();
        BigInteger min = a.min(b);
        BigInteger ans = min.add(min).add(c.add(c));
        if (a.compareTo(b) != 0 ) {
            System.out.println(ans.add(new BigInteger("1")));
        } else {
            System.out.println(ans);
        }
    }
}