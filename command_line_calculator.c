// You have to create a command line utility to add/subtract/divide/multiply two numbers
// First command line argument of your c program must be the operation.
// The next arguments being the two numbers. For example:
// >>Command.c add 45 4
// >>49

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char * operation;
    int a, b;
    operation = argv[1];
    a = atoi(argv[2]);
    b = atoi(argv[3]); //  atoi() is a <stdlib.h> function which takes a string and returns number ex. "456"(string)<< chages to 456(number)

    printf("Operation is :%s\n", operation);
    printf("Number1 is:%d\n", a);
    printf("Number2 is:%d\n", b);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", a + b);
    }

    else if (strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", a - b);
    }

    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", a / b);
    }

    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", a * b);
    }
    else
    {
        printf("\nNot valid");
    }

    return 0;
}
