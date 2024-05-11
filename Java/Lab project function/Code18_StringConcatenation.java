//String Concatenation
public class Code18_StringConcatenation {
    public static void main(String[] args) {
        // three String are Concatenated
        String message = "Welcome" + " to" + " java.";

        // String Chapter is Concatenated with number 2
        String s = "Chapter " + 2; // s become chapter 2

        // string Supplement is concatenated with character B
        String s1 = "Supplement" + 'B'; // s1 becomes SupplementB;

        printer(message, s, s1);
    }

    public static void printer(String message, String s, String s1) {
        System.out.println(message);
        System.out.println(s);
        System.out.println(s1);
    }
}
