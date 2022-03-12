/* question


You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

#include <stdio.h>
#include <string.h>

struct driver
{
    char name[30];
    char lic_no[30];
    char route[30];
    int kms;
};

int main()
{
    struct driver d1, d2, d3;

    printf("Driver1 Entre your  details\n\n");

    printf("Entre your name d1 :\n");
    scanf("%s", &d1.name);

    printf("Entre your licence numner d1 :\n");
    scanf("%s", &d1.lic_no);

    printf("Entre your route d1 :\n");
    scanf("%s", &d1.route);

    printf("Entre the approx dictance covered by you d1 :\n");
    scanf("%d", &d1.kms);


    printf("\nDriver2 Entre your  details\n\n");

    printf("Entre your name driver2 :\n");
    scanf("%s", &d2.name);

    printf("Entre your licence numner driver2 :\n");
    scanf("%s", &d2.lic_no);

    printf("Entre your route driver2 :\n");
    scanf("%s", &d2.route);

    printf("Entre the approx dictance covered by you driver2 :\n");
    scanf("%d", &d2.kms);


    printf("\nDriver3 Entre your  details\n\n");

    printf("Entre your name driver3 :\n");
    scanf("%s", &d3.name);

    printf("Entre your licence numner driver3 :\n");
    scanf("%s", &d3.lic_no);

    printf("Entre your route driver3 :\n");
    scanf("%s", &d3.route);

    printf("Entre the approx dictance covered by you driver3 :\n");
    scanf("%d", &d3.kms);


    printf("\n\n******** Now printing all the details of the drivers ********\n\n");

    printf("\nDetails of driver 1\n");

    printf("Name  is : %s\n", d1.name);
    printf("Licence number is : %s\n", d1.lic_no);
    printf("The route is : %s\n", d1.route);
    printf("Approx distace covered is : %d\n", d1.kms);

    printf("\nDetails of driver 2\n");

    printf("Name is : %s\n", d2.name);
    printf("Licence number is : %s\n", d2.lic_no);
    printf("The route is :%s\n", d2.route);
    printf("Approx distace covered is : %d\n", d2.kms);

    printf("\nDetails of driver 3\n");

    printf("Name  is : %s\n", d3.name);
    printf("Licence number  is : %s\n", d3.lic_no);
    printf("The route is : %s\n", d3.route);
    printf("Approx distace covered \n is : %d\n", d3.kms);

    return 0;
}
