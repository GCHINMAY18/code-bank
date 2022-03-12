#include <stdio.h>
#include <math.h>

float edistance(int x1, int x2, int y1, int y2)
{
    int a = (x1 - x2);
    int b = (y1 - y2);

    int d = sqrt((a * a) + (b * b));

    return d;
}

float areacircle(int x1, int x2, int y1, int y2, float (*distance)(int x1, int x2, int y1, int y2))
{
    return distance(x1, x2, y1, y2);
}

int main()
{
    int x1, x2, y1, y2;
    float dst;

    printf("\nEnter the co-ordtinates of first point on the plane:\n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    printf("Enter the co-ordtinates of second point on the plane:\n");
    scanf("%d", &x2);
    scanf("%d", &y2);

    dst = areacircle(x1, x2, y1, y2, edistance);

    printf("So,the distance between the two points is:%.2f\n", dst);
    printf("\nBecause given that that radius of the circle is the diatance between the points.\n");
    printf("So,radius of circle will be :%.2f\n", dst);

    float acircle = (3.14) * (dst) * (dst);

    printf("Therefore area of the circle is :%.2f\n", acircle);

    return 0;
}
