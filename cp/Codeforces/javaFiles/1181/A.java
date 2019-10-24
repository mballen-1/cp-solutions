import java.util.*;

public class A {

    static long getFloorAsLong(long x) {
        return (long) Math.floor(x);
    }

    public static void main(String args[]) {
        long sashaMoney, mashaMoney, cocoPrice;
        Scanner lec = new Scanner(System.in);

        sashaMoney = lec.nextLong();
        mashaMoney = lec.nextLong();
        cocoPrice = lec.nextLong();

        long totalBought = getFloorAsLong((sashaMoney + mashaMoney) / cocoPrice);
        long floorsSum = getFloorAsLong(sashaMoney / cocoPrice) + getFloorAsLong(mashaMoney / cocoPrice);

        if (totalBought == floorsSum) {
            System.out.println(totalBought + " " + 0);
        } else {
            long excedentSasha = sashaMoney % cocoPrice;
            long excedentMasha = mashaMoney % cocoPrice;
            long neededSasha = cocoPrice - excedentSasha;
            long neededMasha = cocoPrice - excedentMasha;
            System.out.println(totalBought + " " + Math.min(neededSasha, neededMasha));
        }
    }
}