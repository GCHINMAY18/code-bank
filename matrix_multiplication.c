#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1, r2, c1, c2;
    int mat1[10][10];
    int mat2[10][10];
    int multi[10][10];

    printf("\nEnter the number of rows of your 1st matrices:\n");
    scanf("%d", &r1);
    printf("Enter the number of columns of your 1st matrices:\n");
    scanf("%d", &c1);

    printf("Enter the number of rows of your 2nd matrices:\n");
    scanf("%d", &r2);
    printf("Enter the number of columns of your 2nd matrices:\n");
    scanf("%d", &c2);
    getchar();

    // making array now

    if (c1 != r2)
    {
        printf("\nMultiplication not possible because:\n");
        printf("The number of columns of 1st matrices is not equal to the number of rows of 2nd matrices thats why multiplication cannot be done.");

        exit(0);
    }

    // inputing matrices 1
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    // inputing matrices 2
    
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d",&mat2[i][j]);
        }

    }

    return 0;
}
