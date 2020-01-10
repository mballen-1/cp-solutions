import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Scanner;

public class C {    
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in); 
        int cases = lec.nextInt();
        for(int i = 0; i< cases; ++i){
            int n = lec.nextInt();
            int sum = 0;
            int xorOrg = 0;
            for(int j = 0; j < n; ++j){
                int x = lec.nextInt();
                sum += x;
                xorOrg = xorOrg ^ x;
            }
            System.out.println("xorOrg: " + xorOrg);
            System.out.println("sum: " + sum);
            if(xorOrg == sum / 2){
                System.out.println(0);
                System.out.println();
            } else {
                int inc = (xorOrg * 2) - sum;
                System.out.println("inc: " + inc);
                if(inc > 0){
                    if(inc % 3 == 0){
                        System.out.println(3);
                        System.out.println(inc/3 + " " + inc/3 + " " + inc/3 );
                    } else {
                        if(inc % 2 == 0){
                            System.out.println(2);
                            System.out.println(inc/2 + " " + inc/2);
                        } else {
                            System.out.println(1);
                            System.out.println(inc);
                        }
                    }
                }else {
                    int xorObj = (sum/ 2) ^ xorOrg;
                    int x = 0, y = 0, z = 0;
                    for(int e = 0; e < 2 * sum ; ++e){
                        for(int f = 0; f < 2 * sum ; ++f){
                            for(int g = 0; g < 2 * sum ; ++g){
                                if((e ^ f ^ g) == xorObj){
                                    System.out.println(3);
                                    System.out.println(e + " " + f + " " + g);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        
    }
}