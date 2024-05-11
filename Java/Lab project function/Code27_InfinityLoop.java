
//Infinity loop example
import java.util.Scanner;

public class Code27_InfinityLoop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Tomorrow is your Exam\ntrue or false\n\nans:");
        boolean b = sc.nextBoolean();
        Loop(b);
    }

    public static void Loop(boolean b) {
        if (b == true) {
            int i, j = 0;
            for (i = 0; i <= j; i--) {
                System.out.print("Go to study!!\t");
            }
        } else
            System.out.println("Take a coffee & chill.\nLife is Good");
    }
}
