
//Number Guessing
import java.util.*;

public class Code12_NumberGuessing {
    public static void main(String[] args) {
        final int MAX = 10;
        Scanner scan = new Scanner(System.in);
        Random generator = new Random();
        int answer = generator.nextInt(MAX) + 1;
        System.out.println("I'm thinking of a number between 1 & and " + MAX + ".");
        System.out.print("Guess what it is: ");
        int guess = scan.nextInt();
        Guess(guess, answer);
    }

    public static void Guess(int guess, int answer) {
        if (guess == answer) {
            System.out.println("You got it! Good guessing!");
        } else {
            System.out.println("That is not correct!");
            System.out.println("The number was " + answer);
        }
    }
}
