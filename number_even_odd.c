#include<stdio.h>

/*int main()
{
    int num;
    printf("Entre the value of number\n");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("the number is even");

    }
    else {
        printf("mumber is odd");
    }
    
    return 0;
}
*/


int main()
{
    int n;
    scanf("%d",&n);

    if (n<0)
    {
        n*=-1;
    }
    printf("%d",n);

    return 0;
}
