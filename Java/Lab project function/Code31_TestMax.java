// max number function testing
public class Code31_TestMax {
    public static void main(String[] args) {
        int i = 5;
        int j = 2;
        int k = max(i, j);
        System.out.println("The maximum of " + i + " & " + j + " is " + k);
    }

    public static int max(int num1, int num2) {
        int result;
        if (num1 > num2) {
            result = num1;
        } else
            result = num2;

        return result;
    }
}
