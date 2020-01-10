import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class C {
    public static int reg[];
    public static int getUnused(int i){
        for(int j = 0; j< reg.length; ++j){
            if(reg[j] == 0 && j != i) {
                reg[j] = 1;
                return j + 1;
            }
        }
        return 0;
    }
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in); 
        int f = lec.nextInt();
        List lst = new ArrayList<>();
        reg = new int[f];

        for(int i = 0; i< f; ++i){
            reg[i] = 0;
        }

        for(int i = 0; i< f; ++i){
            int x = lec.nextInt();
            lst.add(x);
            if(x > 0) {
                reg[x - 1] = 1;
            }
        }
        System.out.print("reg=>");
        for(int i = 0; i< f; ++i){
            System.out.print(reg[i]+ ", ");
        }
        System.out.println();

        for(int i = 0; i< f; ++i){
            int cur = (int) lst.get(i);
            if(cur == 0) {
                int e = getUnused(i);
                lst.set(i, e);
            }
            
        }
        for(int i = 0; i< f; ++i){
            System.out.print(lst.get(i) + " ");
        }
        System.out.println();
        
    }
}