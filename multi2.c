#include <stdio.h>

int main()
{
    int num;
    //take the number as an input from the user 
    printf("Type the number whose multiplication table is to be printed\n ");
    scanf("%d", &num);
    int i=1;
    while(i<11){
        printf("%d x %d = %d\n",num,i,i*num);
        i++;
    }
    
    return 0;
}
