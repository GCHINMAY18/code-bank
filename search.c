#include <stdio.h>

// linear  search
/*
int main()
{
    int a[20],size,search,count=0;
    printf("entre tthe size of the array\n");
    scanf("%d",&size);

    printf("entre the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("entre the element to be searched in the array:");
    scanf("%d",&search);

    for (int i = 1; i <= size; i++)
    {
        if (search==a[i])
        {
            printf("\nElement found in the %d position of the array\n",i);
            count++;
        }

    }

    if (count!=0)
    {
        printf("The element %d is found in the array\n",search);
    }
    else
    {
        printf("Element not found in the array");
    }




    return 0;
}
*/

//  2.binary search
//                itartive approch

int main()
{
    int a[20], size, search;
    printf("Entre the size of the array\n");
    scanf("%d", &size);

    printf("Enter the elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Entre the number to be searched \n");
    scanf("%d", &search);

    int low = 0;
    int high = size - 1;

    int mid = (low + high) / 2;

    while (low <= high)
    {

        if (a[mid] < search)
        {
            low = mid + 1;
        }
        else if (a[mid] == search)
        {
            printf("\n%d found at the %d location of thr array", search, mid + 1);
            break;
        }
        else
        {
            high = mid - 1;
        }
        mid = (high + low) / 2;
    }
    if (low > high)
    {
        printf("%d not found in the array\n", search);
    }

    return 0;
}
