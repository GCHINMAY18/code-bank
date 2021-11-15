#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("entre the value of a\n");
    scanf("%d",&a);


    printf("entre the value of b\n");
    scanf("%d",&b);


    printf("entre the value of c\n");
    scanf("%d",&c);

    printf("semi perimeter of the triangle is:%d\n" ,a+b+c/2 );

    int semi=a+b+c/2;
    int s1= semi-a;
    int s2= semi-b;
     int s3 = semi-c;
    int area= sqrt(semi*(s1*s2*s3));

    printf("Area of the triangle is : %d" , area );




    
    return 0;
}

