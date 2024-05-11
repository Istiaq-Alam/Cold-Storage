
//Sentinel Value Summation
import java.util.Scanner;

public class Code23_SentanelValueSummation {

    public static void main(String[] args) {
        int value;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an Integer (0 To Quit) : ");
        value = sc.nextInt();

        SentanelValue(value);
    }

    public static void SentanelValue(int value) {
        int sum = 0, count = 0;
        while (value != 0) {
            count = count + 1;
            sum = sum + value;
            System.out.println("The sum is so far is " + sum);
            System.out.println("Enter the Integer (0 To Quit) : ");
            Scanner s = new Scanner(System.in);
            value = s.nextInt();
        }
        if (count == 0) {
            System.out.println("No Values were enterd");
        } else {
            System.out.println("Sum of all values= " + sum);
        }

    }
}
