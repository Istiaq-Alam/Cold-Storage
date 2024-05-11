public class Code33_TestPassByValue {
    public static void main(String[] args) {
        int num1 =1;
        int num2 =2;
        System.out.println("Before calling swap:\nNum1 = "+num1+" Num2 = "+num2+"\n");
        swap(num1,num2);
        System.out.println("After calling swap:\nNum1 = "+num1+" Num2 = "+num2+"\n");
    }
    public static void swap(int n1, int n2){
        System.out.println("Inside swap, before Swapping:\nn1 = "+n1+" n2 = "+n2+"\n");
        int temp = n1;
        n1 =n2;
        n2 =temp;
        System.out.println("Inside swap, after swapping:\nn1 = "+n1+" n2 = "+n2+"\n");
    }
}
 