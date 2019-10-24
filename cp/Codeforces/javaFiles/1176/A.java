import java.util.*;
import java.math.*;

public class A {

    public static void proc(BigInteger n) {
        int count = 0;
        boolean can = true;

        while (can && n.compareTo(new BigInteger("1")) != 0) {
            if (n.divideAndRemainder(new BigInteger("2"))[1].compareTo(new BigInteger("0")) == 0 ) {
                n = n.divide(new BigInteger("2"));
                ++count;
            } else {
                if (n.divideAndRemainder(new BigInteger("3"))[1].compareTo(new BigInteger("0")) == 0 ) {
                    n = n.divide(new BigInteger("3")).multiply(new BigInteger("2"));
                    ++count;
                } else {
                    if (n.divideAndRemainder(new BigInteger("5"))[1].compareTo(new BigInteger("0")) == 0 ) {
                        n = n.divide(new BigInteger("5")).multiply(new BigInteger("4"));
                        ++count;
                    } else {
                        can = false;
                    }
                }
            }
        }
        int ans = n.compareTo(new BigInteger("1")) == 0 ? count: -1; 
        System.out.println(ans);
    }
    public static void main(String args[]) {
        Scanner lec = new Scanner(System.in);
        int times = lec.nextInt();
        while (times > 0) {
            BigInteger n = lec.nextBigInteger();
            proc(n);
            --times;
        }

    }
}
// AA0091H40D