#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = 0;
    int temp = 0;
    for (int k = 0; k < m; k++)
    {
        min += a[k];
    }
    temp = min;
    for (int i = 1; i < n - m + 1; i++)
    {
        temp = temp - a[i - 1] + a[i + m - 1];
        min = min > temp ? temp : min;
    }
    printf("%d", min);
    return 0;
}