
//Triangle star Pattern
import java.util.Scanner;

public class Code29_TrinaglePattern {
    public static void main(String[] args) {
        int i = 1, j = 1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the line number: ");
        int n = sc.nextInt();
        Triangle(n, i, j);
        InverseTriangle(n, i, j);
    }

    public static void Triangle(int n, int i, int j) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }

    public static void InverseTriangle(int n, int i, int j) {
        for (i = n - 1; i >= 0; i--) {
            for (j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}
