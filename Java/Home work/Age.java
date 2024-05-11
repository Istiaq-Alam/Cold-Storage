import java.beans.IndexedPropertyChangeEvent;
import java.util.Scanner;

import javax.security.sasl.SaslException;

//Age.java
public class Age {
    public static void main(String[] args) {
        final int MINOR = 21;
        Scanner input = new Scanner(System.in);

        System.out.print("Enter you age: ");
        int age = input.nextInt();
        System.out.println("You entered: " + age);

        if (age < MINOR)
            System.out.println("Youth is a wonderful thing. Enjoy..!!");

        System.out.print("Age is a state of mind.");

    }
}
