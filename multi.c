#include <stdio.h>

int main()
{
    int num;
    //take the number as an input from the user 
    printf("Type the number whose multiplication table is to be printed\n ");
    scanf("%d", &num);
    printf ("The multiplication table of %d\n", num);
    for (int  i = 1; i < 11; i++)
        
        
    {
        printf("%d X %d= %d\n" , num, i, i*num);
    }
   
    
    return 0;
}
