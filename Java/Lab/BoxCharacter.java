//Box character pattern
public class BoxCharacter {

    public static void main(String[] args) {
        char c;
        int i;
        for (c = 65; c <= 69; c++) {
            System.out.print(c + " ");
            if (c == 65 || c == 69) {
                for (i = 1; i <= 5; i++) {
                    System.out.print(c + " ");
                }
            } else {
                for (i = 1; i <= 5; i++) {
                    System.out.print("  ");
                }
            }

            System.out.println(c);
        }
    }
}
