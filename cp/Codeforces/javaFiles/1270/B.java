import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class B {
    public static List mn, mx, org;
    public static void magic(){
        for(int i = 0; i< mx.size(); ++i){

        }
    }
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in); 
        int t = lec.nextInt();        
        for(int i = 0; i< t; ++i){
            int n = lec.nextInt();
            mn = new ArrayList();
            mx = new ArrayList();
            org = new ArrayList<>();
            org.add(3);
            org.add(3);
            org.add(2);
            System.out.println(org.indexOf(3));

            // for(int j = 0; j < n; ++j){
            //     int x = lec.nextInt();
            //     if (x > n){
            //         mx.add(x);
            //     } else {
            //         mn.add(x);
            //     }
            //     org.add(x);
            // }
            // magic();
        }
        
    }
}