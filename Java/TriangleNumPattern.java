//Triangle number pattern
public class TriangleNumPattern {
    public static void main(String[] args) {
        int n = 5, i, j;

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= (2 * i - 1); j++) {

                if (j == 1 || i == n || j == (2 * i - 1))
                    System.out.print(i);
                else
                    System.out.print(" ");

            }
            System.out.println(" ");
        }
    }
}
