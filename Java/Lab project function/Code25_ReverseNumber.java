
//reverse number
import java.util.Scanner;

public class Code25_ReverseNumber {
    public static void main(String[] args) {
        int number, reverse = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("\n\nEnter a positive integer: ");
        number = sc.nextInt();
        reverse = Reverse(number);
        System.out.println("That number reverse is: " + reverse);
    }

    public static int Reverse(int number) {
        int reverse = 0;
        do {
            int lastDigit = number % 10;
            reverse = (reverse * 10) + lastDigit;
            number = number / 10;
        } while (number > 0);
        return reverse;

    }
}
