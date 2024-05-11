
//Wages.java
import java.util.Scanner;

public class Wages {
    public static void main(String[] args) {
        final double RATE = 8.25;
        final int STANDARD = 40;
        try (Scanner scan = new Scanner(System.in)) {
            double pay = 0.0;

            System.out.print("Enter the number of hours worked: ");
            int hours = scan.nextInt();
            System.out.println("");

            if (hours > STANDARD)
                pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
            else
                pay = hours * RATE;
            System.out.println("Gross earning: " + pay);
        }
    }
}
