#include <stdio.h>

int main()
{
    int n;
    double a[100] = {1.00, 1.00};
    scanf("%d", &n);

    if (n == 1 || n == 2)
        printf("%.2lf", a[0]);
    else
        for (int i = 3; i <= n; i++)
        {
            a[i - 1] = a[i - 2] + a[i - 3];
        }
    printf("%.2lf", a[n - 1]);
    return 0;
}