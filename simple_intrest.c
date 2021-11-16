#include<stdio.h>

int main()
{
    int p,r,t;
    
    printf("Entre the value of p\n");
    scanf("%d" ,&p);

    printf("Entre the value of r\n");
    scanf("%d" ,&r);

    char ask;
    printf("If you want to get SI as yearly , half yearly or quaterly then entre (y,h,q) respectively  \n");
    scanf("%s" ,&ask );

    if (ask== 'y')
    {
    printf("Entre the value of t in year\n");
    scanf("%d" ,&t);

    int  SI= p*r*t/100;
    printf("Therefore the value of simple intrest is: %d " , SI);

    }
    
   else if (ask=='h') 
   {
   printf("Entre the value of t as half yearly\n");
   scanf("%d" ,&t);

   int  SI= p*r*t/200;
    printf("Therefore the value of simple intrest is: %d " , SI);

     }

    else if ( ask=='q'){
    printf("Entre the value of t as quaterly\n");

     int  SI= p*r*t/400;
    printf("Therefore the value of simple intrest is: %d " , SI);

    }
    
    else{
        printf("Thank you");
    }
     
    
    return 75;
}
