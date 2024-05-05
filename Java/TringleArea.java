
//Java Program to Calculate the Area of a Tringle
import java.util.Scanner;

public class TringleArea {
    public static void main(String args[]) {

        Scanner input = new Scanner(System.in);

        System.out.println("Enter the width of the Triangle:");
        double b = input.nextDouble();

        System.out.println("Enter the height of the Triangle:");
        double h = input.nextDouble();

        double area = (b * h) / 2; // Area = (width*height)/2
        System.out.println("Area of Triangle is: " + area);
    }
}
