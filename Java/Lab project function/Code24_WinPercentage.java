
//Win Percentage
import java.text.NumberFormat;
import java.util.Scanner;

public class Code24_WinPercentage {
    public static void main(String[] args) {
        final int NUM_GAMES = 12;
        int won;
        double ratio = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of games won (0 to" + NUM_GAMES + "): ");
        won = sc.nextInt();
        Percentage(won, ratio, NUM_GAMES);
    }

    public static void Percentage(int won, double ratio, int NUM_GAMES) {
        Scanner sc = new Scanner(System.in);
        while (won < 0 || won > NUM_GAMES) {
            System.out.print("Invalid input.\nPlease reenter:");
            won = sc.nextInt();
        }
        ratio = (double) won / NUM_GAMES;
        NumberFormat fmt = NumberFormat.getPercentInstance();
        System.out.println();
        System.out.println("Winning percentage: " + fmt.format(ratio));
    }
}
