
//Age.java
import java.util.Scanner;

public class Code8_Age {
    public static void main(String[] args) {
        final int MINOR = 21;
        Scanner input = new Scanner(System.in);

        System.out.print("Enter you age: ");
        int age = input.nextInt();
        System.out.println("You entered: " + age);
        age(MINOR, age);
    }

    public static void age(int MINOR, int age) {
        if (age < MINOR)
            System.out.println("Youth is a wonderful thing. Enjoy..!!");

        System.out.print("Age is a state of mind.");

    }
}
