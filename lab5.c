#include <stdio.h>
#include <math.h>
/*
int main()
{
    int l, b, r, x, y, z;

    char ask;
    printf("If want to get the area of circle ,rectangle ,triangle entre c,a,t respectively\n");
    scanf("%c", &ask);

    switch (ask)
    {
    case 'c':

        printf("Value of radius is  \n");
        scanf("%d", &r);

        int area_circle = (3.14 * r * r);
        printf("the area of circle is : %d", area_circle);
        break;

    case 't':

        printf("Sides of triangle are x,y,z\n");
        scanf("%d\n", &x);
        scanf("%d\n", &y);
        scanf("%d\n", &z);
        int s = (x + y + z) / 3;

        int area_triangle = sqrt(s * (s - x) * (s - y) * (s - z));
        printf("Area of triangle is %d", area_triangle);

        break;

    case 'a':

        printf("Value of length is \n");
        scanf("%d", &l);
        printf("Value of bredth is \n");
        scanf("%d", &b);

        int area_rectangle = 2 * l * b;
        printf("Area of triangle is %d", area_rectangle);

        break;

    default:
        printf("Entre a valid situation");

        break;
    }

    return 0;
}
*/

// 3
/*int main()
{
    int day;
    printf("Enter a day\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("The day is MONDAY");
        break;

    case 2:
        printf("The day is TUESDAY");
        break;

    case 3:
        printf("The day is WEDNESDAY");
        break;

    case 4:
        printf("The day is THURSDAY");
        break;

    case 5:
        printf("The day is FRIDAY");
        break;

    case 6:
        printf("The day is SATURDAY");
        break;

    case 7:
        printf("The day is SUNDAY");
        break;

    default:
        break;
    }

    return 0;
}
*/
// 4
/*
int main()
{
    float  a,b;
    printf("Entre the value of a,b\n");
    scanf("%f",&a);
    scanf("%f",&b);
    char opr;
    printf("Entre  operator +,-,/,* respectipely \n");
    scanf("%s",&opr);

    switch (opr)
    {
    case '+':
        printf("The addtion  %d +%d=%d",a,b,(a+b));

        break;
    case '-':
         printf("The subtraction  %d - %d=%d",a,b,(a-b));

        break;
    case '/':
         printf("The addtion  %d /%d=%d",a,b,(a/b));

        break;
    case '*':
         printf("The addtion  %d *%d=%d",a,b,(a*b));

        break;

    default:
    printf("Entre a valid operator");
        break;
    }


    return 0;
}
*/

// 5

int main()
{
    int calls, charge;
    printf("Entre the calls of the elctricity\n");
    scanf("%d",&calls);

    switch (calls)
    {
    case 1 ... 100:
        charge = 200;
        printf("%d", charge);
        break;
    case 101 ... 150:
        charge = 200 + (calls - 100) * 0.6;
        printf("%d", charge);

        break;
    case 151 ... 200:
        charge = 200 + (50 * .6) + (calls - 150) * 0.5;
        printf("%d", charge);
        break;

    default:
        charge = 200 + (50 * .6) + (50 * .5) + (calls - 200) * .4;
        printf("%d", charge);
        break;
    }

    return 0;
}
