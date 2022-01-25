#include <stdio.h>

// 1. bubble sort
/*
int main()
{
    int a[20], size, swap;
    printf("Entre the size of the array:");
    scanf("%d", &size);

    printf("Entre the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nArray before bubble sort:\n");
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
    printf("Array after bubble sort:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}
*/

// 2.selection sort
/*
int main()
{
    int a[20], size, swap;
    printf("Entre the size of the array:");
    scanf("%d", &size);

    printf("Entre the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nArray before selection sort:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", a[i]);
    }

    // now sselection sort

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
    printf("Array after selection sort:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}
*/



// 3.  Merge sort   (Based on divide and conquor rule)

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int left[n1];
    int right[n2]; // taking temporary array

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[mid + j + 1];
    }

    int i = 0, j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int array[20], size;
    printf("Entre the size\n");
    scanf("%d", &size);
    printf("Entre the elements of the array:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Array before merge sort:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", array[i]);
    }
    printf("\n");

    mergesort(array, 0, size - 1); // the recursively sorted array is called by this function

    printf("Array after merge sort:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", array[i]);
    }

    return 0;
}
