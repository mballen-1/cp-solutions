import java.util.*;

public class A {

    public static fillAndPrintMatrix( int missingChars, int rowLimit , String name){
        int m[][] = new int[20][5];
        int count = 0;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < rowLimit; ++j) {
                if (count < missingChars){
                    m[i][j] = '*';
                    ++count;
                }
            }
        }
    }

    public static void printShit(String name) {

        int l = name.length();
        int missingChars;
        int rowLimit;
        if (l > 20 && l <= 40) {
            missingChars = 40 - l;
            rowLimit = Math.ceil(missingChars / 2);
        }

        if (l > 40 && l <= 60) {
            missingChars = 60 - l;
            rowLimit = missingChars / 3;
        }

        if (l > 60 && l <= 80) {
            missingChars = 80 - l;
            rowLimit = missingChars / 4;
        }

        if (l > 80 && l <= 100) {
            missingChars = 100 - l;
            rowLimit = missingChars / 5;
        }
        fillAndPrintMatrix(missingChars, rowLimit, name);
    }

    public static void main(String args[]) {
        Scanner lec = new Scanner(System.in);
        String name = lec.nextLine();
        if (l <= 20) {
            System.out.println(name);
            return;
        }
        printShit(name);
    }
}