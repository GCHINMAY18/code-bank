#include<stdio.h>

int main()
{
    int r;
    printf("entre  radius of the circle \n");
    scanf("%d" , &r );
 
    int area = 3.14*r*r;

    int perimeter=2*3.14*r;


    printf("area of the circle is\n %d " ,area );
    printf("\nperimeter of the circle is\n %d" , perimeter);   // to print the perimeter  of the circle on the new line we have to ad the backslach n (\n) in the starting of the new print satement

   //    printf("area of the circle is: %d\n" ,area );
   // printf("perimeter of the circle is: %d" , perimeter);   recommended format  
    return 0;
}
