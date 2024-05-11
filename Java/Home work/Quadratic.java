
//Quadratic.java
import java.util.Scanner;

public class Quadratic {
    public static void main(String[] args) {
        double discriminat, root1, root2;
        Scanner input = new Scanner(System.in);
        System.out.println("\n\nSolving The Equation ax^2+bx+c=0");
        System.out.print("Enter (a) the coefficient of squared x: ");
        int a = input.nextInt();
        System.out.print("Enter (b) the coefficient of x: ");
        int b = input.nextInt();
        System.out.print("Enter (c) the Constant: ");
        int c = input.nextInt();

        discriminat = Math.pow(b, 2) - (4 * a * c);
        root1 = ((-1 * b + Math.sqrt(discriminat)) / 2 * a);
        root2 = ((-1 * b - Math.sqrt(discriminat)) / 2 * a);

        System.out.println("#Root 1:: " + root1 + "\n#Root 2:: " + root2);
    }
}
