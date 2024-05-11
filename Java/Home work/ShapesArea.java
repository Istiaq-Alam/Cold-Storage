import java.util.Scanner;

public class ShapesArea {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("\n\tArea Calculator");
        System.out.println(
                "1. Area of Circle\n2. Area of Cube\n3. Area of Rectengle\n4. Area of Square\n5. Area of Tringle\n6. Area of Trapezium.");
        System.err.print("Select One of them:");
        int shape = input.nextInt();
        double length, area;
        switch (shape) {
            case 1:
                System.out.print("\tArea of Circle.\nEnter the radius:");
                double r = input.nextDouble();
                area = (22 * r * r) / 7;
                System.out.println("Area of Circle is: " + area);
                break;
            case 2:
                double side, volume, surfaceArea;

                System.out.print("\tArea of Cube.\nEnter Length of Side of Cube: ");
                side = input.nextDouble();

                /* Total surface area of Cube = 6 X side X side */
                surfaceArea = 6 * side * side;
                /* Volume of Cube = side X side X side */
                volume = side * side * side;

                System.out.println("Surface Area of Cube =" + surfaceArea);
                System.out.print("Volume of Cube =" + volume);
                break;
            case 3:
                System.out.print("\tArea of Rectangle\nEnter the length of Rectangle:");
                length = input.nextDouble();
                System.out.print("Enter the width of Rectangle:");
                double width = input.nextDouble();
                // Area = length*width;
                area = length * width;
                System.out.println("Area of Rectangle is:" + area);
                break;
            case 4:
                System.out.println("\tArea of Square\nEnter the length of Squre:");
                length = input.nextDouble();

                area = length * length;
                System.out.println("Area of the Squre is:" + area);
                break;
            case 5:
                System.out.println("\tArea of Triangle\nEnter the width of the Triangle:");
                double b = input.nextDouble();

                System.out.println("Enter the height of the Triangle:");
                double h = input.nextDouble();

                area = (b * h) / 2; // Area = (width*height)/2
                System.out.println("Area of Triangle is: " + area);
                break;
            case 6:
                System.out.println("Enter the length of the parallel sides of the trapezium: ");
                double side1 = input.nextDouble(); // Take input from the user
                System.out.println("Enter the length of the parallel sides of the trapezium: ");
                double side2 = input.nextDouble();
                System.out.println("Enter the height of the trapezium: ");
                double height = input.nextDouble();

                area = ((side1 + side2) * height) / 2; // Calculate the area
                if (side1 <= 0 || side2 <= 0)
                    System.out.println("Length should be positve");
                else
                    System.out.println("Area of trapezium = " + area);
                break;
        }
    }
}
