#include <stdio.h>
/*
int sum( int n)
{
    if (n==1)                                                        ques. sum of natural number
    {
        return 1;
    }
    else
    {
        return (n+ sum(n-1));
    }

}

int main()
{
    int num;
    printf("Entre the natural number till where you want sum of the number\n");
    scanf("%d",&num);
    printf("The sum of numbers till %d is :%d",num,sum(num));

    return 0;
}



int main()
{
    int num, i,sum=0;
     printf("Entre the value of number\n");                                itrative appproch
     scanf("%d",&num);

     for ( i = 0; i <=num; i++)
     {
        sum=sum+i;
     }
     printf("Sum of numbers till entred number is %d",sum);
    return 0;
}
*/

// fabonacci series

// itrative approch

/*int main()
{
    int n1=0,n2=1,n3,number,i;
    printf("Entre the number:");
    scanf("%d",&number);
    printf("\n%-4d %-4d",n1,n2);
    for ( i = 0; i <number; i++)

    {
        n3=n1+n2;
        printf("%-4d",n3);
        n1=n2;
        n2=n3;

    }

    return 0;
}
*/

// resursive approch
/*int n1=0,n2=1,n3;
int fibonacci(int n)
{
    if (n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);

         return fibonacci(n-1);

    }

}

int main()
{
    int n;
    printf("Entre the number of elements\n");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    printf("%d %d",n1,n2);
    printf("%-2d ",fibonacci(n-2));

    return 0;
}
*/

// total number of terms in number
// 1.itrative approch

/*int main()
{
    int num,count=0;
    printf("Entre a number\n");
    scanf("%d",&num);

    while(num)
    {
        num/=10;
       count++;

    }
    printf("The number of digits  is %d",count);

    return 0;
}
*/

// recursive approch
/*int count=0;
int digit_count(int n)
{
    if (n!=0)
    {
       count++;
       digit_count(n/=10);

       return count;
    }

}



int main()
{
    int num;
    printf("\nEntre the number for which you want to get total number of digit in that number\n ");
    scanf("%d",&num);
    printf("\nThe number of digit in %d is :  %d",num,digit_count(num));
    return 0;
}
*/

// sum of the digits
// recursive approch
/*
int digit_sum(int n)
{
    int sum=0 , rem, i;

    if (n)
    {
        for (i = 1; i < n; i++)
        {
            rem = n % 10;
            n = n / 10;
            sum = sum + rem;
        }
        return sum;
    }
    else
    {
        return n;
    }
}

int main()
{
    int num;
    printf("Entre the number\n ");
    scanf("%d", &num);

    printf("\nThe sum of the digits in the number is :  %d\n", digit_sum(num));

    return 0;
    
}
*/

int fun(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return 7+fun(n-2);
    }

}

int main()
{
    printf("%d",fun(4));
    
    return 0;
}


