/* 
1
10
1 2 3 5 7 10 12 13 15 18
1 9 8 7 7 11 12 13 17 18    OK

1 6
1 2 5 7 9 10
12 2 4 8 9 10               OK

1 6
1 2 5 7 9 10
9 3 5 2 8 14                OK


1 6
1 2 5 7 9 10
1 2 5 7 9 10                OK

1 6
1 2 5 7 9 10
1 3 7 7 9 10                OK

1 6
1 2 5 7 9 10
2 2 7 2 8 10                OK

1 3
1 2 5
1 3 5                       OK


1 3
1 2 4 5
1 3 3 5                     OK

1 5
1 2 4 6 5
1 3 3 6 4 
*/  

import java.util.Scanner;

public class A {
    public static void eval(int[]a, int[]b){
        int zones = 0, l = -1, r = -1;
        boolean inZone = false;
        for(int i = 0; i< a.length; ++i){
            if(!inZone){
                if(a[i] != b[i]){
                    inZone = true;
                    l = i +1;
                }
            } else {
                if(a[i] == b[i] || i == a.length -1){
                    inZone = false;
                    r = i;
                    ++zones;
                }
            }
        }
        if (zones == 1 &&  a.length > 1 && r-l > 0){
            System.out.println("YES");
        } else{
            if(zones == 0 && a.length > 1 ){
                System.out.println("YES");
            }else {
                System.out.println("NO");
            }
        }
    }
    public static void main(String args[]){
        int cases;
        Scanner lec = new Scanner(System.in); 
        cases = lec.nextInt();
        
        for(int x = 0; x < cases; ++x){
            int l = lec.nextInt();
            int a[] = new int[l];
            int b[] = new int[l];
            for(int i = 0; i< l ; ++i){
                a[i] = lec.nextInt();
            }
            for(int i = 0; i< l ; ++i){
                b[i] = lec.nextInt();
            }
            eval(a,b);
        }
    }
}