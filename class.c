#include <stdio.h>

// int main()
// {
//     int num[10],max=0,n,i;
//     printf("entre the no of elements \n");
//     scanf("%d",&n);
//     printf("entre the elements\n");
//     for ( i = 0; i <n; i++)
//     {
//         scanf("%d",&num[i]);
//     }
//     for ( i = 0; i <n; i++)
//     {
//         if (max<num[i])
//         {
//             max=num[i];
//         }

//     }
//     printf("Largest element is %d",max);

//     return 0;
// }

// int main()
// {
//     int num[10], n, pos, change;
//     printf("Entre the size of array you want\n");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("Entre the %d value of the array\n", i);
//         scanf("%d", &num[i]);
//     }

//     printf("\nThe value of the array are \n");
//     for (int i = 0; i < n; i++)
//     {

//         printf("%d\n", num[i]);
//     }

//     printf("Entre the position where you want to insert a new number\n");
//     scanf("%d", &pos);
//     printf("\nEntre the number\n");
//     scanf("%d", &change);

//     for (int i = n - 1; i >= pos - 1; i--)
//     {
//         num[i + 1] = num[i];
//     }
//     num[pos - 1] = change;

//     printf("The new value of array is\n ");
//     for (int i = 0; i <= n; i++)
//     {
//         printf("%d\n", num[i]);
//     }

//     return 0;
// }

// int main()
// {
//     int a[10], b[10], c[10], n, m;
//     printf("Entre the number of element  of the ist  array to be added\n ");
//     scanf("%d", &n);
//     printf("Entre the number of element  of the 2nd array to be added\n ");
//     scanf("%d", &m);

//     if (m == n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             printf("entre the %d value of 1st array\n", i);
//             scanf("%d", &a[i]);
//         }
//         for (int i = 0; i < m; i++)
//         {
//             printf("entre the %d value of 2nd array\n", i);
//             scanf("%d", &b[i]);
//         }
//         printf("The addition of two array is \n");
//         for (int i = 0; i < n; i++)
//         {
//             c[i] = a[i] + b[i];
//             printf("%d\n", c[i]);
//         }
//     }
//     else
//     {
//         printf("Entre a valid size of both the array to be added ");
//     }

//     return 0;
// }

int main()
{
    int num[10],size,n;
    printf("Entre the size of the array\n");
    scanf("%d",&size);

    printf("\nEntre the array elements\n");
    for (int i = 0; i <size; i++)
    {
        scanf("%d",&num[i]);
        printf("\n");
    }
int search;
    printf("Entre the  number you want to search for\n ");
scanf("%d",&search);
    
    for (int i = 1; i <=size; i++)
    {
        /* code */
    }
    
    

    return 0;
}