
//Comparing string type
import java.util.Scanner;

public class Code20_ComparingString {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.print("Enter any Two String:");
        String s1 = in.next();
        String s2 = in.next();

        Compare(s1, s2);
    }

    public static void Compare(String s1, String s2) {
        boolean b = s1.equals(s2);
        boolean c = s1.equalsIgnoreCase(s2);
        boolean d = s1.startsWith(s2);
        boolean e = s1.endsWith(s2);
        int a = s1.compareTo(s2);
        int f = s1.compareToIgnoreCase(s2);
        boolean g = s1.startsWith(s2);
        boolean h = s1.endsWith(s2);

        System.out.println(a + "\n" + b + "\n" + c + "\n" + d + "\n" + e + "\n" + f + "\n" + g + "\n" + h);
    }
}
