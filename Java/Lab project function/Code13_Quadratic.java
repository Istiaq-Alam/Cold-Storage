
//Quadratic.java
import java.util.Scanner;

public class Code13_Quadratic {
    public static void main(String[] args) {
        // double root1 = 0.0, root2 = 0.0;
        Scanner input = new Scanner(System.in);
        System.out.println("\n\n\tSolving The Equation ax^2+bx+c=0");
        System.out.print("Enter (a) the coefficient of squared x: ");
        double a = input.nextDouble();
        System.out.print("Enter (b) the coefficient of x: ");
        double b = input.nextDouble();
        System.out.print("Enter (c) the Constant: ");
        double c = input.nextDouble();
        double d = discriminant(a, b, c);

        if (d > 0.0) {
            double root1 = ((-1 * b + Math.sqrt(d)) / 2 * a);
            double root2 = ((-1 * b - Math.sqrt(d)) / 2 * a);
            System.out.println("\n\t#Root 1:: " + root1 + "\n\t#Root 2:: " + root2);
        } else if (d == 0.0) {
            double root = (-b / 2.0 * a);
            System.out.println("\n\t#Root :: " + root);
        } else {
            System.out.println("\n\tRoots are not real. They are Complex number");
        }
    }

    public static double discriminant(double a, double b, double c) {
        double discriminant = Math.pow(b, 2) - (4 * a * c);
        return discriminant;
    }

    /*
     * public static double Root1(double a, double b, double d, double c) {
     * double root1 = ((-1 * b + Math.sqrt(d)) / 2 * a);
     * return root1;
     * }
     * 
     * public static double Root2(double a, double b, double d, double c) {
     * double root2 = ((-1 * b - Math.sqrt(d)) / 2 * a);
     * return root2;
     * 
     * }
     */

}