#include <stdio.h>

int palindrome(int n)
{
    int revnum = 0, r;
    int originalnum=n;
    while (n != 0)
    {
        r = n % 10;
        revnum = (revnum * 10) + r;
        n = n / 10;
    }

    if (revnum==originalnum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter the number to check wether that number is a palindrome or not\n");
    scanf("%d", &num);

    if (palindrome(num))
    {
        printf("\n%d is a palindrome number\n", num);
    }
    else
    {
        printf("\nNot a palindrome number");
    }

    return 0;
}
