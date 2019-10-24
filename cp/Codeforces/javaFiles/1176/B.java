import java.util.*;
import java.math.*;

public class B {
    public static void main(String args[]) {
        Scanner lec = new Scanner(System.in);
        int times = lec.nextInt();

        while (times > 0) {
            int n = lec.nextInt();
            List<Integer> list = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                int x = lec.nextInt();
                list.add(x);
            }
            if (list.size() == 1) {
                int ans = list.get(0) % 3 == 0 ? 1 : 0;
                System.out.println(ans);
            } else {
                boolean can = true;
                while (can) {
                    for (int i = 0; i < list.size(); i++) {
                        for (int j = 0; j < list.size(); j++) {
                            if (i != j) {
                                int a = list.get(i);
                                int b = list.get(j);
                                int sum = a + b;
                                boolean optimal = (a % 3 != 0 && b % 3 != 0);
                                if (optimal) {
                                    if (j > i) {
                                        list.remove(j);
                                        list.remove(i);
                                    } else {
                                        list.remove(i);
                                        list.remove(j);
                                    }
                                    list.add(sum);
                                    break;
                                }
                            } else {
                                if (i == list.size() - 1) {
                                    can = false;
                                }
                            }
                        }
                    }
                }
            }
            int ans = 0;
            for (int x : list) {
                System.out.println("x:" + x);
                if (x % 3 == 0) {
                    ++ans;
                }
            }
            System.out.println(ans);
            --times;
        }
        lec.close();
    }
}