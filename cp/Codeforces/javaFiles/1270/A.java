import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Scanner;

public class A {    
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in); 
        int cases = lec.nextInt();
        for(int i = 0; i< cases; ++i){
            int n = lec.nextInt();
            int k1 = lec.nextInt();
            int k2 = lec.nextInt();
            int fMax = Integer.MIN_VALUE, sMax = Integer.MIN_VALUE;
            for(int j = 0; j < k1; ++j){
                int x = lec.nextInt();
                fMax = Math.max(fMax, x);
            }
            for(int k = 0 ; k < k2; ++k){
                int y = lec.nextInt();
                sMax = Math.max(sMax, y);
            }
            if (fMax > sMax) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        
    }
}