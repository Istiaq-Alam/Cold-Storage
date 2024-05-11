//Calculate the cube of each index value of a user array & save it in other array
import java.util.Scanner;
public class CubeArrayStoring {
    public static void main(String [] args){
        System.out.print("Enter the size of you array: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] arr = new int [n];
        for(int i=0; i<n; i++){
            System.out.print("Array["+i+"] = ");
            arr[i]=sc.nextInt();
        }
        System.out.println("\n\tCube of array: ");
        int [] ans = new int [n]; 
        int i=0;
        for(int cube : arr){
            cube=cube*cube*cube;
                ans[i] = cube ;
                i++;
        }
        for(i=0; i<n; i++){
            System.out.println("Cube Array["+i+"] = "+ans[i]);
        }   
    }    
}


