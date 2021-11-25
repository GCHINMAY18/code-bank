#include<stdio.h>

int main()
{
    float num ;
    printf("Entre a number\n");
    scanf("%f",&num );

     if (num<=0.0)
     {
        printf("The number %0.1f which you have   entered is negative ",num);
     }
    
    else if (num>=0.0)
    {
        printf("The number %0.1f which you have   entered is positive" , num);

    }

     

    return 0;
}
