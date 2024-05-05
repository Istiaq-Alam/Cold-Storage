import java.util.Scanner;

import javax.swing.JOptionPane;

public class ComputeAreaInWindow {
    /** Main method */
    public static void main(String[] args) {
        double radius;
        double area;
        // Assign a radius
        System.out.println("Enter the radius:");
        Scanner input = new Scanner(System.in);
        radius = input.nextDouble();
        // Compute area
        area = radius * radius * 3.14159;
        // Display results in a window
        JOptionPane.showMessageDialog(null, "The Area of radius " + radius + " is " + area,
                "Result", 1);
        // Display results
        System.out.println("The area for the circle of radius " + radius + " is " + area);
    }
}