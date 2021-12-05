
#include<stdio.h>          
int i;
int sum(int a,int b); 


int sum(int a, int b )
{                                        // Function code example of with argument  and with return value 
       return a+b;

}

void printstar(int n)
{
     for ( i = 0; i<n; i++)               // Function code example of with argument  and without return value 
     {
         printf("%c",'*');
     }
     
}

int takenumber()
{
    int num;
    printf("Entre the  number\n");        // Function code example of without argument  and with return value 
    scanf("%d",&num);
    return num;
}

void name()
{
    int n;
   printf("entre the value of n\n");
    scanf("%d",&n);
    printf("The value of n is :%d",n);
    
    
}






int main()                       
{
    int a,b,c,d,e;
    a=9;
    b=87;
    c=sum(a,b);
    // printstar(7);
    //printf("\n the sum is: %d",c);
    //d=takenumber();
    // printf("\nThe number is %d",d);
    
   name();
   
    
    return 0;
}




