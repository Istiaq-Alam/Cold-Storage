import java.util.Scanner;

public class Expon {

    public static void main(String[] args) {

        int x, y;

        System.out.print("Enter your number: ");

        Scanner input = new Scanner(System.in);
        x = input.nextInt();

        System.out.print("Enter the power of the number: ");
        y = input.nextInt();

        System.out.println("Result: " + Math.pow(x, y));

    }

}