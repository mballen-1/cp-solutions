import java.util.*;
 
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
            int mx = -1;
            int mxI = -1;
            lst = new ArrayList();
            for (int j = 0; j < n; ++j) {
                int x = lec.nextInt();
                sum += x;
                mx = Math.max(mx, x);
                lst.add(x);
                if(sum > s && mxI == -1) { 
                    mxI = lst.indexOf(mx);
                    sum -= x;
                }
            }
            if(sum <= s && mxI == -1){
                System.out.println(0);
            } else  {
                System.out.println(mxI + 1);
            }
        }
    }
}