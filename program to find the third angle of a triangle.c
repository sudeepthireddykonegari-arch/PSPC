
#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter two angles of triangle: ");
    scanf("%f %f", &a, &b);

    c = 180 - (a + b);

    if (a > 0 && b > 0 && c > 0 &&
        a < 180 && b < 180)
    {
        printf("Third angle = %.2f degrees", c);
    }
    else
    {
        printf("Invalid angles");
    }

    return 0;
}
