
#include <stdio.h>

int main()
{
    int a[100][100], n, i, j, trace = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        trace = trace + a[i][i];
    }

    printf("Trace of matrix = %d", trace);

    return 0;
}
