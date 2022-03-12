#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *operation;
    int p, r, t;

    operation = argv[1];
    p = atoi(argv[2]);
    r = atoi(argv[3]);
    t = atoi(argv[4]);

    printf("Operation :%s\n",operation);
    printf("Principal :%d\n",p);
    printf("Rate :%d\n",r);
    printf("Time :%d\n",t);
    printf("The simel intrest is:%d",(p*r*t)/100);

    return 0;
}
