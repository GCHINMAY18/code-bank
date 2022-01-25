/*#include<stdio.h>

int main()
{
  int num,i;
  printf("Entre the value of the number whose multiplication table you want to print\n");
  scanf("%d",&num);

  printf("Desired multiplication table is :\n");
  for ( i = 1; i <= 10; i++)
  {
      printf("%d X %d =%d\n", num,i,num*i);
  }
  
    
    return 0;
}
*/

#include<stdio.h>

int main()
/*{  int i ,age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n Entre your age\n ",i);
        scanf("%d",&age);
        if (age>10)
        { 
            break;
        }
        
    }
    
    return 0;
}
*/


{
    int i,age;
    for ( i = 0; i <10; i++)
    {
        printf("%d\nEntre your age\n",i);
        scanf("%d",&age );

        if (age>10)
        {
            continue;
        }
        printf("We have not come across any continue statements\n");
        printf("We have not come across any continue statements\n");                    // agar hamari age give condition se badi hogi to ye sabhi bich ke code of skip kar dega 
        printf("We have not come across any continue statements\n");
        printf("We have not come across any continue statements\n");
        printf("chinmay is a good boy\n\t");
        
    }
    

    return 0;
}