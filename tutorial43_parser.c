#include <stdio.h>
#include <string.h>

/*
void parser(char *str)       //we can also directly call the first elemnet to the function then it can access all the elements to the function (char  str[])
{
    int in = 0;
    int index = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    // now removing the starting wide spaces

    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            // shift the str to the left
            str[i] = str[i + 1];
        }
    }

    // now removing the ending wide spaces

    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>   This  is a heading     </h1> ";

    parser(string);

    printf("\nThe parsed str is : ~~%s~~", string);

    return 0;
}
*/

// Input: #My name is tanmay #
// Output:My name is tanmay

void parser1(char st[]) // we can also call pointer in the function praser1(char *st)
{
    int in = 0;
    int index = 0;

    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] == '#')
        {
            in = 1;
            continue;
        }
        else if (st[i] == '@')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            st[index] = st[i];
            index++;
        }
    }
    st[index] = '\0';                                        // trailing null character to tell that the string is ended

    // for removing the starting trailling white spaces

    while (st[0] == ' ')
    {
        for (int i = 0; i < strlen(st); i++)
        {
            st[i] = st[i + 1];
        }
    }

    // for removing the ending trailling white spaces

    while (st[strlen(st) - 1] == ' ')
    {
        st[strlen(st) - 1] = '\0';
    }
}

int main()
{
    char string[] = "#@My name is tanmay#@";

    parser1(string);

    printf("\nThe parsed string is:\n\n!!%s!! ", string);

    return 0;
}

/*
void parser1(char st[])
{
    int in = 0;
    int index = 0;

    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] == '#')
        {
            in = 1;
            continue;
        }
        if (in == 1)
        {
            st[index] = st[i];
            index++;
        }
    }
    st[index]='\0';

    while (st[0] == ' ')
    {
        for (int i = 0; i < strlen(st); i++)
        {
            st[i] = st[i + 1];
        }
    }

    while (st[strlen(st) - 1] == ' ')
    {
        st[strlen(st) - 1] = '\0';
    }
}

int main()
{
    char string[] = "#My name is tanmay#";

    parser1(string);

    printf("\nThe parsed string is:\n\n!!%s!! ", string);

    return 0;
}
*/
