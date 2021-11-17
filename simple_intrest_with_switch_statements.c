#include<stdio.h>

int main()
{
  int p,r,t;

  printf("Entre the value of p\n");
  scanf("%d",&p);

  printf("Entre the value of r\n");
  scanf("%d",&r);
  
  char ask;
  printf("If tou want to get the value of SI as Yearly , Half yearly  or quaterly entre y,h,q respectively\n");
  scanf("%s", &ask);

  switch (ask)
  {
  case  'y':
       printf("Entre the value of time as yearly:");
       scanf("%d",&t);

       int  SI= p*r*t/100;
    printf("Therefore the value of simple intrest is: %d " , SI);
      
      break;

      case 'h':
       printf("Entre the value of time as half yearly:");
       scanf("%d",&t);

       int  SI1= p*r*t/200;
    printf("Therefore the value of simple intrest is: %d " , SI1);
      
      break;

      case 'q':
       printf("Entre the value of time as quaterly:");
       scanf("%d",&t);

       int  SI2= p*r*t/400;
    printf("Therefore the value of simple intrest is: %d " , SI2);
      
      break;

  default:
  printf("Thank you");
      break;
  }

    
    return 0;
}
