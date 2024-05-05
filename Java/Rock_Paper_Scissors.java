package Projects;

import java.util.Scanner;

public class Rock_Paper_Scissors {

    public static void main(String[] args) {
        int a = 1, b = 2, c = 3, sp = 0;
        Scanner sc = new Scanner(System.in);
        char t = 'y';
        char y = 'y';
        while (t == y) {
            System.out.println("\nLets play Rock! Paper! Scissors!");
            int bot = BotPlayer(a, b, c);
            System.out.println("1.Rock\n2.Paper\n3.Scissors");
            System.out.print("Enter Your Choice : ");
            int player = sc.nextInt();
            sp = Game(player, bot, sp);
            System.out.print("\nWant to play again?? y/n    :   ");
            y = sc.next().charAt(0);
        }
        System.out.println("\n\nGame Over!!");
        System.out.println("Your Score is : " + sp);
    }

    public static int BotPlayer(int a, int b, int c) {
        int bot = 1 + (int) (Math.random() * 3);
        // System.out.println(bot);
        return bot;
    }

    public static int Game(int player, int bot, int sp) {
        if (player == 1 && bot == 1) {
            System.out.println("You Choose Rock!!\nAnd I'm Also choose Rock!\nSo Its Draw!!");
        }

        else if (player == 2 && bot == 2)
            System.out.println("You Choose Paper!!\nAnd I'm Also choose Paper!\nSo Its Draw!!");

        else if (player == 3 && bot == 3)
            System.out.println("You Choose Rock!!\nAnd I'm Also choose Rock!\nSo Its Draw!!");

        else if (player == 1 && bot == 2) {
            System.out.println("You Choose Rock!!\nAnd I was choose Paper!\nSo I Win\nYou loose!!!");
        }

        else if (player == 1 && bot == 3) {
            System.out.println("You Choose Rock!!\nAnd I was choose Scissor!\nSo You Win!!\nI loose!!");
            sp++;
        }

        else if (player == 2 && bot == 3) {
            System.out.println("You Choose Paper!!\nAnd I was choose Scissor!\nSo I Win!!\nYou loose!!");
        }

        else if (player == 2 && bot == 1) {
            System.out.println("You Choose Paper!!\nAnd I was choose Rock!\nSo You Win!!\nI loose");
            sp++;
        }

        else if (player == 3 && bot == 1) {
            System.out.println("You Choose Scissor!!\nAnd I was choose Rock!\nSo I Win!!\nYou loose!!");
        }

        else if (player == 3 && bot == 2) {
            System.out.println("You Choose Scissor!!\nAnd I was choose Paper!\nSo You Win!!\nI loose!!");
            sp++;
        }

        else
            System.out.println("Why are you gay...??\npressing invalid value!\nseems like you are gay!");
        return sp;

    }

}
