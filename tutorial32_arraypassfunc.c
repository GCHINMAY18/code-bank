#include <stdio.h>


//By declaring array array as a parameter in the function

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Value of array element at %d  is %d\n", i, array[i]);
    }
    // array[0]=485;//very imp point that if you change any value here it gets reflected in main()

    return 0;
}



//By declaring  a pointer in function to hold (!!!)the base addres of the array


int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("Value of array element at %d  is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 345;

    return 0;
}


//example of a 2d array 

int func3(int array3[3][3])
{
    printf("Array elements are:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            // printf("%4.0d",array3[i][j]);
            printf("Value of array element at %d %d  is %d\n", i, j, array3[i][j]);
        }
    }

    return 0;
}

int main()
{
    int arr1[] = {11, 26, 34, 14};

    // printf("Value of array element at 0 index is %d\n",arr[0]);
    //   func1(arr);
    //  printf("Value of array element at 0 index is %d\n",arr[0]);

    int arr2[] = {22, 89, 7, 6};

    // printf("Value of array element at 2 index is %d\n", arr2[2]);

    // func2(arr2);
    // printf("Value of array element at 2 index is %d\n", arr2[2]);

    int arr3[][3] = {{1, 4, 55}, {2, 67, 99}};

    func3(arr3);

    return 0;
}
