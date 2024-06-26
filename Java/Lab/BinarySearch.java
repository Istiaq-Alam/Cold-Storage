import java.util.Scanner;
public class BinarySearch {
    public static void main(String[] args) {
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
        int s = BS(key,list);
        System.out.println("Your value "+key+" is "+s+" times in this array");
    }
    public static int BS(int key, int[] list) {
        int low =0;
        int high = list.length-1;

        while (high>=low){
            int mid = (low + high) / 2;

            if(key < list[mid])
            {high = mid -1 ;}

            else if(key == list[mid])
            return mid;
            
            else
            low = mid +1;
        }
        return -1 -low;
    }
}
