
#include <stdio.h>

int main()
{
    int a, b, greatest;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    greatest = (a > b) ? a : b;

    if (a == b)
        printf("Both numbers are equal.");
    else
        printf("Greatest number = %d", greatest);

    return 0;
}
