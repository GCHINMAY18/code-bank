// Users can enter choice as per preference and can calculate total votes and leading candidate.
// It is a very simple C project and very easy to understand. Useful for small scale election projects.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int BJP = 0, INC = 0, AAP = 0, SP = 0, NOTA = 0;

    printf("\n****** We welcome you for the election ******\n\n");
    printf("Ther are 4 parties contesting in todays election.\n1.BJP\n2.INC\n3.AAP\n4.sp");
    printf("\nVote the parties according to there number\n5.For NOTA\n ");
    for (int i = 0; i < 10; i++)
    {
        printf("\nYou are %d person to vote in todays election.\n", i + 1);
        printf("Now choose from 1-5\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            BJP++;

            break;
        case 2:
            INC++;

            break;
        case 3:
            AAP++;

            break;
        case 4:
            SP++;

            break;
        case 5:
            NOTA++;
            break;

        default:
            printf("Enter a valid choice\n");
            break;
        }
    }

    printf("****** Election Ended ******\n");

    printf("BJP got: %d\n", BJP);
    printf("INC got: %d\n", INC);
    printf("AAP got: %d\n", AAP);
    printf("SP got: %d\n", SP);
    printf("The number of person who didnt choose anyone are :%d\n", NOTA);

    if (BJP > INC && BJP > AAP && BJP > SP && BJP > NOTA)
    {
        printf("\n\n***** BJP won the ellection.*****");
    }
    else if ((INC > BJP) && (INC > AAP) && (INC > SP) && (INC > NOTA))
    {
        printf("\n\n***** INC won the ellection.*****");
    }
    else if ((AAP > BJP) && (AAP > INC) && (AAP > SP) && (AAP > NOTA))
    {
        printf("\n\n***** AAP won the ellection.*****");
    }
    else if ((SP > BJP) && (SP > INC) && (SP > AAP) && (SP > NOTA))
    {
        printf("\n\n***** SP won the ellection.*****");
    }
    else
    {
        printf("\n\nNo one Won the election.");
    }

    return 0;
}
