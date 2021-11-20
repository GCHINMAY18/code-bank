#include<stdio.h>
/*int main()
{
    int a,b;
    printf("entre the value of a\n");
    scanf("%d",&a);

    printf("entre the value of b\n");
    scanf("%d",&b);

     int sum =a+b;
    printf("sum of a and b is\n%d ", a+b);

    return 0;

}*/

/*int main(){
    int num;
    scanf("%d",&num);
    int sum = 0;
    while(num!=0){
        int rem = num%10;
         sum = sum+rem;
         num = num/10;
    }
    printf("%d",sum);
}*/

int main()
{
    int t;
    printf("Entre the value of time in seconds\n");
    scanf("%d",&t);

    float hrs=t/3600;
    printf("Entered seconds in hours is: %f", hrs);
     
    float sec=t/60;
     printf("\nEntered seconds in minutes is: %f", sec);

    



    return 0;
}





