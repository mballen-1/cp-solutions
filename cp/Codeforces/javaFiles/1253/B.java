import java.util.*;
import java.util.Map.Entry;
 
public class B {
    public static Map hm = new HashMap();
    public static List events = new ArrayList();
    public static List involved = new ArrayList<Integer>();
    public static int[] rg;
 
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in);
        int n = lec.nextInt(); int emp = 0;
        rg = new int[1000000];
        int partitions = 1;
        for(int i = 0; i < 1000000; ++i){
            rg[i] = 0;
        }
        for(int i = 0; i < n; ++i){
            int cur = lec.nextInt();
            if(cur < 0){
                if(rg[-cur] == 0) {
                    System.out.println("-1");
                    return;
                }else {
                    rg[-cur] = -1;
                    --emp;
                }
            } else {
                if(rg[cur] == 0){
                    rg[cur] = 1;
                    involved.add(cur);
                    ++emp;
                } else {
                    if(rg[cur] == -1 || emp == 0){
                        events.add(i);
                        ++partitions;
                        for (Object in : involved) {
                            rg[(int)in] = 0;
                        }
                        involved = new ArrayList<>();                        
                        rg[cur] = 1;
                    }
                }
            }
        }
        
        for(int i = 0; i < 1000000; ++i){
            if(rg[i] == 1){
                System.out.println("-1");
                return;
            }
        }
        
        String ans = "";
        ans += partitions + "\n";
        for(Object x: events ){
            String y = x.toString();
            ans += (y + ' ');
        }
        if(partitions > 1){
            ans += n - (int) events.get(events.size() -1);
        } else {
            ans += n;
        }
        
        System.out.println(ans); 
    }
}