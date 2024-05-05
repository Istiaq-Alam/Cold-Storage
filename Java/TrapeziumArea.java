
//Java Program to Calculate the Area of a Trapezium
import java.util.Scanner;

public class TrapeziumArea {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // Create an instance of the Scanner Class
        System.out.println("Enter the length of the parallel sides of the trapezium: ");
        double side1 = sc.nextDouble(); // Take input from the user
        System.out.println("Enter the length of the parallel sides of the trapezium: ");
        double side2 = sc.nextDouble();
        System.out.println("Enter the height of the trapezium: ");
        double height = sc.nextDouble();

        double area = ((side1 + side2) * height) / 2; // Calculate the area
        if (side1 <= 0 || side2 <= 0)
            System.out.println("Length should be positve");
        else
            System.out.println("Area of trapezium = " + area);
    }
}