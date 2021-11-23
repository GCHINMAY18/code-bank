#include<stdio.h>

int main()
{
    int num ;
    scanf("%d", &num);

    int size=4,  i;
    int sum=0;
    for ( i = 0; i < size; i++)
    {
        int rem=num%10;
            sum=sum+rem;
            num=num/10;
    }
    
     printf("%d",sum);

    return 0;
}
