
//Temparature Convertor
import java.util.Scanner;

public class Code9_Temparature {
    public static void main(String[] args) {
        System.out.println("Temparature Converter:\n1.Fahrenheit to celsius.\n2.Celsius to Fahrenheit.");
        System.out.print("Enter your Option: ");
        try (Scanner input = new Scanner(System.in)) {
            int a = input.nextInt();
            switch (a) {
                case 1: {
                    System.out.print("Enter a degree in Fahrenheit: ");
                    double fahrenheit = input.nextDouble();
                    double celsius = Celsius(fahrenheit);
                    System.out.println("Fahrenheit " + fahrenheit + " is " + celsius + " in Celsius");
                }
                    break;
                case 2: {
                    System.out.print("Enter a degree in Celsius: ");
                    double celsius = input.nextDouble();
                    double fahrenheit = Fahrenheit(celsius);
                    System.out.println("Celsius " + celsius + " is " + fahrenheit + " in fahrenheit");
                }
                    break;
                default:

            }
        }
    }

    public static double Celsius(double fahrenheit) {
        // Convert Fahrenheit to Celsius
        double celsius = (5.0 / 9) * (fahrenheit - 32);
        return celsius;
    }

    public static double Fahrenheit(double celsius) {
        // Convert Celsius to Fahrenheit
        double fahrenheit = ((1.8 * celsius) + 32);
        return fahrenheit;
    }
}
