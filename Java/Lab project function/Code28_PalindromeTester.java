
//Palindrome Testing
import java.util.Scanner;
import javax.swing.plaf.synth.SynthSplitPaneUI;

public class Code28_PalindromeTester {
    public static void Palindrome(String another) {
        int left, right;
        Scanner sc = new Scanner(System.in);
        while (another.equalsIgnoreCase("y")) {
            System.out.print("Enter a potential palidrome string : ");
            String str = sc.nextLine();
            left = 0;
            right = str.length() - 1;
            while (str.charAt(left) == str.charAt(right) && left < right) {
                left = left + 1;
                right = right - 1;
            }
            System.out.println();
            if (left < right) {
                System.out.println("The String are not a Palindrome");
            } else
                System.out.println("That String is Palindrome.\n");

            System.out.println("Test palindrome again..??");
            another = sc.nextLine();
        }
    }

    public static void main(String[] args) {
        String another = "y";
        Palindrome(another);
    }
}
