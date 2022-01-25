#include <stdio.h>

int natural(int n)
{
    if (n==0)
    {
        return 0;
    }

    else
    {
     natural(n - 1);
    }

    printf("%-3d", n);
}

int main()
{
    int num;
    printf("Entre the natural number till where you want natural number  \n");
    scanf("%d", &num);

    natural(num);

    return 0;
}