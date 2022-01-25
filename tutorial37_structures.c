#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
}chinmay, tanmay, ridu, tishu;

//struct student chinmay, tanmay, ridu, tishu;

int main()
{
    //struct student chinmay, tanmay, ridu, tishu;

    chinmay.id = 1;
    tanmay.id = 2;
    ridu.id = 3;
    tishu.id = 4;

    chinmay.marks = 461;
    tanmay.marks = 461;
    ridu.marks = 470;
    tishu.marks = 445;

    chinmay.fav_char = 'c';
    ridu.fav_char = 'r';
    tanmay.fav_char = 't';
    tishu.fav_char = 't';

    strcpy(chinmay.name, "Chinmay gupta");
    strcpy(tanmay.name, "Tanmay Gupta");
    strcpy(ridu.name, "Rudrakshi Gupta");
    strcpy(tishu.name, "Tanisha Gupta");

    printf("\nThe name of candidate is: %s \n His id is: %d\n Marks obtained by him in +2 is: %d\n And his favorite character is: %c\n", chinmay.name, chinmay.id, chinmay.marks, chinmay.fav_char);
    printf("\nThe name of candidate is: %s \n His id is: %d\n Marks obtained by him in +2 is: %d\n And his favorite character is: %c\n", tanmay.name, tanmay.id, tanmay.marks, tanmay.fav_char);
    printf("\nThe name of candidate is: %s \n Her id is: %d\n Marks obtained by her in +1 is: %d\n And her favorite character is: %c\n", ridu.name, ridu.id, ridu.marks, ridu.fav_char);
    printf("\nThe name of candidate is: %s \n Her id is: %d\n Marks obtained by her in +1 is: %d\n And her favorite character is: %c\n", tishu.name, tishu.id, tishu.marks, tishu.fav_char);

    return 0;
}
