import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A {
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in); 
        int n = lec.nextInt(), m = lec.nextInt();
        List s = new ArrayList() , t = new ArrayList() ;
        for(int i = 0 ; i< n ; ++i){
            s.add(lec.next());
        }
        for(int i = 0 ; i< m ; ++i){
            t.add(lec.next());
        }
        int q = lec.nextInt();
        for(int i = 0 ; i< q ; ++i){
            int x = lec.nextInt();
            int a = x%n;
            int b = x%m;
            if(a == 0){
                System.out.print(s.get(n-1));
            } else {
                System.out.print(s.get(a -1));
            }
            if(b == 0){
                System.out.print(t.get(m-1));
            } else {
                System.out.print(t.get(b -1));
            }
            System.out.print("\n");
        }   
    }
}