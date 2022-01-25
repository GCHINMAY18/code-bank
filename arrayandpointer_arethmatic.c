#include<stdio.h>
int main()
{
    // int a=2;
    // int* ptra=&a;
    // printf("%d",ptra);
    // ptra++;
    // printf("\n%d",ptra);
    // printf("\n%d",ptra-2);
    // // a++;
    // // printf("%d",a);
    // // int* ptra=&a;
    // // ptra=ptra+1;
    // // printf("\n%d",ptra);


    int arr[]={11,23,45,67,12,89};
    printf("The value at the 4th position of the array is %d\n ",arr[3]);
    printf("The addres of the first element of the array is %d\n",&arr[0]);
    printf("The addres of the first element of the array is %d\n",arr);
    printf("The addres of the second element of the array is %d\n",&arr[1]);
    printf("The addres of the second element of the array is %d\n",arr+1);
    printf("The addres of the third element of the array is %d\n",&arr[2]);
    printf("The addres of the third element of the array is %d\n\n",arr+2);

     printf("the value of first element of the array is %d\n",arr[0]);
    printf("The value the first element of the array is %d\n",*arr);
    printf("The value the first element of the array is %d\n",*(&arr[0]));
    printf("The value the sixth element of the array is %d\n",*(arr+5));
    printf("The value the sixth element of the array is %d\n",*(&arr[5]));
    printf("The value the sixth element of the array is %d\n",arr[5]);



    
    return 0;
}
