//Ambiguous Over Loading Error
public class Code34_AmbiguousOverLoading {
    public static void main(String[] args) {
        System.out.println(Max(1,2));
    }
    public static double Max(int num1, double num2) {
        if(num1>num2)
        return num1;
        else
        return num2;
        
    }
    public static double Max(double num1, int num2) {
        if (num1>num2){
            return num1;
        }
        else 
        return num2;
        
    }
}
