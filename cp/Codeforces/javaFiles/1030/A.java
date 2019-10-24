import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        int people;
        Scanner lec = new Scanner(System.in);
        people = lec.nextInt();
        boolean easy = true;
        int count = 0, easyCount = 0;
        while (easy && (count < people)) {
            easy = lec.nextInt() == 0;
            if (easy) ++easyCount;
            count++;
        }
        if(easyCount == people){
            System.out.println("easy");
        }
        else {
            System.out.println("hard");
        }
    }
}