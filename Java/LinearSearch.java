//linear search
import java.util.Scanner;
public class LinearSearch {
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your array size:");
        int n = sc.nextInt();
        int [] list = new int[n];
        System.out.println("Enter your array value :");
        for(int j=0; j<n; j++){
            list [j] =sc.nextInt();
        }
        System.out.println("Which number you want to search?:");
        int key = sc.nextInt();
        int s = LS(key,list);
        System.out.println("Your value "+key+" is "+s+" times in this array");
    }
    public static int LS(int key, int[] list){
        int s=0;
        for(int i=0; i<list.length; i++){
            if(key==list[i])
            s=i+1;
        }
    return s;
    }
}