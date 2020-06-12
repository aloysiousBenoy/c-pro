#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int a0 = 0; a0 < t; a0++)
    {
        int n;
        int sum = 0;
        scanf("%d", &n);
        for (int i = 3; i <= n; i++)
        {
            if (i % 3 == 0 || i % 5 == 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}