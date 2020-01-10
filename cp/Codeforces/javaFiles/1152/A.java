import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        Scanner lec = new Scanner(System.in);
        
        int chests = lec.nextInt();
        int keys = lec.nextInt();
        
        int evenChests = 0;
        int evenKeys = 0;
        int oddChests = 0;
        int oddKeys = 0;
        
        for(int i = 0; i < chests; i++){
            lec.nextInt() % 2 == 0 ? ++evenChests : ++oddChests;
        }

        for(int i = 0; i < keys; i++){
            lec.nextInt() % 2 == 0 ? ++evenKeys : ++oddKeys;
        }
        
        System.out.println(min(oddChests,evenKeys) + min(evenChests, oddKeys));
    }

}