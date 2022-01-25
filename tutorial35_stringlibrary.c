#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20], s2[20];
    char s3[20];

    printf("Entre string s1 and s2 respectively:\n");
    gets(s1);
    gets(s2);



   // printf("\n%s is the friend of %s\n",s1,s2);                    //given by harry to do

  

    printf(" \nThe strcmp returned for s1 and s2 is :%d\n", strcmp(s1, s2));                //string comparision function strcmp()

    // printf("\n\nWnhen s1 and s2 strings were combined\n");
    //  puts(strcat(s1,s2));                                                  //    function for combining is strcat()

    printf("\nthe length of s1 string is :%d\n ", strlen(s1));                        // function for length is strlen()
    printf("\nthe length of s2 string is :%d\n ", strlen(s2));

    printf("\ns1 and s2 are copied in s3\n");
    strcpy(s3, strcat(s1, s2));                                                              // function for copy strcpy()
    puts(s3);

    printf("\nreverse of s1 is:\n");
    puts(strrev(s1));                                                                               // function for reverse is strrev()

    printf("\nreverse of s2 is:\n");
    puts(strrev(s2));




    return 0;
}
