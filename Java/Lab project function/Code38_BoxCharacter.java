//Box Pattern Character
public class Code38_BoxCharacter {

    public static void main(String[] args) {
        char c=65;
        int i=1;
        Pattern(c,i);
    }
    public static void Pattern(char c, int i) {
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
