#include<stdio.h>

int main()
{
    int age;
    printf("entre your age\n");
    scanf("%d" , &age);

    printf ("you have entered %d your age\n " , age );

    if (age>=18)
    {
          printf(" you can vote \n");

    }


       else if (age>10)
       {
           printf(" you are a teenager\n");
       }



    else{
             printf("you can't vote"); 
    }
    
    return 0;
}
