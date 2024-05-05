import java.util.Scanner;

public class SqureArea {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the length of Squre:");
        double length = input.nextDouble();

        double area = length * length;
        System.out.println("Area of the Squre is:" + area);
    }
}
