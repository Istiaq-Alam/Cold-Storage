import java.util.Scanner;

public class RectangleArea {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the length of Rectangle:");
        double length = input.nextDouble();
        System.out.print("Enter the width of Rectangle:");
        double width = input.nextDouble();
        // Area = length*width;
        double area = length * width;
        System.out.println("Area of Rectangle is:" + area);
    }
}
