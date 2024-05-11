
//Average of 3 number
import java.util.Scanner; // Scanner is in the java.util package
import java.util.function.DoubleConsumer;

public class Code7_Average {
    public static void main(String[] args) {
        System.out.println("Average option\n1.Integer Average.\n2.Double Avarage.");
        System.out.print("Enter your option: ");
        int a;

        Scanner input = new Scanner(System.in);
        a = input.nextInt();
        switch (a) {
            case 1:
                // Prompt the user to enter three numbers
                System.out.print("Enter three numbers: ");
                int number1 = input.nextInt();
                int number2 = input.nextInt();
                int number3 = input.nextInt();
                // Display result
                System.out.println("The average of " + number1 + " " + number2
                        + " " + number3 + " is " + IntegerAverage(number1, number2, number3));
                break;
            case 2:
                // Prompt the user to enter three numbers
                System.out.print("Enter three numbers: ");
                double x = input.nextDouble();
                double y = input.nextDouble();
                double z = input.nextDouble();
                // Display result
                System.out.println("The average of " + x + " " + y
                        + " " + z + " is " + DoubleAverage(x, y, z));
                break;
            default:

        }

    }

    public static int IntegerAverage(int number1, int number2, int number3) {
        int average = (number1 + number2 + number3) / 3; // Compute average
        return average;
    }

    public static double DoubleAverage(double x, double y, double z) {
        double average1 = (x + y + z) / 3; // Compute average
        return average1;
    }
}