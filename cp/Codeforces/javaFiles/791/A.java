import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner lec = new Scanner(System.in);
        int a = lec.nextInt();
        int b = lec.nextInt();
        if (a == b) {
            System.out.println(1);
            lec.close();
            return;
        }
        int years = 0;
        while (a <= b) {
            a *= 3;
            b *= 2;
            years++;
        }
        System.out.println(years);
        lec.close();
    }
}