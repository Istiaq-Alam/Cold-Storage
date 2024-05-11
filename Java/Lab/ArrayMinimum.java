//Minimum Value using Array

import java.util.Scanner;

public class ArrayMinimum {
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
        int min = array[0];
        for (i = 0; i < n; i++) {
            if (min > array[i])
                min = array[i];
        }
        System.out.println("Minimum Value is : " + min);
    }
}
