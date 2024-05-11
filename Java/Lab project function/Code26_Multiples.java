
// MUltiples Numbers
import java.util.Scanner;

import javax.swing.plaf.multi.MultiButtonUI;

public class Code26_Multiples {
    public static void main(String[] args) {
        final int PER_LINE = 5;
        int value, limit;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a posivite value : ");
        value = sc.nextInt();
        System.out.println("Enter an upper limit : ");
        limit = sc.nextInt();
        System.out.println("\nThe multiple of " + value + " between " + value + " & " + limit + " (inclusive) are :");
        Multiples(value, limit, PER_LINE);

    }

    public static void Multiples(int value, int limit, int PER_LINE) {
        int multiple = 0, count = 0;
        for (multiple = value; multiple <= limit; multiple = multiple + value) {
            System.out.print(multiple + "\t");

            count = count + 1;
            if (count % PER_LINE == 0) {
                System.out.println("");
            }
        }
    }
}
