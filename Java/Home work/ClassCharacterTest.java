public class ClassCharacterTest {
    public static void main(String[] args) {
        Character ch1 = new Character('b');
        Character ch2 = new Character('9');

        System.out.println(Character.isLowerCase(ch1));
        System.out.println(Character.isLetterOrDigit(ch1));
        System.out.println(Character.isDigit(ch1));
        System.out.println(Character.isDigit(ch2));
        System.out.println(Character.toUpperCase(ch1));

        char ch3 = 'R';
        char ch4 = '7';
        char ch5 = '*';

        System.out.println(Character.isLowerCase(ch3));
        System.out.println(Character.isLetterOrDigit(ch5));
        System.out.println(Character.isDigit(ch4));
        System.out.println(Character.isDigit(ch5));
        System.out.println(Character.isLowerCase(ch3));

    }
}
