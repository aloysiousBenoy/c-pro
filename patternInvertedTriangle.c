#include <stdio.h>

void main()
{
    int i, j;
    int n;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * (n - i) - 1); j++)
        {
            printf("%d ", n - i);
        }
        printf("\n");
    }
}