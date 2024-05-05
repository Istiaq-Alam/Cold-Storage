import java.util.Scanner;
import javax.print.attribute.standard.PrinterMessageFromOperator;

public class A_fisrt_Trail {

    public static void main(String[] args) {
        System.out.println("My first java program\nhere you can see my program");
        System.out.println("this is the 3rd line of output");
        String x = "Water";
        String y = "Fire";
        String temp;

        temp = x;
        x = y;
        y = temp;
        System.out.println("x: " + x);
        System.out.println("y: " + y);

        Scanner scanner = new Scanner(System.in);
        System.out.println("What is your name??");
        String name = scanner.nextLine();
        System.out.println("How Old are you..?");
        int age = scanner.nextInt();
        System.out.println("What class do you read in?");
        int lass = scanner.nextInt();

        System.out.println("Hey " + name);
        System.out.println("You are " + age + " old");
        System.out.println("You read in class " + lass);

        /*
         * byte a = 127;
         * a += 1;
         * System.out.println(a);
         */

    }

    /*
     * add two numbers ----> normal name convention
     * AddTwoNumbers ----> PascalConvention
     * addTwoNumbers ----> camelCaseConvention
     * System.out.println() ----> for print in new line
     * Scanner scanner = new Scanner(System.in); ----> for import new scanner
     * String name = scanner.nextLine(); ----> for implant a scanf
     */

}