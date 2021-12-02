#include<stdio.h>

int main()
{
    int n,i,j;
    for ( i = 0; i <8; i++)
    {
        printf("\nHello bhai\n\n");
        for ( j = 0; j <3; j++)
        {
            printf("type any number to go on and to exit the loop entre number less than or equal to 10\n");
            scanf("%d",&n);

            if (n<=10)
            {
                goto end;
            }
        }
        
    }
    end:
    printf("\nyou have entered less than or equal to 10 so you have exited the loop\n");
    
    
    return 0;
}
