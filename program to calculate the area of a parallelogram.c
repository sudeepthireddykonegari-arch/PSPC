
#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter base of parallelogram: ");
    scanf("%f", &base);

    printf("Enter height of parallelogram: ");
    scanf("%f", &height);

    area = base * height;

    printf("Area of parallelogram = %.2f", area);

    return 0;
}
