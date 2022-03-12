#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1, c1;
    printf("\nEnter the number of rows of your 1st matrices:\n");
    scanf("%d", &r1);
    printf("Enter the number of columns of your 1st matrices:\n");
    scanf("%d", &c1);

    // making dynamic 2d array
    int **mat;

    mat = (int **)malloc(r1 * sizeof(int));
    for (int i = 0; i < c1; i++)
    {
        mat[i] = (int *)malloc(c1 * sizeof(int));
    }
    

    // now inputing array elements
    for (int i = 0; i < r1; i++)
    {
        for (int i = 0; i < c1; i++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n");

    // now printing 2d array
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d", mat[i][j]);
        }
    }

    return 0;
}
