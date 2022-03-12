// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genraterandom(int n)
{
    srand(time(NULL));

    int random;
    return rand() % n;
}

int greater(char a, char b)
{
    if ((a) == (b))
    {
        return -1;
    }

    else if ((a == 'r') && (b == 's'))
    {
        return 1;
    }
    else if ((a == 'p') && (b == 'r'))
    {
        return 1;
    }
    else if ((b == 'r') && (a == 's'))
        {
            return 0;
        }
    else if ((a == 's') && (b == 'p'))
    {
        return 1;
    }
    else if ((b == 's') && (a == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerpoint = 0, comppoint = 0, temp;
    char playermove, compmove;
    char rps[] = {'r', 'p', 's'};

    char *name = NULL;
    name = (char *)malloc(10 * sizeof(char));

    printf("\n\n********** Welcome to the rock, paper,scissors Game **********\n");
    printf("Enter your name first:\n");
    scanf("%s", name);

    for (int i = 0; i < 3; i++)
    {
        // taking input from player
        printf("\n%s's turn:\n");
        printf("\n%s now choose from:\n1.rock\n2.paper\n3.scissors\n");
        scanf("%d", &temp);
        playermove = rps[temp - 1];                            // we did this because {r,p,s} have index values of 0,1,2 and temp is 1,2,3 so thats why [temp-1]


        printf("Player you choose:%c\n", playermove);


        // generating computers move
        printf("\nComputer's turn\n");
        temp = genraterandom(3) + 1;                          // because we want 3 random number so in genraterandom() form 0,1,2 random number so to make 1,2,3 (- 1)
        compmove = rps[temp - 1];


        printf("Computer choose:%c\n", compmove);


        if (greater(playermove, compmove) == 1)
        {
            playerpoint += 1;
            printf("You got it!\n\n");
        }
        else if (greater(playermove, compmove) == -1)
        {
            playerpoint += 0;
            comppoint += 0;
            printf(" its a draw!\n\n");
        }
        else
        {
            comppoint += 1;
            printf("Computer got it!\n\n");
        }

        printf("%s score:%d\nComputer score:%d\n", name, playerpoint, comppoint);
    }

    printf("\n********** Result **********\n");
    printf("%s your Points is:%d\n", name, playerpoint);
    printf("Computer Points is:%d\n", comppoint);

    if (playerpoint > comppoint)
    {
        printf("\n%s WON\nComputer LOSE", name);
    }
    else if (comppoint > playerpoint)
    {
        printf("\nComputer WON\n%s LOSE", name);
    }
    else
    {
        printf("\nThe match is drawed no one won");
    }

    free(name);

    return 0;
}
