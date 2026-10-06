#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // 打印矩形
    int i, j = 0;
    for (i = 1; i <= n * n; i++)
    {
        if (i <= 9)
            printf("0%d", i);
        else
            printf("%d", i);
        if (i % n == 0)
            printf("\n");
    }

    printf("\n");

    // 打印三角形
    int k = 0;
    int m = 0;
    for (i = 1; i <= (n + 1) * n / 2; i++)
    {
        if (k == 0 || k % n == 0)
        {
            m++;
            int void_len = ((n - m) > 0) ? (n - m) : 0;
            for (j = 0; j < void_len; j++)
            {
                printf("  ");
                k++;
            }
        }
        if (i <= 9)
            printf("0%d", i);
        else
            printf("%d", i);

        k++;
        if (k != 0 && k % n == 0)
            printf("\n");
    }
    return 0;
}