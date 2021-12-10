#include<stdio.h>
#include<math.h>
/*float main()
{
    float num;
    printf("Entre the value of number\n");
    scanf("%f",&num);
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

//2
/*float main()
{
    float n;
    scanf("%f",&n);

    if (n<0)
    {
        n*=-1;
    }
    printf("%f",n);

    return 0;
}
*/

//3

/*
float main()
{
    float year;
    printf("Entre the year\n");
    scanf("%f", &year);


     if (year%400==0)
    {
          printf("The year is a leap year");
    }

    else if(year%100==0){
        printf("The year is not a leap year");
    }
    

   else if (year%4==0)
    {
        printf("The year is a leap year");
    }
    
    else{
        printf("All other year year are not leap ");
    }
    

    return 0;
}
*/

//4

int main()
{
   int a,b,c , real,img;
   printf("Entre the value a,b,c respectively\n");
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);

   float D=((b)^2)-(4*a*c);
   int r1,r2;
   
   if (D==0)
   {
       printf("The roots are real and equal\n");
       r1=r2=-b/2*a;
       printf(" r1 :%d and r2:%d ",r1, r2);
       
   }
   
   else if (D<0)
   {
       printf("The roots are imaginary\n");

       printf("%d %d",r1 , r2);
   }

   else if (D>0)
   {
        printf("The roots real and distinct\n");
         r1=(-b+sqrt(D))/2*a;
         r2=(-b-sqrt(D))/2*a;
        printf("%d %d",r1 , r2);
   }
   
   else{
       printf("\nEntre a valid number");
   }
   
    return 0;
}
