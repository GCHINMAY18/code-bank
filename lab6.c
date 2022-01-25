#include <stdio.h>

// int main()
// {
//     int num,sum=0;
//     printf("Entre the number till where you want the sum\n");
//     scanf("%d",&num);

//     for (int i = 1; i <=num; i++)
//     {
//         sum=sum+i;
//     }
//     printf("The sum the numbers is :%d",sum);

//     return 0;
// }

// int main()
// {
//     int num, i;
//     printf("Entre the  number\n");
//     scanf("%d", &num);

//     for (int i = num; i >0; i--)
//     {
//         if ((i % 2) != 0)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }


// fibonaccii series by itrative approch
// int main()
// {
//     int number, n1=0,n2=1,n3;
//     scanf("%d",&number);

//     printf("The fibonacci series is \n");
//     printf("\n %-4d %-4d",n1,n2);

//     for (int i = 0; i <number; i++)
//     {
//         n3=n1+n2;
//         printf("%-4d",n3);
//         n1=n2;
//         n2=n3;
//     }
    
    
//     return 0;
// }



int main() 
{
    int num,i;        
    printf("Enter the number\n");
    scanf("%d",&num);    

    int count=0;         
    
    for(int i=2;i<num;i++)  
    {
        if(num%i==0)
        count++;
    }
    if(count!=0)           
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }
    
    

    return 0;
}
