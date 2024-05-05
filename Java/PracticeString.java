import java.util.Scanner;

public class PracticeString {
    public static void main(String[] args) {
        System.out.print("\n\nEnter your First String : ");
        Scanner input = new Scanner(System.in);
        String s1 = input.nextLine();
        System.out.print("Enter your Second String : ");
        String s2 = input.nextLine();

        System.out.println("\nLenth of the First String is: " + s1.length());
        System.out.println("Lenth of the Second String is: " + s2.length());

        System.out.println("\nAfter Replaced all spaces of the First String \"" + s1.replace(' ', '_') + "\"");

        System.out.println("\nIs the First String Equals To the Second String..??");
        boolean b = s1.equalsIgnoreCase(s2);
        if (b == true) {
            System.out.println("Yes! They are Equal");
        } else {
            System.out.println("No! They are Not Equal");
        }

        System.out.println("\nThe index of 'a' in first String is: " + s1.indexOf('a'));
        if (s1.substring(0, 10) == s2.substring(0, 10)) {
            System.out.println("String 1 is SubString of String 2");
        } else
            System.out.println("They are not SubString");

        System.out.println("\nConverting First String to Lower Case : " + s1.toLowerCase());
        System.out.println("Converting Second String to Upper Case : " + s2.toUpperCase());

        String s3 = s1.toLowerCase();

        System.out.println("\nSaved the First String as: " + s3);
        System.out.println("\n\n");
    }
}
