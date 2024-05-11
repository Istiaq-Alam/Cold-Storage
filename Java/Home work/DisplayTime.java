
//Convert time Second to minutes
import java.util.Scanner;

public class DisplayTime {
    /**
     * Display time
     */
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            // Prompt the user for input
            System.out.print("Enter an integer for seconds: ");
            int seconds = input.nextInt();
            int minutes = seconds / 60; // Find minutes in seconds
            int hour = minutes / 60;
            minutes = minutes % 60;
            int remainingSeconds = seconds % 60; // Seconds remaining
            System.out.println(seconds + " seconds is " + hour +
                    " hours and " + minutes + " minutes & " + remainingSeconds + " seconds");
        }
    }
}
