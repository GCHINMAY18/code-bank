#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int generaterandom(int n)
{
    srand(time(NULL));
    return rand()%n;
}

int main()
{
    int num;
    printf("Enter the the number till where you want to generate random number:");
    scanf("%d",&num);

    printf("The random number generated between 0 to %d is: %d",num,generaterandom(num));


    // srand(time(NULL));
    // printf(" Random number is:%d\n ",rand()%100);    //in this way we can genrate random number between any numbe rwe want
    // printf(" Random number is:%d ",rand()%3);
    
    return 0;
}
