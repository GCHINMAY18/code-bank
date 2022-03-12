// Suppose ABC is a private limited company which manages the employee records of other companies. Employee id can be of any length, and it can contain any character. The following are the task you have to perform for three employees.

// Take the length of an employee id as an input and store it in an integer length variable
// Take an employee id as an input and display it on the screen.
// Save the employee id in a character array, which is allocated dynamically.
// Create only one character array dynamically.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0;
    int chars;
    char *id;
    printf("Entre the number of empliyee whose id you want:\n");
    scanf("%d", &n);

    while (i < n)
    {
        printf("Employee %d: Entre the number  of characters in your employee id:\n", i + 1);
        scanf("%d", &chars);

        id = (char *)malloc((chars + 1) * sizeof(char));

        printf("Entre your id now:\n");
        scanf("%s", id);                                                //because char pointer that's why & is not used if int then have to use 
        printf("Employee %d\n your id is: %s \n", i + 1, id);

        free(id);
        i = i + 1;
    }

    return 0;
}
