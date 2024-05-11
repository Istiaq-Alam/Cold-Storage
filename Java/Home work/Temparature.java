import java.util.Scanner;

public class Temparature {
    public static void main(String[] args) {
        System.out.println("Temparature Converter:\n1.Fahrenheit to celsius.\n2.Celsius to Fahrenheit.");
        try (Scanner input = new Scanner(System.in)) {
            int a = input.nextInt();
            switch (a) {
                case 1: {
                    System.out.print("Enter a degree in Fahrenheit: ");
                    double fahrenheit = input.nextDouble();
                    // Convert Fahrenheit to Celsius
                    double celsius = (5.0 / 9) * (fahrenheit - 32);
                    System.out.println("Fahrenheit " + fahrenheit + " is " + celsius + " in Celsius");
                }
                    break;
                case 2: {
                    System.out.print("Enter a degree in Celsius: ");
                    double celsius = input.nextDouble();
                    // Convert Celsius to Fahrenheit
                    double fahrenheit = ((1.8 * celsius) + 32);
                    System.out.println("Celsius " + celsius + " is " + fahrenheit + " in fahrenheit");
                }
                    break;
                default:

            }
        }
    }
}
