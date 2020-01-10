import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class B {
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in); 
        int cases = lec.nextInt();
        for(int i = 0; i< cases; ++i){
            int n = lec.nextInt();
            int k = lec.nextInt();
            int full = n - n % k;
		    full += Math.min(n % k, k / 2);
		    System.out.println(full);
        }
    }
}