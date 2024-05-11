
//Compareing Character Types
import java.util.Scanner;

public class CompareingCharType {
    public static void main(String[] args) {
        System.out.println("Comparing Character Type\n Upper case or Lower case");
        System.out.print("Enter Any Character: ");
        Scanner sc = new Scanner(System.in);
        char ch = sc.next().charAt(0);

        if (ch >= 'A' && ch <= 'Z')
            System.out.println(ch + " is an uppercase letter");
        else if (ch >= 'a' && ch <= 'z')
            System.out.println(ch + " is a lowercase letter");
        else if (ch >= '0' && ch <= '9')
            System.out.println(ch + " is a numeric Character");

    }
}
