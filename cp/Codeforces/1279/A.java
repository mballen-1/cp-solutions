import java.util.*;
import static java.util.Comparator.*;

public class A {

    public static void main(String args[]) {
        int cases;
        Scanner lec = new Scanner(System.in);
        cases = lec.nextInt();
        List lst;
        for (int i = 0; i < cases; ++i) {
            double r, g, b;
            r = lec.nextDouble(); 
            g = lec.nextDouble(); 
            b = lec.nextDouble();
            lst = new ArrayList<Double>();
            lst.add(r); lst.add(g); lst.add(b);
            lst.sort(naturalOrder());
            double m = (double)lst.get(2);
            double s = (double)lst.get(1) + (double)lst.get(0);
            if(m - s <= 1) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}