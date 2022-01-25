#include<stdio.h>
//1.adding 2 numbers by using pointers

// int main()
// {
//     int a,b,*x,*y,sum;
//     printf("\n\n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     x=&a;
//     y=&b;
//     sum= *x + *y;
//     printf("\nsum=%d",sum);
    
//     return 0;
// }

//swaping numbers using pointers

/*
int main()
{
    int a,b,temp;
    printf("Entre the values:\n");
    scanf("%d",&a);
    scanf("%d",&b);

    int* c=&a;
    int* d=&b;

    temp=*c;
    *c=*d;
    *d=temp;
    printf("The values of a and b are now \n%d\n%d",*c,*d); 
    

    
    return 0;
}
*/
//input and printing array elements using pointers

int main()
{
    int a[20],size;

    int *ptr_a=a;
    printf("Entre the size of the array:");
    scanf("%d",&size);

    printf("Entre the elements of the array\n");
    for (int i = 1; i <= size; i++)
    {
        scanf("%d",ptr_a+i);
    }
    printf("\nElemts of the array are\n");
    for (int i = 1; i <= size; i++)
    {
        printf("%d\n",*(ptr_a+i));
    }
    
    

    
    return 0;
}
