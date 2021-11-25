#include<stdio.h>

int main()
{
    float num ;
    printf("Entre a number\n");
    scanf("%f",&num );

     if (num<0.0)
     {
        printf("The number %0.1f which you have   entered is negative ",num);
     }
    
    else if (num>0.0)
    {
        printf("The number %0.1f which you have   entered is positive" , num);

    }
     else if (num==0.0){                                                     //use double equal to for comparison because single equalto is assignmeant operator
         printf("The number is zero ");
     }
    
    else{
    printf("Please entre a valid number");
    }
         
        
     

    return 0;
}
