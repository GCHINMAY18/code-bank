#include<stdio.h>

//call by reference
/*
int change(int* address)
{
    *address=100;
}



int main()
{
    int a=42;
    printf("The value of a is %d\n",a);
    change(&a);
     printf("The value of a now is %d",a);

    return 0;
}
*/

int add(int* x,int* y)
{
    int sum;
  sum=*x+*y;
  
return sum;

}

int sub(int*c,int*d)
{
    int sub;
    sub=*c-*d;


}




int main()
{
    int a,b,sum,min;
    printf("Entre the value of a and b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    
    sum=add(&a,&b);
    min=sub(&a,&b);

    
    printf("Now value of a and b are\n");
    printf("%d\n%d",sum,min);

    return 0;
}
