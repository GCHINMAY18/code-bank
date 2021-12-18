/*
#include<stdio.h>
#define A 4
int main()
{
    int i,a[A];
    for ( i = 0; i <A; i++)
    {
        printf("The value of the %d index is \n",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <A; i++)
    {
        printf("the value in the array is:%d\n",a[i]);
    }



    return 0;
}
*/

// code with harry explanation start from here

// #include <stdio.h>
// #define N 4
// #define m 10
// int main()
// {
//     int marks[4][4] = {{2, 4, 56, 784}, {3, 2, 4, 1}};

//     // for (int  i = 0; i < 4; i++)

//     // {
//     //     printf("Entre the value of %d vslue of the array is  \n",i);
//     //     scanf("%d",&marks[i]);
//     // }
//     for (int i = 0; i < 2; i++)

//     {
//         for (int j = 0; j < 4; j++)
//         {
//             /* code */
//           //  printf("Entre the value of %d %d value of the array is %d  \n", i,j, marks[i][j]);
//           printf("%d\t",marks[i][j]);
//         }
//         printf("\n");
//     }

//     // marks[0] = 34;
//     // printf("Marks of student 1is %d\n",marks[0]);

//     return 0;
// }

#include <stdio.h>
#define n 5
#define m 5

int main()
{
    int num[n][m];
    for (int i = 0, j = 0; i < n, j < m; i++, j++)
    {

        printf("Entre the value of %d  value of the row and column of the array \n", i);
        scanf("%d", &num[i]);
        scanf("%d", &num[j]);
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\n%d\t", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}
