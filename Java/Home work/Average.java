import java.util.Scanner; // Scanner is in the java.util package
import java.util.function.DoubleConsumer;

public class Average {
    public static void main(String[] args) {
        System.out.println("Average option\n1.Integer Average.\n2.Double Avarage.");
        System.out.print("Enter your option: ");
        int a;
        // Create a Scanner object

        Scanner input = new Scanner(System.in);
        a = input.nextInt();
        switch (a) {
            case 1:
                // Prompt the user to enter three numbers
                System.out.print("Enter three numbers: ");
                int number1 = input.nextInt();
                int number2 = input.nextInt();
                int number3 = input.nextInt();
                // Compute average
                int average = (number1 + number2 + number3) / 3;
                // Display result
                System.out.println("The average of " + number1 + " " + number2
                        + " " + number3 + " is " + average);
                break;
            case 2:
                // Prompt the user to enter three numbers
                System.out.print("Enter three numbers: ");
                double x = input.nextDouble();
                double y = input.nextDouble();
                double z = input.nextDouble();
                // Compute average
                double avarage1 = (x + y + z) / 3;
                // Display result
                System.out.println("The average of " + x + " " + y
                        + " " + z + " is " + avarage1);
                break;
            default:

        }

    }
}
