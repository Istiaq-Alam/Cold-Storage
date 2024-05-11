
//Convert time Second to minutes
import java.util.Scanner;

public class Code6_DisplayTime {
    /**
     * Display time
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // Prompt the user for input
        System.out.print("Enter an integer for seconds: ");
        int seconds = input.nextInt();
        int minutes = minusHours(seconds);
        int hour = Hour(seconds);
        int remain = Remain(seconds);

        System.out.println(seconds + " seconds is " + hour +
                " hours and " + minutes + " minutes & " + remain + " seconds");
    }

    public static int minusHours(int seconds) {
        int minutes = seconds / 60; // Find minutes in seconds
        minutes = minutes % 60;
        return minutes;
    }

    public static int Hour(int seconds) {
        int minutes = seconds / 60;
        int hour = minutes / 60;
        return hour;

    }

    public static int Remain(int seconds) {
        int remain = seconds % 60;
        return remain;
    }

}