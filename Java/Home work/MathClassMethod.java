
//Math Class & Methods
import java.util.Scanner;

public class MathClassMethod {
    public static void main(String[] args) {
        System.out.println("\n\nUsing of Math class & method");
        double a;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value: ");
        a = sc.nextDouble();

        System.out.println(Math.sin(a) + " is the value of Sin" + a);
        System.out.println(Math.cos(a) + " is the value of Cos" + a);
        System.out.println(Math.tan(a) + " is the value of Tan" + a);
        System.out.println(Math.exp(a) + " is the exp value of " + a);
        System.out.println(Math.log(a) + " is the Logarithmic value of " + a);
        System.out.println(Math.ceil(Math.sin(a)) + " is the Rounded value of Sin" + a);
        System.out.println(Math.floor(Math.sin(a)) + " is the Rounded Down value of Sin()" + a);

    }
}
