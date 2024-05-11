//string Methods
public class Code19_StringMethods {
    public static void main(String[] args) {
        String s1 = "Welcome";
        // String s2 = new String(char[]);
        String s2 = "    Hello!      ";
        char ch = s1.charAt(0);
        int length = s1.length();
        int index = s1.indexOf(ch);
        int inx = s1.lastIndexOf(ch);
        boolean b = s1.equals(s2);
        boolean c = s1.equalsIgnoreCase(s2);
        boolean d = s1.startsWith(s2);
        boolean e = s1.endsWith(s2);

        String s = s1.toUpperCase();
        String t = s1.trim();

        printer(s1, s2, s2, index, inx, b, c, d, e, s, t);
    }

    public static void printer(String s1, String s2, String ch, int index, int inx, boolean b, boolean c, boolean d,
            boolean e, String s, String t) {
        System.out.println(s1);
        System.out.println(s2);
        System.out.println(ch);
        System.out.println(index);
        System.out.println(inx);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
        System.out.println(e);
        System.out.println(s);
        System.out.println(t);
    }
}
