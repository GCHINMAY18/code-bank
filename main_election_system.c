#include <stdio.h>
#include <stdlib.h>

#define candidate1 "Narendra modi"
#define candidate2 "Rahul Gandhi"
#define candidate3 "Kamla harris"
#define candidate4 "Akhilesh"

int count1 = 0, count2 = 0, count3 = 0, count4 = 0, ncount = 0;

void castvote()
{
    int vote;

    printf("These are the candidates for the election choose them from wisely:\n");
    printf("1.%s\n", candidate1);
    printf("2.%s\n", candidate2);
    printf("3.%s\n", candidate3);
    printf("4.%s\n", candidate4);
    printf("5.%s\n", "NOTA");

    printf("\nEnter your choice:");
    scanf("%d", &vote);

    switch (vote)
    {
    case 1:
        count1++;
        break;
    case 2:
        count2++;
        break;
    case 3:
        count3++;
        break;
    case 4:
        count4++;
        break;
    case 5:
        ncount++;
        break;

    default:
        printf("\nEnter valid choice !!! Try again\n");
        getchar();
        break;
    }

    printf("\n***** Thanks for your valueable vote. *****\n\n");
}

void votecount()
{
    printf("\n\nThe vote count till now is below\n");
    printf("1.%s : %d\n", candidate1, count1);
    printf("2.%s : %d\n", candidate2, count2);
    printf("3.%s : %d\n", candidate3, count3);
    printf("4.%s : %d\n", candidate4, count4);
    printf("5.%s : %d\n", "NOTA", ncount);
}

void leadingcandidate()
{

    printf("\nThe leading candidate is below:\n");

    if (count1 > count2 && count1 > count3 && count1 > count4)
    {
        printf("\n%s is leading.\n\n ", candidate1);
    }
    else if (count2 > count1 && count2 > count3 && count2 > count4)
    {
        printf("\n%s is leading.\n\n ", candidate2);
    }
    else if (count3 > count1 && count3 > count2 && count3 > count4)
    {
        printf("\n%s is leading.\n\n", candidate3);
    }
    else if (count4 > count1 && count4 > count2 && count4 > count3)
    {
        printf("\n%s is leading.\n\n", candidate4);
    }
    else
    {
        printf("\nNo one is leading.\n");
    }
}

int main()
{
    int i, choice;
    do
    {
        printf("***** Welcome to the election system *****\n");
        printf("\n 1.Cast the vote");
        printf("\n 2.Find vote count");
        printf("\n 3. Find leading candidate");
        printf("\n 0. Exit");

        printf("\nSelect your choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            castvote();
            break;
        case 2:
            votecount();
            break;
        case 3:
            leadingcandidate();
            break;

        default:
            printf("\nEnter valid choice\n");
            break;
        }

    } while (choice != 0);

    getchar();

    return 0;
}
