#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));                         /
    }
}

int main()
{
     int num;
     printf("Entre the number for which you want factorial of that\n");
     scanf("%d",&num);
     printf("The factorial of the number :%d \n Is :%d " , num, factorial(num));
    return 0;
}



/*int main()
{
    int n ,i;
    printf("Entre the number \n");
    scanf("%d",&n);
     int multi=1;                                                               //itrative approch 
     for ( i = 1; i <=n; i++)
     {
        multi=multi*i;
     }
     printf("The factorial of the number is %d",multi);
    
    return 0;
}
*/




