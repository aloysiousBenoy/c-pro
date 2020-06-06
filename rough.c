#include <stdio.h>


/*


2 5 7 8 9 12 13 
3 5 6 9 15 

2 3 5 5 6 7 8 9 9 12 13 15


*/

int main()
{
    int a[50], n,k;
    printf("Enter the no. of elements\n");
    scanf("%d", &n);
    printf("Enter k\n");
    scanf("%d",&k);
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        min=i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[min])
                min=j;
        }
        int t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
    for(int i =0; i<n;i++)
    printf(" %d ",a[i]);

    printf("%d th largest no. is:%d\n",k,a[n-k]);

    return 0;
}