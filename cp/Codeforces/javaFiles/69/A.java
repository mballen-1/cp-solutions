import java.util.Scanner;

public class A {
        public static void main(String args[]){
        int movements, a = 0, b = 0, c = 0;
        Scanner lec = new Scanner(System.in); 
        movements = lec.nextInt();
        
        for(int x = 0; x < movements; ++x){
            a += lec.nextInt();
            b += lec.nextInt();
            c += lec.nextInt();
        }
        boolean ans = (a == 0) && (b == 0) && (c == 0);
        if(ans){
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}