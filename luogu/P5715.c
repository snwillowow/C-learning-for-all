#include <stdio.h>
#define N 3
int main()
{

    // 获取三个整数
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    // 比大小
    int temp;
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

    // 打印数列
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}