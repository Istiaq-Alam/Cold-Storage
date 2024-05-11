
//random character.java
import java.util.Scanner;

public class RandomCharacter {
    public static void main(String[] args) {
        System.out.println("\n\nEnter The range of character:");
        Scanner sc = new Scanner(System.in);
        char ch1 = sc.next().charAt(0);
        char ch2 = sc.next().charAt(0);
        System.out.print("A Random Character between " + ch1 + " & " + ch2 + " is ");
        char r = (char) (ch1 + Math.random() * (ch2 - ch1 + 1));
        System.out.print(r);

    }
}
