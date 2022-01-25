#include<stdio.h>

int main()
{
    printf("Lets learn about pointers \n");
    int a=18;
    int* ptra=&a;
    int* ptr2;
    int* ptr3= NULL;
    printf("The value os a is     %d\n",a);
    printf("The value of a is    %d\n",*ptra);
    printf("The adress of a is  %p\n",&a);
    printf("The adress of a is  %p\n",ptra);
    printf("The adress of pointer to a is   %p\n",&ptra);
    printf("The adress of some garbage  is   %p\n",&ptr2);
    printf("The value  of a null pointer is    %d\n",ptr3);
    



    
    return 0;
}
