
//Math Class Methods
import java.util.Scanner;

public class Code22_MathClassMethod {
    public static void main(String[] args) {
        System.out.println("Value of PI " + Math.PI);
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Any degre for Trigonomatric Function:");
        double a = sc.nextDouble();
        Trigonomatric(a);

        System.out.print("Enter Any value for Exponent:");
        double b = sc.nextDouble();
        Exponent(b);
    }

    public static double Trigonomatric(double a) {
        System.out.println("Value of Sin " + a + " is " + Math.sin(a));
        System.out.println("Value of Cos " + a + " is " + Math.cos(a));
        System.out.println("Value of Tan " + a + " is " + Math.tan(a));
        System.out.println("Value of " + a + "Cos" + a + " is " + Math.acos(a));
        System.out.println("Value of " + a + "Tan" + a + " is " + Math.atan(a));
        System.out.println("Value of " + a + "Sin" + a + " is " + Math.asin(a));
        return a;
    }

    public static double Exponent(double b) {
        System.out.println("Value of exponent " + b + " is " + Math.exp(b));
        System.out.println("Value of log " + b + " is " + Math.log(b));
        System.out.println("Value of log10 " + b + " is " + Math.log10(b));
        System.out.println("Value of " + b + " Square is " + Math.pow(b, 2));
        System.out.println("Value of Square Root " + b + " is " + Math.sqrt(b));
        return b;
    }
}
