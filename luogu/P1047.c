#include <stdio.h>
#define MAX 11000
int main()
{
    int l, m; // 马路长度和区域数目
    scanf("%d %d", &l, &m);
    int a[MAX] = {0};
    for (int i = 0; i < m; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        for (int j = u; j <= v; j++)
        {
            a[j]++;
        }
    }
    int count = 0;
    for (int i = 0; i <= l; i++)
        if (a[i] == 0)
            count++;
    printf("%d", count);
    return 0;
}