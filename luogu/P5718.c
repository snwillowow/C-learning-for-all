#include <stdio.h>

int min(int a[], int n)
{
    if (n == 1)
        return a[0];
    if (a[n - 1] < a[n - 2])
    {
        int temp;
        temp = a[n - 1];
        a[n - 1] = a[n - 2];
        a[n - 2] = temp;
    }
    min(a, n - 1);
}

int main()
{

    // 获取n和a[n]
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    // 求最小值，依旧使用冒泡缩略版
    int temp;
    for (int j = 0; j < n - 1; j++)
        if (a[j] < a[j + 1])
        {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }

    // 打印最小值
    printf("%d\n", a[n - 1]);
    printf("%d\n", min(a, n));

    return 0;
}