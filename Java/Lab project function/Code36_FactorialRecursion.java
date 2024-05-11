// Factorial Using Recursion
import java.util.Scanner;
public class Code36_FactorialRecursion {
    public static int factorial(int n) {
        if (n == 0)
            return 1;
        else
            return (n * factorial(n - 1));
    }

    public static void main(String args[]) {
        int i, fact = 1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your number for factorial!: ");
        int number = sc.nextInt();// It is the number to calculate factorial
        fact = factorial(number);
        System.out.println("Factorial " + number + "! is: " + fact);
    }
}
