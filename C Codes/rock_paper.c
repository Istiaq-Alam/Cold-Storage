//Rock Paper Scissor Game
#include <stdio.h>
int main()
{
    char p1,p2;
    printf("\tLets play rock paper scissor.\n\n");

    printf("Player 1 select your Choice.\nAmong Rock, Paper, Scissor\n");
    printf("Press 'r' for Rock\nPress 'p' for Paper\nPress 's' for Scissor\n");
    scanf("%c",&p1);

    printf("Player 2 select your Choice");
    printf("\nPress 'r' for Rock\nPress 'p' for Paper\nPress 's' for Scissor\n");
    scanf(" %c",&p2);

    switch(p1)
    {
    case 'r':
        (p2=='r')? printf("Game Draw!!") : (p2=='s')? printf("Player 1 Win...!!\n\n") : printf("Player 2 Win...!!\n\n");
    break;
    case 's':
        (p2=='s')? printf("Game Draw!!") : (p2=='p')? printf("Player 1 Win...!!\n\n") : printf("Player 2 Win...!!\n\n");
    break;
    case 'p':
        (p2=='p')? printf("Game Draw!!") : (p2=='r')? printf("Player ! Win...!!\n\n") : printf("Player 2 Win...!!\n\n");
    break;
    default :
        printf("Game Error\n");
    break;
    }
}

