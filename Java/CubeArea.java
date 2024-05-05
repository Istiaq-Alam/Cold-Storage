
//Java Program to Calculate the Area of a Cube
import java.util.Scanner;

public class CubeArea {
    public static void main(String args[]) {

        double side, volume, surfaceArea;
        Scanner input = new Scanner(System.in); // Take input from user

        System.out.print("Enter Length of Side of Cube: ");
        side = input.nextDouble();

        /* Total surface area of Cube = 6 X side X side */
        surfaceArea = 6 * side * side;
        /* Volume of Cube = side X side X side */
        volume = side * side * side;

        System.out.println("Surface Area of Cube =" + surfaceArea);
        System.out.print("Volume of Cube =" + volume);
    }
}