#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n - 1];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int j;
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = i; j >= 0; j--)
        {
            if (a[i] > a[j])
                count++;
        }
        printf("%d ", count);
    }
    return 0;
}