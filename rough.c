#include <stdio.h>
#include <stdlib.h>
void main()
{

    int n;
    printf("Enter n\n");
    scanf("%d", &n);
    int i, j, k;
    int **a;
    int size_of_array = 2 * n - 1;
    a = (int **)malloc(sizeof(int *) * size_of_array);
    for (i = 0; i < size_of_array; i++)
    {
        a[i] = (int *)malloc(sizeof(int) * size_of_array);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * n - 1; j++)
        {

            if (j >= i && j < 2 * n - 1 - i)
            {
                a[i][j] = n - i;
            }
            else if (j < i)
            {
                a[i][j] = n - j;
            }
            else
            {
                a[i][j] = n - ((2 * n - 1) - (j + 1));
            }
        }
    }

    for (i = n; i < 2 * n - 1; i++)
    {
        for (j = 0; j < 2 * n - 1; j++)
        {

            if (j >= 2 * n - 1 - i && j < i)
            {
                a[i][j] = 2 + i - n;
            }
            else if (j >= i)
            {
                a[i][j] = n - ((2 * n - 1) - (j + 1));
            }
            else
            {
                a[i][j] = n - j;
            }
        }
    }

    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = 0; j < 2 * n - 1; j++)
        {
            if (a[i][j] == 0)
                printf(" ");
            else
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}