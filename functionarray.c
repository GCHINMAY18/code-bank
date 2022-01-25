#include<stdio.h>


int avg(int array[])
{
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum=sum+array[i];
    }
    
    return sum/5;


}


int main()
{
    int arr[5];
    printf("entre the values\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

int av= avg(arr);

printf("Average is %d",av);
    
    
    return 0;
}