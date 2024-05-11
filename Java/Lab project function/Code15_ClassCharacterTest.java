
//Class character test
import java.util.Scanner;

public class Code15_ClassCharacterTest {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter any two Characters: ");
        Character ch1 = input.next().charAt(0);
        Character ch2 = input.next().charAt(0);
        testing1(ch1, ch2);

        char ch3 = 'R';
        char ch4 = '7';
        char ch5 = '*';

        testing2(ch3, ch4, ch5);
    }

    public static void testing1(char ch1, char ch2) {
        System.out.println(Character.isLowerCase(ch1));
        System.out.println(Character.isLetterOrDigit(ch1));
        System.out.println(Character.isDigit(ch1));
        System.out.println(Character.isDigit(ch2));
        System.out.println(Character.toUpperCase(ch1));
    }

    public static void testing2(char ch3, char ch4, char ch5) {
        System.out.println(Character.isLowerCase(ch3));
        System.out.println(Character.isLetterOrDigit(ch5));
        System.out.println(Character.isDigit(ch4));
        System.out.println(Character.isDigit(ch5));
        System.out.println(Character.isLowerCase(ch3));
    }
}
