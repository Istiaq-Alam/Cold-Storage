
//Grade Point CGPA
import java.util.Scanner;

public class Code1_GradeCGPA {
    public static int TotalMark(int mat, int phy, int chem, int eng, int cse) {
        int total = mat + phy + chem + eng + cse;
        return total;
    }

    public static int Average(int total_mark) {
        int average = total_mark / 5;
        return average;
    }

    public static void main(String[] args) {
        System.out.println("\n");
        Scanner input = new Scanner(System.in);

        System.out.print("Enter your mark in Mathematics:");
        int mat = input.nextInt();

        System.out.print("Enter your mark in Physics:");
        int phy = input.nextInt();

        System.out.print("Enter your mark in Chemistry:");
        int chem = input.nextInt();

        System.out.print("Enter your mark in English:");
        int eng = input.nextInt();

        System.out.print("Enter your mark in CSE:");
        int cse = input.nextInt();

        int total_mark = TotalMark(mat, phy, chem, eng, cse);

        int average = Average(total_mark);

        System.out.println("\nYour Average Mark is: " + average);
        int mark = average;
        String grade = null;
        double cgpa = 0.00;

        switch ((mark > 79) ? 1 : 0) {
            case 1:
                grade = "A+";
                cgpa = 4.00;
                break;
            case 0:
                switch ((80 > mark && mark > 74) ? 1 : 0) {
                    case 1:
                        grade = "A";
                        cgpa = 3.75;
                        break;
                    case 0:
                        switch ((75 > mark && mark > 69) ? 1 : 0) {
                            case 1:
                                grade = "A-";
                                cgpa = 3.50;
                                break;
                            case 0: {
                                switch ((70 > mark && mark > 64) ? 1 : 0) {
                                    case 1:
                                        grade = "B+";
                                        cgpa = 3.25;
                                        break;
                                    case 0:
                                        switch ((65 > mark && mark > 59) ? 1 : 0) {
                                            case 1:
                                                grade = "B";
                                                cgpa = 3.00;
                                                break;
                                            case 0:
                                                switch ((60 > mark && mark > 54) ? 1 : 0) {
                                                    case 1:
                                                        grade = "B-";
                                                        cgpa = 2.75;
                                                        break;
                                                    case 0:
                                                        switch ((55 > mark && mark > 49) ? 1 : 0) {
                                                            case 1:
                                                                grade = "C+";
                                                                cgpa = 2.50;
                                                                break;
                                                            case 0:
                                                                switch ((50 > mark && mark > 44) ? 1 : 0) {
                                                                    case 1:
                                                                        grade = "D";
                                                                        cgpa = 2.00;
                                                                        break;
                                                                    case 0:
                                                                        grade = "F";
                                                                        cgpa = 0.00;
                                                                        break;
                                                                }

                                                                break;
                                                        }

                                                        break;
                                                }

                                                break;
                                        }

                                        break;
                                }

                                break;

                            }

                        }

                }
        }
        System.out.println("Your Grade is : " + grade + "\nYour CGPA is : " + cgpa);
    }

}