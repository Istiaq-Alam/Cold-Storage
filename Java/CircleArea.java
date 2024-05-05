import java.util.Scanner;

//Java Program to Calculate the Area of a Circle
public class CircleArea {
    public static void main(String args[]) {

        Scanner input = new Scanner(System.in);

        System.out.print("\n \nEnter the radius:");
        double r = input.nextDouble();

        double area = (22 * r * r) / 7; // double area = 3.1416 * r * r;
        System.out.println("Area of Circle is: " + area);
    }
}