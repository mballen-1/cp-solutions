import java.util.Scanner;
 
public class A {    
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in); 
        int cases = lec.nextInt();
        for(int i = 0; i< cases; ++i){
            int n = lec.nextInt(); 
            int k1 = lec.nextInt(), k2 = lec.nextInt();
            int fMax = Integer.MIN_VALUE, sMax = Integer.MIN_VALUE;
            for(int j = 0; j < k1; ++j){
                fMax = Math.max(fMax, lec.nextInt());
            }
            for(int k = 0 ; k < k2; ++k){
                sMax = Math.max(sMax, lec.nextInt());
            }
            if (fMax > sMax) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        
    }
}