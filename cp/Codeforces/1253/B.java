import java.util.*;

public class B {
    public static Map hm = new HashMap();
    public static List events = new ArrayList();
    public static List involved = new ArrayList<Integer>();
    public static int[] rg;

    public static void main(String args[]) {
        Scanner lec = new Scanner(System.in);
        int n = lec.nextInt();
        int emp = 0;
        rg = new int[1000000];
        for (int i = 0; i < 1000000; ++i) {
            rg[i] = 0;
        }
        for (int i = 0; i < n; ++i) {
            int cur = lec.nextInt();
            int guy = Math.abs(cur);
            involved.add(guy);
            if (cur > 0) {
                if (rg[guy] != 0) {
                    System.out.println("-1");
                    return;
                }
                rg[guy] = 1;
                ++emp;
            } else {
                if (rg[guy] != 1) {
                    System.out.println("-1");
                    return;
                }
                rg[guy] = -1;
                --emp;
            }
            if (emp == 0) {
                events.add(involved.size());
                for (Object in : involved) {
                    rg[(int) in] = 0;
                }
                involved = new ArrayList<>();
            }
        }

        if (involved.size() > 0) {
            System.out.println("-1");
            return;
        }

        String ans = "";
        ans += events.size() + "\n";
        for (Object x : events) {
            String y = x.toString();
            ans += (y + ' ');
        }
        System.out.println(ans);
    }
}