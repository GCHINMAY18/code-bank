#include<stdio.h>

/*int main()
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
*/



// int main()
// {
//     int num;
//     printf("Entre a four digit number \n");
//     scanf("%d",&num);

//     int sum=0,rem=0;
//     rem=num%10;
//     num=num/10;
//     sum=sum+rem;

//      rem=num%10;
//     num=num/10;
//     sum=sum+rem;

//      rem=num%10;
//     num=num/10;
//     sum=sum+rem;


//      rem=num%10;
//     num=num/10;
//     sum=sum+rem;

//     printf("sum:%d",sum);

//     return 0;
// }

//reverse of a number 

int main()
{
    int num,rev=0,rem;
    printf("number:");
    scanf("%d",&num);

    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("\nreverse:%d",rev);

    
    



    
    return 0;
}
