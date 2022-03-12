#include <stdio.h>
#include<stdlib.h>

// 1. bubble sort
/*
int main()
{
    int a[20], size, temp;
    printf("\nEntre the size of the array:");
    scanf("%d", &size);

    printf("Entre the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array without soeting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    // now bubble sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Array after bubble sorting: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
*/

// selection sort
/*
int main()
{
    int a[20], size, swap, position;
    printf("Entre the size of the array:\n");
    scanf("%d", &size);

    printf("Entre the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nArray before selection sorting:");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", a[i]);
    }

    // now selction sort
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

    printf("Array after selction sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}
*/

//merge sort (based on divide and conquor)

void   merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1],b[n2];   //temp array
    
    for (int  i = 0; i <n1; i++)
    {
        a[i]=arr[l+i];

    }
    for (int  j = 0; j <n2; j++)
    {
        b[j]=arr[mid+1+j];

    }

    int i=0,j=0;
    int k=l;

    while (i<n1 &&j<n2)
    {
        if (a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=b[j];
            j++;
            k++;
        }   
        
    }

    while (i<n1)
    {
        arr[k]=a[i];
        k++,i++;
    }
    
    while (j<n2)
    {
        arr[k]=b[j];
        k++,j++;
    }

}



void mergesort(int arr[],int l, int r)
{
    if (l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
    
}

void print_array(int A[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%4d",A[i]);
        printf("\n");

    }
    
}




int main()
{
    // int arr[20],size;
    // printf("Entre the size of the array\n");
    // scanf("%d",&size);
    // printf("Entre the elements of the array:\n");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }

    // mergesort(arr,0,size-1);

    // printf("Array after merge sorting: ");
    // print_array(arr,size);
    
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
  
    printf("Given array is \n");
    print_array(arr, arr_size);
  
    mergesort(arr, 0, arr_size - 1);
  
    printf("\nSorted array is \n");
    print_array(arr, arr_size);

    
    return 0;
}
