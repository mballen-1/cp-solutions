import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class B {
    public static List df = new ArrayList<Integer>();
    public static List prs = new ArrayList<>();

    public static int check(int i, int j){
        int l1 = ((int[]) prs.get(i))[0];
        int r1 = ((int[]) prs.get(i))[1];
        int l2 = ((int[]) prs.get(j))[0];
        int r2 = ((int[]) prs.get(j))[1];        
        for(int k = l1; k <= r1; ++k ){
            for(int l = l2; l <= r2; ++l ){
                if((int)df.get(k) < (int) df.get(l)){
                    System.out.println("l1 = " + l1 +"," + "r1 = " + r1 );
                    System.out.println("l2 = " + l2 +"," + "r2 = " + r2 );
                    System.out.println("hehe");
                    return 1;
                }
            }
        }
        return 0;
    }
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in); 
        int n = lec.nextInt();
        List dxs = new ArrayList<Integer>();
        int ans = 0;
        
        for(int i = 0; i< n; ++i){
            int l = lec.nextInt();
            for(int j = 0; j< l ; ++j){
                df.add(lec.nextInt());
            }
            dxs.add(l);
        }
        for(int i = 0 ; i< n; ++i){
            if(i == 0){
                int[] trv = { i,(int)dxs.get(i)-1 };
                prs.add(trv);
            }else {
                int[] lst = (int[]) prs.get(prs.size()-1);
                int[] trv = {lst[1] + 1, lst[1] + (int) dxs.get(i) };
                prs.add(trv);
            }
        }
        for(int i = 0; i< prs.size(); ++i){
            for(int j = 0; j< prs.size(); ++j){
                ans += check(i,j);
            }
        }
        for(int i= 0; i< prs.size(); ++i){
            System.out.println(((int[])prs.get(i))[0] + ","  + ((int[])prs.get(i))[1]);
        }
        System.out.println(ans);
    }
}