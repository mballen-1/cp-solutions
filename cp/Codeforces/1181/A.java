import java.util.*;
import java.math.*;

public class A {
    public static void main(String args[]) {
        long x, y, z;
        Scanner lec = new Scanner(System.in);
        x = lec.nextLong();
        y = lec.nextLong();
        z = lec.nextLong();
        long b  = x%z + y%z;
        long xx = x / z;
        long yy = y / z;

        while(b >= 0){
            b -= 2*z;
            ++x;
            ++y;
        }
        System.out.println(xx + " " + yy);
    }
}