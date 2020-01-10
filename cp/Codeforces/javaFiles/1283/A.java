import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A {
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in); 
        int cases = lec.nextInt();
        for(int i = 0; i< cases; ++i){
            int h = lec.nextInt();
            int m = lec.nextInt();
            int minCount = 0;
            while(h < 24){
                ++m;
                ++minCount;
                if(m == 60){
                    ++h;
                    m = 0;
                }
            }
            System.out.println(minCount);
        }
        
    }
}