#include<stdio.h>

int main()
{
    int age, marks ;
    printf("Entre your age\n");
    scanf("%d", &age);

      printf("Entre your marks\n");
    scanf("%d", &marks );
    
    
    switch (age)
    {
    case 3:
        printf("The age is 3\n");

        switch (marks)                                    
        {
        case 50:                                                     
        printf("Your marks is 50 ");                          //example of neated switch statements 
            
            break;
        
        default:
            break;
        }
        break;

    case 13:
        printf("The age is 13");
        break;

    case 23:
        printf("The age is 23");
        break;
    
    default:
    printf("The age is not 3, 13 or 23");
        break;
    }

    
    return 0;
}
