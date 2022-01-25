#include<stdio.h>

//not a helpful way 
void printstring(char string[])
{
    int i=0;
    while (string[i]!=0)
    {
        printf("%c",string[i]);
        i++;
    }
    
}




//gets( ) and puts () is only for char string 


int main()
{
   // char str[]={'c','h','i','n','m','a','y','\0'};
 //  char str[]="gupta";
  //  printstring(str);

  char str[20];
  gets(str);
  //printf("%s",str);
  puts(str);

    
    return 0;
}
