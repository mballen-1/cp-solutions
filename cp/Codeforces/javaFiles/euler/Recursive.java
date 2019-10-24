import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Recursive {

    short b;
    short u_0;

    public double f(double x) {
        return 
            1/(
                Math.floor(
                    Math.pow(
                        2, this.b - Math.pow(x, 2)
                    )
                )
            ) * Math.pow(10, 9);
    }

    public double findUn(double n) {
        if(n == 0){
            return this.u_0;
        }
        return f(findUn(--n)); 
    }

    public static void main(String[] args) {
        Recursive x = new Recursive();
        Scanner lec = new Scanner(System.in);
        
        x.b = lec.nextShort();
        x.u_0 = lec.nextShort();
        
        float n = (int) Math.pow(10, 12);
        
        double un = x.findUn(n);        
        // double un1 = x.f(un);
        //System.out.println(un + un1);
        System.out.println(un);
    }
}