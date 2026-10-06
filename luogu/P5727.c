#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[1000] = {n, 0};
    int i;
    for (i = 1;; i++)
    {
        if (n == 1)
        {
            a[i] = 1;
            break;
        }
        if (n % 2 == 1)
        {
            a[i] = 3 * n + 1;
            n = a[i];
        }
        else
        {
            a[i] = n / 2;
            n = a[i];
        }
    }

    for (--i; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}