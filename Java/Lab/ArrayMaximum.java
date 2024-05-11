//Maximum Value using

import java.util.Scanner;

public class ArrayMaximum {
    public static void main(String[] args) {
        System.out.print("Enter the Size of Array : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] array = new int[n];
        int i;
        System.out.println("Enter the values of Array :");
        for (i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
        int max = array[0];
        for (i = 0; i < n; i++) {
            if (max < array[i])
                max = array[i];
        }
        System.out.println("Maximum Value is : " + max);
    }
}
