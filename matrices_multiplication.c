#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat1[10][10], mat2[10][10], multi[10][10];
    int r1, r2, c1, c2;

    printf("Enter the number of rows in matrices 1:\n");
    scanf("%d", &r1);
    printf("Enter the number of columns in matrices 1:\n");
    scanf("%d", &c1);
    printf("Enter the number of rows in matrices 2:\n");
    scanf("%d", &r2);
    printf("Enter the number of columns in matrices 2:\n");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("\nMultiplication cannot be done because;\n");
        printf("The number of columns of matrix 1 is not equal to number of rows of matrix 2\n");
        exit(0);
    }

    // inputing matrices 1
    printf("\nEnter matrices 1:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
        //printf("\n");
    }

    // inputing matrices 2

    printf("\nEnter matrices 2:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
        //printf("\n");
    }

    printf("Matrices 1:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%4d", mat1[i][j]);
        }
        printf("\n");
    }

    printf("Matrices 2:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%4d", mat2[i][j]);
        }
        printf("\n");
    }

    // now multiplication part (calculating the  resulting matrices)

    for (int i = 0; i < r1; i++)          //if matrix 1 is of order (m x n) and matrix 2 is of order (n x p) then multiplied matrix will of order (m x p)
    {                                       //   here mat1 of order (r1 x c1) and mat2 of order (r2 x c2) then multiplied matrix will of order (r1 x c2)
        for (int j = 0; j < c2; j++)             //thats why 1st loop till (r1) 2nd loop till (c2)            
        {
            multi[i][j] = 0;

                for (int k = 0; k < r2; k++)
            {
                multi[i][j] = multi[i][j] + (mat1[i][k] * mat2[k][j]);
            }
        }
    }

    // now printing the resulting multiplied matrices

    printf("\nMultiplied matrices is:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%4d", multi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
