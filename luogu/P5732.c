#include <stdio.h>
#define MAREA 30
int main()
{
    int n;
    scanf("%d", &n);
    int a[MAREA][MAREA] = {0};
    for (int i = 0; i < MAREA; i++)
    {
        a[i][0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}