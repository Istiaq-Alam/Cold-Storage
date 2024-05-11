//finding large number using if-else

import java.util.Scanner;

public class Finding_Large_Num_If {

    public static void main(String[] args) {
        System.out.print("Enter 4 numbers: ");

        Scanner sc = new Scanner(System.in);

        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int num3 = sc.nextInt();
        int num4 = sc.nextInt();

        if (num1 > num2 && num1 > num3 && num1 > num4) {
            System.out.println("1st number: " + num1 + " is the largest number.");
        } else if (num2 > num1 && num2 > num3 && num2 > num4) {
            System.out.println("2nd number: " + num2 + " is the largest number.");
        } else if (num3 > num1 && num3 > num2 && num3 > num4) {
            System.out.println("3rd number: " + num3 + " is the largest number.");
        } else if (num4 > num1 && num4 > num2 && num4 > num3) {
            System.out.println("4th number: " + num4 + " is the largest number.");
        }
    }
}
