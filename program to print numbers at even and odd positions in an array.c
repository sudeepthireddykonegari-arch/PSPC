
#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Numbers at odd positions:\n");
    for (i = 0; i < n; i++)
    {
        if ((i + 1) % 2 != 0)
            printf("%d ", a[i]);
    }

    printf("\nNumbers at even positions:\n");
    for (i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
            printf("%d ", a[i]);
    }

    return 0;
}
