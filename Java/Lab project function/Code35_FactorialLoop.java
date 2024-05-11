import java.util.Scanner;

//Factorial using Loop
public class Code35_FactorialLoop {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your number for factorial!: ");
        int number = sc.nextInt();// It is the number to calculate factorial

        Factorial(number);
    }

    public static int Factorial(int number) {
        int fact = 1;
        for (int i = 1; i <= number; i++) {
            fact = fact * i;
        }
        System.out.println("Factorial " + number + "! is: " + fact);
        return fact;
    }
}