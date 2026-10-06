#include <stdio.h>
#define MAXN 120
void torth_light(int a[][MAXN], int n, int m)
{
    a[n + 2][m]++;
    a[n - 2][m]++;
    a[n][m + 2]++;
    a[n][m - 2]++;
    int i, j;
    for (i = n - 1; i <= n + 1; i++)
        for (j = m - 1; j <= m + 1; j++)
            a[i][j]++;
}

void fluorite_light(int a[][MAXN], int n, int m)
{
    int i, j;
    for (i = n - 2; i <= n + 2; i++)
        for (j = m - 2; j <= m + 2; j++)
            a[i][j]++;
}

int main()
{
    int area, torth_count = 0, fluorite_count = 0;
    scanf("%d %d %d", &area, &torth_count, &fluorite_count);
    int a[MAXN][MAXN] = {0};

    int i, j;
    int n, m;
    for (i = 0; i < torth_count; i++)
    {
        scanf("%d %d", &n, &m);
        torth_light(a, n + 1, m + 1);
    }
    for (i = 0; i < fluorite_count; i++)
    {
        scanf("%d %d", &n, &m);
        fluorite_light(a, n + 1, m + 1);
    }

    int sum = 0;
    for (i = 2; i <= (area + 1); i++)
        for (j = 2; j <= (area + 1); j++)
            if (a[i][j] == 0)
                sum++;

    printf("%d", sum);
    return 0;
}