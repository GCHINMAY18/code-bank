#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name = NULL; // done this to make name ,lic_no,route a dynamic array
    char *lic_no = NULL;
    char *route = NULL;

    int kms;

    int n, i = 0;

    printf("Entre the number of drivers in your company\n");
    scanf("%d", &n);

    int name_c, lic_no_c;
    while (i < n)
    {
        printf("\nEntre the number of characters in your name:");
        scanf("%d", &name_c);
        printf("\nEntre the number of characters in your licence:");
        scanf("%d", &lic_no_c);

        name = (char *)malloc((name_c + 1) * sizeof(char));
        lic_no = (char *)malloc((lic_no_c + 1) * sizeof(char));           // made name,lic_no,route a dynamic array
        route = (char *)malloc(20 * sizeof(char));

        printf("Driver%d enter your details now\n", i + 1);

        printf("Driver%d enter your name:\n", i + 1);
        scanf("%s", name);
        printf("Driver%d enter your licence number:\n", i + 1);
        scanf("%s", lic_no);                                           // because char pointer that's why & is not used if int then have to use
        printf("Driver%d enter your route:\n", i + 1);
        scanf("%s", route);
        printf("Driver%d enter approx km covered by  you  :\n", i + 1);
        scanf("%d", &kms);

        printf("\n");
        printf("Details of Driver%d\n", i + 1);
        printf("Name                 : %s\n", name);
        printf("Licence number       : %s\n", lic_no);
        printf("Route                : %s\n", route);
        printf("Kilometers covered   : %d\n", kms);

        free(name);
        free(lic_no);
        free(route);
        i = i + 1;
    }

    return 0;
}
