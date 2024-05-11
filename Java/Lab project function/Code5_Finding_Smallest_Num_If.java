//finding large number using if-else

import java.util.Scanner;

public class Code5_Finding_Smallest_Num_If {
    public static void CompareValue(int num1, int num2, int num3, int num4) {
        if (num1 < num2 && num1 < num3 && num1 < num4) {
            System.out.println("1st number: " + num1 + " is the smallest number.");
        } else if (num2 < num1 && num2 < num3 && num2 < num4) {
            System.out.println("2nd number: " + num2 + " is the smallest number.");
        } else if (num3 < num1 && num3 < num2 && num3 < num4) {
            System.out.println("3rd number: " + num3 + " is the smallest number.");
        } else if (num4 < num1 && num4 < num2 && num4 < num3) {
            System.out.println("4th number: " + num4 + " is the smallest number.");
        }
    }

    public static void main(String[] args) {
        System.out.print("Enter 4 numbers: ");

        Scanner sc = new Scanner(System.in);

        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int num3 = sc.nextInt();
        int num4 = sc.nextInt();

        CompareValue(num1, num2, num3, num4);
    }
}
