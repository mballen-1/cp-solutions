import java.util.*;

public class A {

    public static int check(String a, String b) {
        if (a.length() != b.length()) {
            return 0;
        }
        if (a == b) {
            return b.length();
        }
        int count = 0;
        for (int i = 0; i < a.length(); ++i) {
            count += a.charAt(i) == b.charAt(i) ? 1 : 0;
        }
        return count;
    }

    public static void main(String args[]) {
        Scanner lec = new Scanner(System.in);
        short slength = lec.nextShort();
        String[] possibleAnswers = { "vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon",
                "sylveon" };
        String x = lec.next();
        int maxCoincidences = -1 , indexAnswer = 0;
        int unknownChars = 0;
        for (int i = 0; i < slength; ++i) {
            if (x.charAt(i) == '.') {
                unknownChars++;
            }
        }
        if (unknownChars == slength) {
            if (unknownChars == 6) {
                System.out.println(possibleAnswers[3]);
            }
            if (unknownChars == 7) {
                System.out.println(possibleAnswers[2]);
            }
            if (unknownChars == 8) {
                System.out.println(possibleAnswers[0]);
            }
        } else {
            for (int i = 0; i < possibleAnswers.length; ++i) {
                if (check(x, possibleAnswers[i]) > maxCoincidences) {
                    maxCoincidences = check(x, possibleAnswers[i]);
                    indexAnswer = i;
                }
            }
            System.out.println(possibleAnswers[indexAnswer]);
        }
    }
}