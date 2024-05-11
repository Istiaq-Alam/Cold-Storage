//Conversion of String
public class Code21_Conversion_of_string {
    public static void main(String[] args) {
        String intString = "123";
        int intValue = Integer.parseInt(intString);

        String doubleString = "123.456";
        double doubleValue = Double.parseDouble(doubleString);

        int number = 324432;
        String s = "" + number; // gives "324432"

        System.out.println(intString);
        System.out.println(intValue);
        System.out.println(doubleString);
        System.out.println(doubleValue);
        System.out.println(number);
        System.out.println(s);
    }
}
