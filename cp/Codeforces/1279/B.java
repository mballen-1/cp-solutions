import java.util.*;
import static java.util.Comparator.*;

public class B {

    public static void main(String args[]) {
        int cases;
        Scanner lec = new Scanner(System.in);
        cases = lec.nextInt();
        List lst;
        for (int i = 0; i < cases; ++i) {
            int n = lec.nextInt();
            int s = lec.nextInt();
            int sum = 0;
            int g = -1;
            lst = new ArrayList();
            for (int j = 0; j < n; ++j) {
                int x = lec.nextInt();
                sum += x;
                lst.add(x);
                if(sum >= s && g == -1) {
                    g = x;
                    sum -= x;
                }
            }
            // System.out.println(g + " = g");
            if(sum <= s && g == -1){
                System.out.println(0);
            } else  {
                System.out.println(lst.indexOf(g) +1);
            }
        }
    }
}