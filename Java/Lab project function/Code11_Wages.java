
//Wages.java
import java.text.NumberFormat;
import java.util.Scanner;

public class Code11_Wages {
    public static void main(String[] args) {
        final double RATE = 8.25;
        final int STANDARD = 40;
        try (Scanner scan = new Scanner(System.in)) {
            // double pay = 0.0;

            System.out.print("Enter the number of hours worked: ");
            int hours = scan.nextInt();
            System.out.println("");
            double pay = Pay(hours, RATE, STANDARD);
            NumberFormat fmt = NumberFormat.getCurrencyInstance();
            System.out.println("Gross earning: " + fmt.format(pay));

        }
    }

    public static double Pay(int hours, double RATE, int STANDARD) {
        double pay;
        if (hours > STANDARD)
            pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
        else
            pay = hours * RATE;
        return pay;
    }

}
