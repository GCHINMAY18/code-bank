#include <stdio.h>
#define PI 4.44
int main()
{
    int a=2;
     const float b=9.3;

    //PI =4.44;  // cannot do this since b is a constant 
    printf("tab character \t\t  my baclsclash \a %f" , PI);
    
    // printf("%-8.3f  this or that" , PI);

     // b=2.44;  // cannot do this since b is a constant 

    //  printf("the value of a is %10d and the value of b is %10.1f\n" , a,b );
    // printf(" %8.4f this" ,b);
  

    
    return 0;
}
