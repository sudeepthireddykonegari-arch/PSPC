
#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    printf("Logical AND (&&) = %d\n", (a > 5 && b < 10));
    printf("Logical OR (||) = %d\n", (a < 5 || b < 10));
    printf("Logical NOT (!) = %d\n", !(a > b));

    return 0;
}
