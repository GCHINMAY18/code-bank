#include<stdio.h>
/*
int main()
{
   int i,j;
  for ( i = 0; i <5; i++)
  {
      for(j=0;j<=i;j++)
      {
      printf("*");
      
      }
       printf("\n");
  }

  
   
}
*/
//nested multiplication table
int main()
{
  int n,k;
  printf("entre the value of n and k\n");
  scanf("%d",&n);
  printf("\n");
  scanf("%d",&k);


  for (int i=1; i<=n; i++)
  {
    printf("Multiplication table of %d is\n");
    for (int j=1; j<=k; j++)
    {
      
      printf("%d*%d =%d\n",i,j,i*j);
    }
    
  }
  
  
  return 0;
}
