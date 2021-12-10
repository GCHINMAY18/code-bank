#include <stdio.h>
/*
int main()
{
    int a,b;
    printf("Entre the two variables\n");
    scanf("%d",&a);
    scanf("%d",&b);

       printf("The original value of a is:%d \n",a);
     printf("The original value of b is:%d \n",b);
    int  temp=a;
     a=b;
     b=temp;

     printf("The new value of a is:%d \n",a);
     printf("The new value of b is:%d \n",b);


    return 0;
}
*/

// no. of days in a particular month
/*int main()
{
    int month;
    printf("Entre the month between 1-12\n");
    scanf("%d",&month);

    if (month==1 ||  month==3 || month==5 ||month==7 ||month==8||month==10||month==12)
    {
        printf("\nNo.of days  is 31   ");

    }
    else if(  month==4||  month==6 || month==9 ||month==11   )
    {
           printf("\nNo.of days  is 30   ");
    }

    else if (month==2)
    {
         printf("\nNo.of days  is 28 and if leap year  no of days is 29  ");
    }

    return 0;
}
*/


//if one number is multiple number of other 

int main()
{
    int a,b;
    printf("Entre the value of a\n");
    scanf("%d",&a);
    printf("Entre the value of b\n");
    scanf("%d",&b);

    if (a%b==0)
    {
        printf("a is the multiple of b\n");
    }
    else if (b%a==0)
    {
        printf("b is the multiple of a\n");
    }
    else
    {
        printf("Both are not multiple of each other ");
    }



    return 0;
}




//ques.9   grade and number 



/*
int main()
{
    int num;
    printf("Entre the number earned in the quiz from 10\n ");
    scanf("%d", &num);
    if (num == 10 || num == 9)
    {
        printf("Your grade is: A  ");
    }
    else if (num == 8 || num == 7)
    {
        printf("Your grade is: B  ");
    }
    else if (num == 6 || num == 5)
    {
        printf("Your grade is: c  ");
    }
    else if (num == 4 || num == 3)
    {
        printf("Your grade is: D  ");
    }
    else if (num < 3)
    {
        printf("sorry you have failed the quiz  ");
    }
    else
    {
        printf("Entre valid number  ");
    }

    return 0;
}
*/