import java.util.*;

public class A {
    public static void main(String args[]){
        boolean hasMoney = new Boolean(true);
        int cost, dollars, bananas;
        
        Scanner scanner = new Scanner(System.in);
        cost = scanner.nextInt();
        dollars = scanner.nextInt();
        bananas = scanner.nextInt();
        scanner.close();
        
        int total = new Integer(1);

        for(int i = 1; i < bananas + 1 ; ++i){
            total += i * cost;
        }

        if(total <= dollars){
            System.out.println(0);
            return;
        }
        int x = 1;
        while(hasMoney){
            dollars -= x*cost;
            if(dollars <= 0 ){
                hasMoney = false;
                dollars +=  x*cost;
                break;
            }
            
            x++;
        }
        int sol = x*cost - dollars;
        while( x < bananas){
            ++x;
            sol += x*cost;
        }   
        System.out.println(sol);      
    
    }


}