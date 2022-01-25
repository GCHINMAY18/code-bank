#include <stdio.h>
// first pattern
/*
int main()
{
    int num;
    printf("Entre the number of lines you want to print the start pattern\n");
    scanf("%d",&num);
    printf("\n\nYour pattern is below:\n");

    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <=row; col++)
        {
            printf("*");
        }
        printf("\n");

    }


    return 0;
}
*/
// pattern 2
/*
int main()
{ int num;
    printf("Entre the number of lines you want to print the start pattern\n");
    scanf("%d",&num);
    printf("\n\nYour pattern is below:\n");
    for (int row = 1; row <= num; row++)
    {
        for (int col = 0; col <=num; col++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
*/

// pattern 3
/*
int main()
{int num;
    printf("Entre the number of lines you want to print the star pattern\n");
    scanf("%d",&num);
    printf("\n\nYour pattern is below:\n");
    for (int row = 0; row < num; row++)
    {
        for (int col = 1; col < num-row+1; col++)
        {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}
*/

// pattern4
/*
int main()
{
    int num;
    printf("\nEntre the number of line you want to print the pattern\n");
    scanf("%d", &num);
    printf("\nYour pattern is below\n");

    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    

    return 0;
}
*/

// pattern5
/*
int main()
{
     int num;
    printf("\nEntre the number of line you want to print the pattern\n");
    scanf("%d", &num);
    printf("\nYour pattern is below\n");

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    for (int row = 0; row < num; row++)
    {
        
        for (int col = 1; col <(num-row); col++)
        {
            printf("*");
        }
        printf("\n");
     

    }
    
    return 0;
}
*/

//pattern 6 diamond star pattern 

int main()
{
     int num;
    printf("\nEntre the number of line you want to print the pattern\n");
    scanf("%d", &num);
    printf("\nYour pattern is below\n");

    for (int  row = 1; row < 2*num; row++)
    {
        for (int col = 0; col <; col++)
        {
            /* code */
        }
        
    }
    
    
    return 0;
}

