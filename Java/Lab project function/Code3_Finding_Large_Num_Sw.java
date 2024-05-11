//finding large number using switch-case 

import java.util.Scanner;

public class Code3_Finding_Large_Num_Sw {

    public static void CompareValue(int num1, int num2, int num3, int num4) {
        switch ((num1 > num2 && num1 > num3 && num1 > num4) ? 1 : 0) {
            case 1:
                System.out.println("1st number: " + num1 + " is the largest number.");
                break;
            case 0:
                switch ((num2 > num3 && num2 > num4 && num2 > num1) ? 1 : 0) {
                    case 1:
                        System.out.println("2nd number: " + num2 + " is the largest number.");
                        break;
                    case 0:
                        switch ((num3 > num2 && num3 > num4 && num3 > num1) ? 1 : 0) {
                            case 1:
                                System.out.println("3rd number: " + num3 + " is the largest number.");
                                break;
                            case 0:
                                switch ((num4 > num1 && num4 > num2 && num4 > num3) ? 1 : 0) {
                                    case 1:
                                        System.out.println("4th number: " + num4 + " is the largest number.");
                                        break;
                                    case 0:
                                        System.out.println("They are equal.");
                                        break;
                                }
                                break;
                        }
                        break;
                }
                break;
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
