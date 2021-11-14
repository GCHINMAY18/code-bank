#include<stdio.h>

int main()
{
    int m1,m2;
    printf("entre your marks in maths and science\n");
    scanf("%d %d" ,&m1,&m2);

    if (m1>=50 && m2>=50)
    {
         printf(" You have won $45\n");
    }
    
    else if (m1<50 || m2<50 )
    {
        printf("You have won $25");
    }

    else
    {
        printf(" Sorry you have failed you didnot won anything\n");
    }
    

    
    return 0;
}
