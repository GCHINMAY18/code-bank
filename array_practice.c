// inserting a value in the array
/*

*/

// remove duplicate items in the array
//  #include<stdio.h>
//  #define n 50
//  int main()
//  {
//      int num[n],size;
//      printf("Entre the size of the array \n");
//      scanf("%d",&size);

//     for (int i = 1; i <= size ; i++)
//     {
//          printf("entre the %d value of the array\n", i);
//         scanf("%d", &num[i]);
//     }

//     return 1;
// =}

// #include<stdio.h>

// int main()
// {

//     int num[20],n,i,pos, change;
//     printf("Entre the no. of element in the array\n");
//     scanf("%d",&n);

//     for (i = 1; i <=n; i++)
//     {
//         printf("Entre the %d value of the array\n",i);
//         scanf("%d",&num[i]);
//     }
//     printf("The value of the array are\n");

//     for ( i = 1; i <=n; i++)
//     {
//         printf("%d\n",num[i]);
//     }

//     printf("Entre the position where you want to insert a new number\n");
//     scanf("%d",&pos);
//     printf("\nEntre the number\n");
//     scanf("%d",&change);

//     for ( i = n-1; i >= pos-1; i--)
//     {
//         num[i+1]=num[i];
//     }
//     num[pos-1]=change;

//     printf("The new value of array is\n ");
//     for ( i = 1; i <= n; i++)
//     {
//         printf("%d\n",num[i]);
//     }

//     return 1;
// =}

// #include<stdio.h>

// int main()
// {
//     int   num[10], n;

//      printf("Entre the size of array you want\n");
//     scanf("%d",&n);

//    for (int i = 1; i <= n; i++)
//    {
//        printf("Entre the %d value of the array\n",i);
//        scanf("%d",&num[i]);
//    }

//    printf("\nThe value of the array are \n");
//    for (int i = 1; i <= n; i++)
//    {

//        printf("%d\n",num[i]);
//    }
//    printf("\nReverse of the array is \n");
//    for (int i = n-1; i>=1; i--=)
//    {

//         printf("%d\n",num[i]);
//    }

//     return 1;
// =}

// Adding  2 array
/*
#include <stdio.h>
#define z 10
int main()
{
    int a[z], b[z], c[z], n, m;

    printf("Entre the size of the 1st array you want\n");
    scanf("%d", &n);
    printf("Entre the size of the 2nd array you want\n");
    scanf("%d", &m);

    if (n == m)
    {
        printf("Entre the elements of the 1st array\n");
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Entre the elements of the 2st array\n");
        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &b[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            c[i] = a[i] + b[i];
        }
        printf("\nThe array  we got after adding  the 2 array is \n");
        for (int i = 1; i <= m; i++)
        {
            printf("%d\n", c[i]);
        }
    }

    else
    {
        printf("The size of the array should be same for adding ");
    }

    return 1;
}
*/

// searching a number in an array
/*
#include <stdio.h>

int main()
{
    int arr[10], size, search, found, i;
    printf("Entre the size of the array\n");
    scanf("%d", &size);
    printf("Entre the elements of the array\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Entre the element to be searched in the array \n");
    scanf("%d", &search);

    int actual = size - 1;

    printf("The array have index from 0 to %d\n", actual);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            printf("\n%d is at the %d index of the array\n", search, i);
            found = 1;
            continue;
        }
    }

    if (found != 1)
    {
        printf("\n%d is not found in the array", search);
    }

    return 0;
}
*/

// deleat all the duplicate items of an array
// #include <stdio.h>

// int main()
// {
//     int arr[10], size;
//     printf("Entre the size of an array:");
//     scanf("%d", &size);
//     printf("Entre the elements of the array\n");
//     for (int i = 1; i <= size; i++)
//     {
//         scanf("%d", arr[i]);
//     }

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 for (int k = j; k < size ; k++)
//                 {
//                     arr[k] = arr[k + 1];
//                 }
//                 j--;
//                 size--;

//             }
//         }
//     }

//     printf("\nArray after deleating duplicate elements of an array\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d", arr[i]);
//     }

//     return 0;
// }

// counting the duplicate elements of an array
// #include <stdio.h>
// int main()
// {
//     int a[10], size, count=0;
//     printf("Entre the size of an array:");
//     scanf("%d", &size);

//     printf("\nElements of the array are\n");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 count++;
//                 break;
//             }
//         }
//     }

//     printf("\nSo,the number of duplicate elements of athe array :%d", count);

//     return 0;
// }

// Put even and odd elements of an array in two separate arrays.

#include <stdio.h>

// odd and even
/*
 int main()
 {
     int a[10], odd[10], even[10], size;
     printf("Entre the size of an array:");
     scanf("%d", &size);
     printf("Entre elements of an array\n");
     for (int i = 0; i < size; i++)
     {
         scanf("%d", &a[i]);
     }
     printf("Even elements are :\n");

     for (int i = 0; i < size; i++)
     {
         if (a[i] % 2 == 0)
         {
             even[i] = a[i];
             printf("%d\n", even[i]);
         }
     }
     printf("\nOdd elements are :\n");
     for (int i = 0; i < size; i++)
     {
         if ((a[i] + 1) % 2 == 0)
         {
             odd[i] = a[i];
             printf("%d\n", odd[i]);
         }
     }

     return 0;
     }
     */

// #include<stdio.h>
// int main()
// {
//     int a[10],size,count=0,j,b[10];
//     printf("Size of the array:");
//     scanf("%d",&size);
//     printf("Elements of the array are \n");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\nDuplicate elements of the aarray are:\n");

//     for (int i = 0; i < size; i++)
//     {
//         count=1;
//         for (int j = i+1; j < size; j++)
//         {
//             if (a[i]==a[j])
//             {
//                 count++;
//                 b[i]=0;
//             }

//         }

//         if (b[i]!=0)
//         {
//             b[i]=count;
//         }

//     }

//    for (int i = 0; i < size; i++)
//    {
//        if (b[i]==1)
//        {
//            printf("%d\n",a[i]);
//        }

//    }

//     return 0;
// }

//   bubble sort
/*
int main()
{
    int a[20], size, swap;
    printf("\nEntre the size of the array:");
    scanf("%d", &size);

    printf("Entre the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array before bubble sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", a[i]);
    }

    // now bubble sort

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
    }
    printf("\n");

    printf("Array after bubble sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}
*/

// selection sort

/*
int main()
{
    int a[20], size, swap;
    printf("\nEntre the size of the array:");
    scanf("%d", &size);

    printf("Entre the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array before selection sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", a[i]);
    }

    // now selection sort

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[i])
            {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    printf("\n");

    printf("Array after selection sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}
*/

// merge sort           (based on divide and conquor) (sorting is done recursively)

void merge(int a[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int left[n1]; // temp array
    int right[n2];

    // now saving left and right half of array in temp array

    for (int i = 0; i < n1; i++)
    {
        left[i] = a[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        right[j] = a[mid + j + 1];
    }

    int i = 0, j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            k++;
            i++;
        }
        else
        {
            a[k] = right[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        a[k] = left[i];
        k++;
        i++;
    }
    while (i < n2)
    {
        a[k] = right[j];
        k++;
        j++;
    }
}

void mergesort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;

        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);

        merge(a, l, mid, r);
    }
}

int main()
{
    int arr[20], size;
    printf("Entre the size of teh array\n");
    scanf("%d", &size);

    printf("Entre array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before merge sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", arr[i]);
    }

    // now merge sort

    mergesort(arr, 0, size - 1);

    printf("\n");
    printf("Array after merge sort:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", arr[i]);
    }

    return 0;
}
