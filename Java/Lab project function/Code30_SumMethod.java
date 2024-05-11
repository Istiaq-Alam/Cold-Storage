//Sum Method
public class Code30_SumMethod {
    public static void main(String[] args) {
        int result = sum(1, 10);
        System.out.println("Sum from 1 to 10 is:\t" + result);
    }

    public static int sum(int num1, int num2) {
        int sum = 0;
        for (int i = num1; i <= num2; i++) {
            sum = sum + i;
        }
        return sum;
    }
}
